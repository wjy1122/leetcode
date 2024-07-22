#include <iostream>
#include <string>
#include <algorithm> // for std::min

using namespace std;

class Solution {
public:
    string losingPlayer(int x, int y) {
        return min(x, y / 4) % 2 ? "Alice" : "Bob";
    }
};

int main() {
    Solution solution;
    // ≤‚ ‘”√¿˝
    int x1 = 5, y1 = 18;
    int x2 = 2, y2 = 8;
    int x3 = 7, y3 = 28;
    int x4 = 6, y4 = 10;

    cout << "For (x1 = " << x1 << ", y1 = " << y1 << "): " << solution.losingPlayer(x1, y1) << endl;
    cout << "For (x2 = " << x2 << ", y2 = " << y2 << "): " << solution.losingPlayer(x2, y2) << endl;
    cout << "For (x3 = " << x3 << ", y3 = " << y3 << "): " << solution.losingPlayer(x3, y3) << endl;
    cout << "For (x4 = " << x4 << ", y4 = " << y4 << "): " << solution.losingPlayer(x4, y4) << endl;

    return 0;
}
