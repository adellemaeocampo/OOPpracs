#include <iostream>

using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[4]={1,2,3,4};
    int secondarray[4] = {1,2,3,4};
    int n = 4;
    
    cout << "for array: ";
    for (int i=0; i<n; i++){
        cout << array[i] << " ";
        }
    cout << "and: ";
    for (int i=0; i<n; i++){
        cout << secondarray[i] << " ";
        }
     cout << " the total is: " << sum_two_arrays(array, secondarray, n) << endl;

    return 0;
    
}