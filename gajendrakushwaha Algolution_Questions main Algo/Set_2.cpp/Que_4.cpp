#include <iostream>
#include <cctype>
#include <string>

bool isPalindrome(const std::string& s) {
    std::string filtered;

    for (char c : s) {
        if (std::isalnum(c)) {
            filtered += std::tolower(c);
        }
    }

    int left = 0;
    int right = filtered.length() - 1;

    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    std::string s1 = "A man, a plan, a canal: Panama";
    std::string s2 = "race a car";

    std::cout << std::boolalpha;
    std::cout << "Input: \"" << s1 << "\" Output: " << isPalindrome(s1) << std::endl;
    std::cout << "Input: \"" << s2 << "\" Output: " << isPalindrome(s2) << std::endl;

    return 0;
}
