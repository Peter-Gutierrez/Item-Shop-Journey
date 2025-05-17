#ifndef DATALOADER_H
#define DATALOADER_H
using namespace std;

#include <string>
#include "Skin.h"

const int MAXSKINS = 50;

int loadShopData(const string& fileName, Skin shopArray[], int maxSize);



#endif