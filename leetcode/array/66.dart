void main() {
  bool carry = true;
  List<int> digits = [9, 9, 9];

  for (int i = digits.length - 1; i >= 0 && carry; i--) {
    ++digits[i];
    carry = ++digits[i] == 0;
  }
  print(digits);
}
