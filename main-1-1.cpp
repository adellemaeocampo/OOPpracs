#include <iostream> 

using namespace std; 

extern double arrayMin(double* array, int size); 

int main () {
    double array[5] = {1,2,3,4,5};
    int size = 5; 

    cout << "for array, the min value is: " << arrayMin(array, size) << endl;

    return 0;
}