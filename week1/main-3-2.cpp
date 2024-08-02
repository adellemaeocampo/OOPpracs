#include <iostream> 

using namespace std;

extern int median_array(int array[], int n);

int main (){
    int array[5]={2,1,4,5,3};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "for array: ";
    for (int i=0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout << "the median is: " << median_array(array, n) << endl;
    return 0;
}