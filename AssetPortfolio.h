#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.cpp"

#include<string> 

using namespace std;

class AssetPortfolio {
    private:
        int size;
        int max;
        string product;
        Asset* assets; 
    public:
        AssetPortfolio(); 
        AssetPortfolio(int size);
        int get_num_assets(); 
        bool has_asset(string product); 
        Asset *get_assets();
        bool add_asset(Asset new_asset);
        ~AssetPortfolio();
};


#endif