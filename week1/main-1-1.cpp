#include <iostream>

using namespace std;

extern int array_sum(int[], int); 

int main (){
    int array[4] = {1,2,3,4};
    cout << "the sum of array elements: " << array_sum(array, 4) << endl;
    return 0;
}