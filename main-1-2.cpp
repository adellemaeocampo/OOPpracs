#include "AssetPortfolio.h"
#include<iostream>

using namespace std; 

int main() {

    //test default constructor
    AssetPortfolio ap1;
    cout << "Asset Portfolio 1: " << ap1.get_num_assets() << endl; 

    //test constructor 
    AssetPortfolio ap2(5);
    cout << "Asset Portfolio 2: " << ap2.get_num_assets() << endl; 


    return 0; 
}