#include <iostream>

using namespace std;

extern bool is_fanarray(int array[], int n);

int main() {
    int array[5] = {1,2,3,2,1};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "is array in decending order: " << is_fanarray(array, n) << endl;

    return 0;
}

