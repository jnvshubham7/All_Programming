
public class Bank {

    private Account[] accounts;

    private int firstAvailableAcc;

    public Bank(int numAccounts) {
        this.accounts = new Account[numAccounts];
        this.firstAvailableAcc = 0;
    }

    public void add(Account account) {
        if (firstAvailableAcc == accounts.length) {
            System.out.println("Bank is full. No account added.");
            return;
        }
        this.accounts[firstAvailableAcc] = account;
        firstAvailableAcc++;
    }

    public Account find(int acctNumber) {
        for (int i = 0; i < firstAvailableAcc; i++) {
            if (accounts[i].getAccountNumber() == acctNumber) {
                return accounts[i];
            }
        }

        return null;
    }

    public void data() {
        if (firstAvailableAcc == 0) System.out.println("EMPTY");;

        String result = "";
        for (int i = 0; i < firstAvailableAcc; i++) {

            System.out.print("Account no : "+accounts[i].getAccountNumber()+" ");
            System.out.println("Balance : "+accounts[i].getBalance());
        }

    }

}