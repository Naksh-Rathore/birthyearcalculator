#include <iostream>

int main() {

    std::string name;
    int age;

    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << name << "'s " << "Birth Year: " << 2025 - age;

    return 0;
}