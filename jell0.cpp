#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
    ifstream inputFile("purchase_data.txt");

    if (!inputFile.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    map<string, double> itemCosts;
    map<string, int> itemQuantities;

    string itemName;
    double itemPrice;
    int itemQuantity;

    while (inputFile >> itemName >> itemPrice >> itemQuantity) {
        // Add the item to the maps if it doesn't already exist
        if (itemCosts.find(itemName) == itemCosts.end()) {
            itemCosts[itemName] = itemPrice;
            itemQuantities[itemName] = itemQuantity;
        } else { // Update the item's quantity and cost if it already exists
            itemQuantities[itemName] += itemQuantity;
            itemCosts[itemName] += itemPrice * itemQuantity;
        }
    }

    inputFile.close();

    // Print the total cost for each item
    for (auto& item : itemCosts) {
        cout << item.first << ": " << item.second << " (quantity: " << itemQuantities[item.first] << ")" << endl;
    }

    return 0;
}
