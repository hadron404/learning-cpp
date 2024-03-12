#include <iostream>

bool isSingleDigit(int x) {
    if (x >= 0 && x < 10) {
        return true;
    }
    return false;
}

int main() {
    /*
     * C++ 中 输出 bool 值时，不直接显示 true 或 false， 而是显示整数 1 或 0
     */
     std::cout << isSingleDigit(1) << std::endl;
}
