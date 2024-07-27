#include <iostream> 

using namespace std; 

extern double weighted_average(int array[], int n); 

int main () {
    int array[5] = {1,2,1,4,1,3};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "the weighted value is: " << weighted_average(array, n) << endl;

    return 0;
}