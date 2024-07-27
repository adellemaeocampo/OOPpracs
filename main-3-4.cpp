
#include <iostream>
#include<stdio.h>

using namespace std;

extern void print_pass_fail(char grade);

int main () {
    char grade = 'A';

    cout << "for grade: "  << grade << " that is a: " << endl; 
    print_pass_fail(grade);

    return 0;
}