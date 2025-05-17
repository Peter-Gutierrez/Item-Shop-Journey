#include <iostream>
#include "Skin.h"
#include "dataLoader.h"

// Peter Gutierrez

using namespace std;

void displayMenu(); // Initializing function

int main() {
	Skin shop[MAXSKINS];

	//cout << endl << "1. Pickaxes 2. Skins 3. Backblings 4. Wraps 5. Jam Tracks 6. Kicks 7. Emotes 8. Cars 9. Musical Instruments " << endl;


	int shopCount = loadShopData("todays_Shop.txt", shop, MAXSKINS);

	for (int i = 0; i < shopCount; ++i) {
		shop[i].displaySkin();
		
	}
	int choice;
	do {
		displayMenu();
		cin >> choice;
		string ignore;
		getline(cin, ignore);

		switch (choice) {
		case 1:
			cout << " Today's Shop: ";
			for (int i = 0; i < shopCount; ++i) {
				shop[i].displaySkin();
			}
			break;

		case 2: {
			cout << "Enter skin name to search: ";
			string query;
			getline(cin, query);//skips any leftover line

			bool found = false;
			for (int i = 0; i < shopCount; ++i) {
				if (shop[i].getName() == query) {
					cout << "Here is the information for that skin:\n";
					shop[i].displaySkin();
					found = true;
					break;
				}
			}
			if (!found) {
				cout << "Sorry, but " << query << " is not in the item shop today. Check another time.\n";
			}
			break;

		}
		case 3:
			cout << "Thanks for using the Fortnite Skin Tracker! Have a good day.\n";
				break;

		default:
			cout << "Wrong selection, try again please.\n";
		}

	} while (choice != 3);
	
	
	if (shopCount == 0) {
		cout << "No skins loaded, so file is empty. \n";
			return 1;
	}


	cout << "Loaded " << shopCount << " skins: \n";
	for (int count = 0; count < shopCount; ++count) {
		shop[count].displaySkin();
	}



	return 0;
}

void displayMenu() {
	cout << "\n--- Welcome to the Fortnite Item Shop Checker ---\n" << endl;
	cout << endl << "1) View today's shop\n"
		<< "2) Search for a skin \n" << "3) Exit\n" << "Enter Choice ";

}