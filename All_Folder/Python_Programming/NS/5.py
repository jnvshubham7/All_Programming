import typing

from cryptography import utils
from cryptography.exceptions import (
    AlreadyFinalized,
)
from cryptography.hazmat.primitives import ciphers

if typing.TYPE_CHECKING:
    from cryptography.hazmat.backends.openssl.cmac import _CMACContext


class CMAC:
    _ctx: typing.Optional["_CMACContext"]
    _algorithm: ciphers.BlockCipherAlgorithm

    def _init_(
        self,
        algorithm: ciphers.BlockCipherAlgorithm,
        backend: typing.Any = None,
        ctx: typing.Optional["_CMACContext"] = None,
    ):
        if not isinstance(algorithm, ciphers.BlockCipherAlgorithm):
            raise TypeError("Expected instance of BlockCipherAlgorithm.")
        self._algorithm = algorithm

        if ctx is None:
            from cryptography.hazmat.backends.openssl.backend import (
                backend as ossl,
            )

            self._ctx = ossl.create_cmac_ctx(self._algorithm)
        else:
            self._ctx = ctx

    def update(self, data: bytes) -> None:
        if self._ctx is None:
            raise AlreadyFinalized("Context was already finalized.")

        utils._check_bytes("data", data)
        self._ctx.update(data)

    def finalize(self) -> bytes:
        if self._ctx is None:
            raise AlreadyFinalized("Context was already finalized.")
        digest = self._ctx.finalize()
        self._ctx = None
        return digest

    def verify(self, signature: bytes) -> None:
        utils._check_bytes("signature", signature)
        if self._ctx is None:
            raise AlreadyFinalized("Context was already finalized.")

        ctx, self._ctx = self._ctx, None
        ctx.verify(signature)

    def copy(self) -> "CMAC":
        if self._ctx is None:
            raise AlreadyFinalized("Context was already finalized.")
        return CMAC(self._algorithm, ctx=self._ctx.copy())