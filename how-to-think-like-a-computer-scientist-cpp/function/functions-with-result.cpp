#include <iostream>

int functionWithReuslt() {
    return 1;
}

void functionWithVoid() {

}


int main() {
    functionWithReuslt(); // nothing
    std::cout << functionWithVoid() + 7 << std::endl; // compile error
}
