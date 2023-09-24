#include <iostream>
//token identification

bool isAlphanumeric(char f) {
    return (f >= 'a' && f <= 'z') ||
           (f >= 'A' && f <= 'Z');
}

int main() {
std::string input;
std::cout << "Enter a string: ";
  std::cin >> input;
   bool containsAlphanumeric = false;
 for (char f : input) {
 if (isAlphanumeric(f)) {
containsAlphanumeric = true;
break;
}
}

if (containsAlphanumeric) {
std::cout << "not number" << std::endl;
}
else
    {
        std::cout << "num constant" << std::endl;
    }

    return 0;
}
