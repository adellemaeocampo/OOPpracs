#include <iostream> 

using namespace std; 

extern double arrayMin(double* array, int size); 

int main () {
    double array[5] = {3.0,2.0,1.0,4.0,5.0};
    int size = 5; 

    cout << "for array, the min value is: " << arrayMin(array, size) << endl;

    return 0;
}