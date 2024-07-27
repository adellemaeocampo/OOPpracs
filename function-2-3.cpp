#include <stdio.h>

void two_five_nine(int array[], int n) {
    int numTwo = 0;
    int numFive = 0;
    int numNine = 0;

    if (1 < n) {
        for (int i = 0; i < n; i++) {
            switch (array[i]) {
            case 2:
                numTwo++;
                break;
            case 5:
                numFive++;
                break;
            case 9:
                numNine++;
                break;
            default:
                break;
            }
        }
    } 
    printf("2:%d;5:%d;9:%d;", numTwo, numFive, numNine);
}