class Solution {
public:
    bool isPalindrome(string s) {
        std::string sanitized{};

        for (const auto& c : s) {
            if (std::isalnum(c))
                sanitized += std::tolower(c);
        }

        if (sanitized.empty())
            return true;

        size_t left{};
        size_t right{sanitized.size() - 1};
        while (left < right) {
            if (sanitized[left] != sanitized[right]) {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
