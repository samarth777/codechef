#include <iostream>
#include <map>
#include <utility>  // for pair
using namespace std;

int main() {
    // Using map
    map<int, string> studentNames;
    studentNames[101] = "Alice";
    studentNames[102] = "Bob";

    // Using pair
    pair<int, string> studentPair(103, "Charlie");

    cout << "Student 102: " << studentNames[102] << endl;
    cout << "Student " << studentPair.first << ": " << studentPair.second << endl;

    return 0;
}
