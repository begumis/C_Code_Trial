//Given an array of integers, find the length and location of the longest contiguous sequence of equal values.
#include <stdio.h>

#include <stdio.h>

void findLongestSequence(int arr[], int size, int *number, int *length, int *starting_position) {
    int currentNumber = arr[0];
    int currentLength = 1;
    int maxLength = 1;
    int startPosition = 0;
    int i= 1;
    for (i = 1; i < size; i++) {
        if (arr[i] == currentNumber) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startPosition = i - maxLength;
                *number = currentNumber;
                *length = maxLength;
                *starting_position = startPosition;
            }

            currentNumber = arr[i];
            currentLength = 1;
        }
    }

    // Check for the last sequence
    if (currentLength > maxLength) {
        *number = currentNumber;
        *length = currentLength;
        *starting_position = size - currentLength;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];
    int i=0;
    printf("Enter %d integers separated by spaces: ", size);
    for (i= 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int number, length, starting_position;
    findLongestSequence(numbers, size, &number, &length, &starting_position);

    printf("number=%d length=%d starting_position=%d\n", number, length, starting_position);

    return 0;
}

