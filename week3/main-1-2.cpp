
#include<iostream> 

using namespace std;

extern void modifyArray(double* array, int size, double value);

int main() {
    double array[5] = {3.0,2.0,1.0,4.0,5.0};
    int size = 5; 
    double value = 2;

    modifyArray(array, size, value);
    for (int i=0; i <size; i++) {
        cout << array[i] << " " << endl;
    }

    return 0;
}