// Sum of digits of a number.

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); // input the 5-digit number

    int sum = 0;
    while (num > 0) {
        sum += num % 10; // get last digit
        num /= 10;       // remove last digit
    }

    printf("%d\n", sum); // output the sum
    return 0;
}
