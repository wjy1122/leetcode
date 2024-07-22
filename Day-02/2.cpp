#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int cnt[26]{};
        // 统计字符频率
        for (char b : s) {
            cnt[b - 'a']++;
        }

        int ans = 0;
        // 计算最小长度
        for (int c : cnt) {
            ans += (c - 1) % 2 + 1;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string s = "abacb";
    cout << "Minimum length for \"" << s << "\" is: " << solution.minimumLength(s) << endl;

    return 0;
}
