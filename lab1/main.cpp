#include <iostream>
#include "include/lab1.hpp"

int main() {
    std:: string text;
    int n;
    char old_value, new_value;
    std::getline(std::cin, text);
    std:: cin >> n >> old_value >> new_value;
    
    std:: cout << replace(text, n, old_value, new_value) << std:: endl;
    return 0;
}