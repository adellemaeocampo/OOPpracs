#include <iostream>

using namespace std;

void print_scaled(int array[3][3],int scale){
    int newArray[3][3] = {0};

    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++){
            newArray[i][j] = array[i][j] * scale;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << newArray[i][j];
            if (j < 2) {
                cout << " "; 
            }
        }
        cout << endl;
    }
}