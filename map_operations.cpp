#include <iostream>
#include <map>

using namespace std;

int main() {
    // Insertion
    map<string, int> scores;

    scores.insert(make_pair("Alice", 85));
    scores.insert(make_pair("Bob", 90));
    scores["Charlie"] = 78;

    // Accessing
    cout << "Charlie's score: " << scores["Charlie"] << endl;
    cout << "David's score: " << scores["David"] << endl; // David will be inserted with a default value (0)

    // Finding
    auto it = scores.find("Bob");
    if (it != scores.end()) {
        cout << "Bob's score: " << it->second << endl;
    } else {
        cout << "Bob not found in the map." << endl;
    }

    // Erasing
    scores.erase("Bob");

    // Iterating through the map using iterators
    for (auto it = scores.begin(); it != scores.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
