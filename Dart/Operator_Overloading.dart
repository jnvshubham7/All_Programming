void main() {
  final v1 = Vector(2, 3);
  final v2 = Vector(4, 5);

  final v3 = v1 + v2;
  print(v3); // Outputs: Vector(6, 8)
}

class Vector {
  final int x, y;

  Vector(this.x, this.y);

  Vector operator +(Vector other) {
    return Vector(x + other.x, y + other.y);
  }

  @override
  String toString() => 'Vector($x, $y)';
}
