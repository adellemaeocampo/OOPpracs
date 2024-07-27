#include <iostream> 
#include <stdio.h>

using namespace std;

extern void two_five_nine(int array[], int n);

int main() {
    int array[6]={2,2,5,5,9,9};
    int n = sizeof(array)/sizeof(array[0]);

    two_five_nine(array, n);

    return 0;
}