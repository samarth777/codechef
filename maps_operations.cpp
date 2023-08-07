#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a map to store item names and their prices
    map<string, double> itemPrices;

    // Insert key-value pairs into the map
    itemPrices["apple"] = 0.5;
    itemPrices["banana"] = 0.4;
    itemPrices["orange"] = 0.6;

    // Display the contents of the map 
    cout << "Initial Item Prices:" << endl;
    for (const auto &pair : itemPrices) {
        cout << "Item: " << pair.first << " | Price: $" << pair.second << endl;
    }

    // Access the price of a specific item using the key
    cout << "Price of apple: $" << itemPrices["apple"] << endl;

    // Update the price of an item
    itemPrices["apple"] = 0.6;
    cout << "Updated price of apple: $" << itemPrices["apple"] << endl;

    // Check if a specific item exists in the map
    if (itemPrices.find("grape") == itemPrices.end()) {
        cout << "Grape not found. Adding..." << endl;
        itemPrices["grape"] = 0.8;
    }

    // Remove an item from the map
    itemPrices.erase("banana");
    cout << "Removed banana from the map." << endl;

    // Display the final map contents
    cout << "Final Item Prices:" << endl;
    for (const auto &pair : itemPrices) {
        cout << "Item: " << pair.first << " | Price: $" << pair.second << endl;
    }

    // Display the number of items in the map
    cout << "Number of items: " << itemPrices.size() << endl;

    // Check if the map is empty
    if (itemPrices.empty()) {
        cout << "Map is empty." << endl;
    } else {
        cout << "Map is not empty." << endl;
    }

    return 0;
}
