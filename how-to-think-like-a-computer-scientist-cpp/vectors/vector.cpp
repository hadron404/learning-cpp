/*
 * vector: A named collections of values, where all the values have the same type,
 * and each value is identified by an index.
 */

#include <vector>
#include <iostream>
using namespace std;

vector<int> createAVector() {
    vector<int> count;
    count.push_back(9);
    count.push_back(8);
    count.push_back(32);
    return count;
}


void iteratorVector(vector<int> &vector) {
    for (int i : vector) {
        cout << i << endl;
    }
}
int main() {
    vector<int> count = createAVector();
    iteratorVector(count);
}
