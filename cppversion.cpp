#include <iostream>

int main() {
    // Check C++ Standard Version
    std::cout << "C++ Standard Version: ";
    
    // C++98/03
    #if __cplusplus == 199711L
        std::cout << "C++98/03";
    // C++11
    #elif __cplusplus == 201103L
        std::cout << "C++11";
    // C++14
    #elif __cplusplus == 201402L
        std::cout << "C++14";
    // C++17
    #elif __cplusplus == 201703L
        std::cout << "C++17";
    // C++20
    #elif __cplusplus == 202002L
        std::cout << "C++20";
    // Future version or unknown
    #else
        std::cout << "Unknown or Future Version";
    #endif

    std::cout << std::endl;

    return 0;
}
