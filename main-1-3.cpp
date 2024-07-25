#include <iostream>

using namespace std;

extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {2,2,3,2,4};
    int number = 2;
    cout <<  "the amount of " << number << "s in this array are: " << num_count(array, 5, 2) << endl;
    return 0;
}