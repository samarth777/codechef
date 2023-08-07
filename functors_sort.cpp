#include <iostream>
#include <vector>
#include <algorithm> 

// Step 1: Create a Functor Struct (Comparator)
struct DescendingComparator {
    bool operator()(int a, int b) {
        return a > b;  // Compare in descending order
    }
};

int main() {
    using namespace std;
    DescendingComparator d;
    cout << d(1,2)<<endl;
    // Step 2: Using the Functor (Comparator)
    vector<int> numbers = {15, 3, 7, 1, 9, 20};

    cout << "Original numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 3: Sorting with the Functor (Comparator)
    DescendingComparator descendingComp;
    sort(numbers.begin(), numbers.end(), descendingComp);

    cout << "Sorted numbers in descending order: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
