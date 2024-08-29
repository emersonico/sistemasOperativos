#include <stdio.h>


int main(void) {
  //2.1. Write a program in c to find the leap year.

  int year=1900;
  if (year % 400 == 0) {
    printf("%d is a leap year\n", year);
  } else if (year % 100 == 0) {
    printf("%d is not a leap year\n", year);
  } else if (year % 4 == 0) {
    printf("%d is a leap year\n", year);
  } else {
    printf("%d is not a leap year\n", year);
  }
 

}