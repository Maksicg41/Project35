#include <iostream>
using namespace std;
int main() {
    int y, x;
    std::cin >> x >> y;
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    std::cout << x;
}