#include <iostream>

using namespace std;

extern int min_element(int array[], int n);

int main(){
    int array[6] = {10,3,4,7,5,6};
    cout << "for array: ";
    for (int i=0; i<6; i++) {
        cout << array[i] << " ";
    } 
    cout << "the smallest number is: " << min_element(array, 6) << endl;
    return 0;
}