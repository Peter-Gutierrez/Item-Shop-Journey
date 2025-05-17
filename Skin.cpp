//This .cpp file incorporates and fills in the objects in the "Skin.h" file
// Peter Gutierrez

#include "Skin.h"
#include <iostream>


Skin::Skin(const string& name, const string& rarity, int vBucks, const string& date) // Parameterized constructor
	: name(name)
	, rarity(rarity)
	, vBucks(vBucks)
	, lastSeenDate(date)
	{}

string Skin::getName() const {
	return name;
}

string Skin::getRarity() const {
	return rarity;
	// I can prepend or append extra text. For example if I want getRarity() to return "Legendary (rare!)" instead of "Legendary" I can do that.
}

int Skin::getVBucks() const {
	return vBucks;
	// I could throw an error inside a getter or return a safe default if somone might have inputted a negative v-buck value. Same for the others

}

string Skin::getLastSeenDate() const {
	return lastSeenDate;
	// might be stored as "Year-Month-Day", but
	// 1) parse the YYYY-MM-DD
	// 2) map "04" → "April"
	// 3) reassemble "April 26, 2025" so I could do that if I need to.
}

void Skin::displaySkin() const {   //NOT DONE
	cout << name << " is part of the" << rarity << " set. " << name << " cost: "
		<< vBucks << " VBucks. It was last seen on" << lastSeenDate << "." << endl;
	
	//" so,"
	//	<< " based on how many times it came back and when, it might come"
	//	<< " on " << "sum date. " << endl << endl;//on this date;  NOT DONE

	//NOT DONE
}