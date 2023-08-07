#include <iostream>

class CounterFunctor {
private:
    int count = 0;

public:
    int operator()() {
        return count++;
    }
};

int main() {
    CounterFunctor counter;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Count: " << counter() << std::endl;
    }

    return 0;
}
