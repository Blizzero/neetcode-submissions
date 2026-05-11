class Solution {
public:
    bool isPalindrome(string s) {
        size_t left{0};
        size_t right{s.size() - 1};

        while (left < right) {
            while (!std::isalnum(s[left]) && left < right) {
                ++left;
            }
            
            while (!std::isalnum(s[right]) && left <= right) {
                --right;
            }

            if (left >= right) {
                return true;
            }

            if (std::tolower(s[left], std::locale()) != std::tolower(s[right], std::locale())) {
                return false;
            }
            
            ++left;
            --right;
        }

        return true;
    }
};
