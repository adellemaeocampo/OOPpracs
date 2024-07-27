
#include <iostream> 

using namespace std; 

extern int max_element(int array[], int n);

int main() {
    int array[5] = {1,2,3,10,1};
    int n = sizeof(array)/sizeof(array[0]);
    cout << "for array: ";
    for(int i=0; i<n; i++){
        cout << array[i] << " ";
    }
    cout << "the max element is: " << max_element(array, n) << endl;
    return 0;
}