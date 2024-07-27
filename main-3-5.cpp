
#include <iostream>

using namespace std;

extern double sum_even(double array[], int n);

int main() {
    double array[6] = {1.0,5.0,3.0,4.0,5.0,6.0};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "for array: ";
    for(int i=0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout << "the sum of elements in the even postions in array are: " << sum_even(array, n) << endl;

    return 0;
}