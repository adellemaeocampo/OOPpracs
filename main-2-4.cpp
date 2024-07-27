
#include <iostream> 

using namespace std; 

extern bool is_ascending(int array[], int n);

int main () {
    int array[5] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "is the array in acending order: " << is_ascending(array, n) << endl;

    return 0;
}