
#include <iostream> 


extern void modifyArray(double* array, int size, double value);

int main() {
    double array[5] = {3.0,2.0,1.0,4.0,5.0};
    int size = 5; 
    int value = 2;

    std::cout << modifyArray(array, size, value) << std::endl;
    
    return 0;
}