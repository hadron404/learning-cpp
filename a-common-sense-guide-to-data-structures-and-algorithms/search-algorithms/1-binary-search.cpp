#include <iostream>
int search(const int array[], const int size, const int target) {
    int lowerBound = 0;
    int upperBound = size - 1;
    int step = 0;
    while (lowerBound <= upperBound) {
        step++;
        int midPoint = (upperBound + lowerBound) / 2;
        if (array[midPoint] == target) {
            std::cout << "共耗" << step << "步";
            return midPoint;
        }
        if (array[midPoint] > target)
            upperBound = midPoint-1;
        if (array[midPoint] < target)
            lowerBound = midPoint+1;
    }
    std::cout << "共耗" << step << "步";
    return -1;
}


int main() {
    constexpr int size = 20;
    const int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13,14,15,16,17,18,19,20};
    constexpr int target = 26;
    int index = search(array, size, target);
    std::cout << " 索引：" << index;
}
