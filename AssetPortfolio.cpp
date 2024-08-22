#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio() {
    int size = 0;
    string product = 0; 
    int max = 10;
    Asset* assets = nullptr; 
}

AssetPortfolio::AssetPortfolio(int size) {
    this->size = size; 
}

int AssetPortfolio::get_num_assets(){
    return size;
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