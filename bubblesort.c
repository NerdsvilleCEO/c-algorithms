#include<stdbool.h>
#include<stdio.h>

const int SIZE = 5;

void sortNumbers(int * numbers) {
  // Create a temp variable for swapping values in an array, defining a default value (is it safe to just do `int temp`?) 
  int temp = 0;

  for (int step = 0; step < SIZE - 1; step++) {
    bool changed = false;

    // Loop 0 .. SIZE - 2 so we get all the indexes of the array, skip last element as no swapping is needed at that point
    for (int i = 0; i < SIZE - 1; i++) {
      // If nextNum < thisNum, swap
      if (numbers[i + 1] < numbers[i]) {
        // TODO: How does XOR swap without the `temp` var
        temp = numbers[i + 1];
        numbers[i + 1] = numbers[i];
        numbers[i] = temp;
        changed = true;
      }
    }
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
