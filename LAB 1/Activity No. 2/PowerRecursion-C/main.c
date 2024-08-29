#include <stdio.h>

//2.3 Write a program in c to calculate power using recursion.
int power(int base, int exponent) {
  if (exponent == 0) {
      return 1;  // Base case: any number to the power of 0 is 1
  } else {
      return base * power(base, exponent - 1);  // Recursive case
  }
}

int main() {
  int base = 2;      // Example base
  int exponent = 3;  // Example exponent
  int result;

  result = power(base, exponent);  // Calculate power using recursion

  printf("%d to the power of %d is %d\n", base, exponent, result);

  return 0;
}