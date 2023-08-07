#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
public:
    Person(string name, int age) : name(name), age(age) {}

    string getName() const { return name; }
    int getAge() const { return age; }

private:
    string name;
    int age;
};

class AgeComparator {
public:
    bool operator()(const Person& p1, const Person& p2) const {
        return p1.getAge() < p2.getAge();
    }
};


int main() {
    vector<Person> people;
    people.push_back(Person("Alice", 30));
    people.push_back(Person("Bob", 25));
    people.push_back(Person("Charlie", 40));
    people.push_back(Person("David", 22));

    // Sort using the AgeComparator functor
    sort(people.begin(), people.end(), AgeComparator());

    // Display sorted people
    for (const auto& person : people) {
        cout << person.getName() << " (" << person.getAge() << " years)\n";
    }

    return 0;
}
