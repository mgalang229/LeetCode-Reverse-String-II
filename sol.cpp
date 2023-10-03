class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (i + 2 * k - 1 < n) {
                reverse(s.begin() + i, s.begin() + i + k);
                i += 2 * k - 1;
                continue;
            }
            if (n - i < 2 * k) {
                if (n - i >= k) {
                    reverse(s.begin() + i, s.begin() + i + k);
                } else {
                    reverse(s.begin() + i, s.end());
                }
                break;
            }
        }
        return s;
    }
};
