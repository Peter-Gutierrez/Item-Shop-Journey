#include "dataLoader.h"
#include <fstream>
#include <sstream> // for splitting lines
#include <iostream> // optional: for error messages

using namespace std;

int loadShopData(const string& fileName, Skin shopArray[], int maxSize)

{
	ifstream inFile(fileName);
	if (!inFile) {
		cerr << "Error: File: " << fileName << " could not be open. See what happened, then try again.\n";
		return 0; 
	}


	string line;
	int count = 0;
	int vBucks;
	string name, rarity, date;

	while (count < maxSize && getline(inFile, line)) {
		if (line.empty())
			continue;

		stringstream ss(line);
		getline(ss, name, ',');
		getline(ss, rarity, ',');
		ss >> vBucks;
		ss.ignore(1);
		getline(ss, date);
		

		shopArray[count] = Skin(name, rarity, vBucks, date);

		++count;
	}
	return count;
}