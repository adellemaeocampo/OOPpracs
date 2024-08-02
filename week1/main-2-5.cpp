#include <iostream>

using namespace std;

extern bool is_descending(int array[], int n);

int main() {
    int array[5] = {5,4,3,2,1};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "is array in decending order: " << is_descending(array, n) << endl;

    return 0;
}

