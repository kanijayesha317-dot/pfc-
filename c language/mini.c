#include <stdio.h>

int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Repeat until number becomes single digit
    while (num > 9) {
        sum = 0;

        // Extract digits and add
        while (num > 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }

        num = sum; // assign sum back to num
    }

    printf("Single digit sum = %d\n", num);

    return 0;
}
