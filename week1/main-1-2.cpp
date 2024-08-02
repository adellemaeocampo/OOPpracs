#include <iostream>

using namespace std;

extern double array_mean(int array[], int n);

int main() {
    int array[0]={};
    cout << "for array the average is: " << array_mean(array, 0) << endl;
    return 0.0; 
}