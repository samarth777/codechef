#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a map to store student IDs and their names
    map<int, string> studentNames;

    // Insert key-value pairs into the map

    // studentNames[102] = "Bob";
    // studentNames[103] = "Charlie"; 

    // Display the contents of the map
    cout << "Initial Map Contents:" << endl;
    for (const auto &pair : studentNames) {
        cout << "ID: " << pair.first << " | Name: " << pair.second << endl;
    }

    // Access a specific student's name using the key
    cout << "Student 102: " << studentNames[102] << endl;

    // Check if a specific student exists in the map
    if (studentNames.find(104) != studentNames.end()) {
        cout << "Student 104 exists." << endl;
    } else {
        cout << "Student 104 does not exist." << endl;
    }

    // Add a new student to the map
    studentNames[104] = "David";
    cout << "Added student 104: " << studentNames[104] << endl;

    // Display the updated map contents
    cout << "Updated Map Contents:" << endl;
    for (const auto &pair : studentNames) {
        cout << "ID: " << pair.first << " | Name: " << pair.second << endl;
    }

    // Modify a student's name
    studentNames[101] = "Alicia";
    cout << "Modified student 101: " << studentNames[101] << endl;

    // Display the final map contents
    cout << "Final Map Contents:" << endl;
    for (const auto &pair : studentNames) {
        cout << "ID: " << pair.first << " | Name: " << pair.second << endl;
    }

    return 0;
}
