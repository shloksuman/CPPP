#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getMinimumSum(int num) {
        // Convert num to a string and count the frequency of each digit
        string num_str = to_string(num);
        unordered_map<char, int> freq;
        for (char c : num_str) {
            freq[c]++;
        }
        // Initialize minimum sum to a large value
        int min_sum = INT_MAX;
        // Start backtracking with empty strings for num1 and num2
        string num1, num2;
        backtrack(freq, num1, num2, num_str.length(), min_sum);
        return min_sum;
    }

private:
    void backtrack(unordered_map<char, int>& freq, string& num1, string& num2, int n, int& min_sum) {
        // Base case: if the concatenation of num1 and num2 is a permutation of num
        if (num1.length() + num2.length() == n) {
            if (!num1.empty() && !num2.empty() && is_permutation(freq, num1 + num2)) {
                int sum = stoi(num1) + stoi(num2);
                min_sum = min(min_sum, sum);
            }
            return;
        }
        // Try adding the next digit to num1
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (num1.empty() && it->first == '0' && it->second == 1) {
                continue; // leading zero only allowed once in num1
            }
            if (it->second > 0) {
                num1.push_back(it->first);
                it->second--;
                backtrack(freq, num1, num2, n, min_sum);
                it->second++;
                num1.pop_back();
            }
        }
        // Try adding the next digit to num2
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (num2.empty() && it->first == '0' && it->second == 1) {
                continue; // leading zero only allowed once in num2
            }
            if (it->second > 0) {
                num2.push_back(it->first);
                it->second--;
                backtrack(freq, num1, num2, n, min_sum);
                it->second++;
                num2.pop_back();
            }
        }
    }
    
    bool is_permutation(unordered_map<char, int>& freq, string num) {
        unordered_map<char, int> freq_num;
        for (char c : num) {
            freq_num[c]++;
        }
        return freq == freq_num;
    }
};

int main() {
    Solution sol;
    int num = 687;
    int min_sum = sol.getMinimumSum(num);
    cout << min_sum << endl; // Output: 579
    return 0;
}
