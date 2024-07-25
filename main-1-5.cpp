#include <iostream>

using namespace std;

extern int count_evens(int number);

int main (){
    int number = 10;
    cout << "The amount of even numbers between 1 and " << number << " is " << count_evens(number) << endl;
    return 0;
}