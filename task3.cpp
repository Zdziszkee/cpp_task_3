#include <iostream>

int main() {
    std::string string;
    std::getline(std::cin, string);
    for (int i = 0; i < string.length(); ++i) {
        char first = string[i];
        char second = string[string.length() - i];
        if (first == ' ' || second == ' ')continue;
        if (first == '\0' || second == '\0')continue;
        int result = strncasecmp(&first, &second, 1);
        if (result != 0) {
            std::cout << "Strings are not palindrome";
            return 0;

        }
    }
    std::cout << "Strings are palindrome";
    return 0;
}
