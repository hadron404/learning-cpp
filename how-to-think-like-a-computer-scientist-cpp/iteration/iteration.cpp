/**
 * Iteration:
 * One of the things computers are often used for is the automation of repetitive tasks.
 * Repeationg identical or similar tasks without making errors is something that computers do well and people do poorly.
 */

#include <iostream>

using namespace std;

void countDown(int n) {
    while (n > 0) {
        cout << n << endl;
        n = n - 1;
    }
    cout << "Blastoff!" << endl;
}
