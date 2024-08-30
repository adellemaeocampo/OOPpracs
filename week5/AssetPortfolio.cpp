#include "AssetPortfolio.h"

#include <string>

using namespace std;

AssetPortfolio::AssetPortfolio() {
    this->size = 0;   
    this->product = ""; 
    this->max = 10;
    this->assets = new Asset[max]; 
}

AssetPortfolio::AssetPortfolio(int size) {
    this->size = size;  
    this->max = 10;
    this->assets = new Asset[max]; 
}

int AssetPortfolio::get_num_assets(){
    return size;
}

Asset* AssetPortfolio::get_assets(){
    return assets; 
}  

bool AssetPortfolio::has_asset(string product){
    for (int i=0; i<size; i++) {
        if(assets[i].get_product_type() == product){
            return true;
        } else {
            return false;
        }
    }
    return 0;
}

bool AssetPortfolio::add_asset(Asset new_asset){
    if(size < max ) {
        assets[size++] = new_asset; 
        return true; 
    }
    return 0;
}

AssetPortfolio::~AssetPortfolio(){
    delete[] assets;
}