#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (true) {
            int s = numbers[left] + numbers[right];
            if (s == target) return { left + 1, right + 1 }; // 题目要求下标从 1 开始
            s > target ? --right : ++left;
        }
    }
};

int main() {
    Solution solution;
    vector<int> numbers = { 2, 7, 11, 15 };
    int target = 9;
    vector<int> result = solution.twoSum(numbers, target);
    cout << "Indexes: " << result[0] << ", " << result[1] << endl;
    return 0;
}
