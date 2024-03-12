#include <iostream>

void newLine() {
    std::cout << std::endl;
}

int main() {
    std::cout << "first line" << std::endl;
    newLine();
    newLine();
    newLine();
    std::cout << "second line" << std::endl;
}
