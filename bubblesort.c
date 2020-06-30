#include<stdbool.h>
#include<stdio.h>

const int SIZE = 5;

void sortNumbers(int * numbers) {
  bool sorted = false;

  // Create a temp variable for swapping values in an array, defining a default value (is it safe to just do `int temp`?) 
  int temp = 0;

  while (!sorted) {
    bool changed = false;

    // Loop 0 .. SIZE - 1 so we get all the indexes of the array
    for (int i=0; i < SIZE; i++) {
      // If nextNum < thisNum, swap
      if (numbers[i + 1] < numbers[i]) {
        // TODO: How does XOR swap without the `temp` var
        temp = numbers[i + 1];
        numbers[i + 1] = numbers[i];
        numbers[i] = temp;
        changed = true;
      }
    }
    sorted = !changed;
  }
}

int main() {
  int testArr[SIZE] = {1, 5, 4, 2, 3};
  sortNumbers(testArr);

  // TODO: Add unit tests, because they are fun and convenient 8-)
  for (int i=0; i < SIZE; i++) {
    printf("%d\r\n", testArr[i]);
  }
  return 0;
}
