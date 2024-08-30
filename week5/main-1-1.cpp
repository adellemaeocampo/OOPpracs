#include "Asset.h"
#include<iostream>

using namespace std; 

int main() {

    //test default constructor
    Asset asset1;
    cout << "Asset 1: " << asset1.get_value() << asset1.get_product_type() << endl; 

    //test constructor 
    Asset asset2(5, "type1");
    cout << "Asset 2: " << asset2.get_value() << asset2.get_product_type() << endl; 

    return 0; 
}


