#include <iostream> 

using namespace std; 

extern double* duplicateArray(double* array, int size);

int main() {
    int size = 5;
    double array[5] = {1,2,3,4,5};

    cout << "printed array: ";
    for(int i=0; i<size; i++) {
        cout << duplicateArray(array, size) << " ";
    }
    cout << " " << endl;


    return 0; 
}