#include <iostream>
#include <random>

void randomNumber() {
    int min = 0, max = 100;
    std::random_device seed; //硬件生成随机数种子
    std::ranlux48 engine(seed()); //利用种子生成随机数引擎
    std::uniform_int_distribution<> distrib(min, max); //设置随机数范围，并为均匀分布
    int random = distrib(engine); //随机数
    std::cout << random << std::endl;
}

int main() {
    randomNumber();
}
