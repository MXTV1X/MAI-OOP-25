#include "../include/lab1.hpp"

std::string replace(std::string text, int n, char old_value, char new_value) {
    int oldValue = 0;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == old_value) {
            oldValue++;
            if (oldValue == n) {
                text[i] = new_value;
                break;
            }
        }
    }
    return text;
}