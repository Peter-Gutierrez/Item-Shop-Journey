// This .h file sets up the private and public objects as this 
// will ease the use of inputting data into the skin's name, rarity, 
// how much its currency is, and the date it last came to the item shop.

//Peter Gutierrez

#ifndef SKIN_H
#define SKIN_H

#include <string>
using namespace std;

class Skin {
private:
	string name;
	string rarity; 
	int vBucks = 0;
	string lastSeenDate;

public: 
	Skin() = default; // default constructor, so empty name/rarity/date, even vBucks (vBucks = 0)
	Skin(const string& name, const string& rarity, int vBucks, const string& date);

	string getName() const; // returns the display name of a skin.
	string getRarity() const; // gets the rarity category of the skin.
	int getVBucks() const;
	string getLastSeenDate() const;

	void displaySkin() const;
};

#endif //SKIN_H
