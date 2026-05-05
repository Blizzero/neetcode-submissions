class Solution {
public:
    bool isAnagram(string s, string t) {
        auto f = [](string str ) -> std::unordered_map<char, size_t> {
            std::unordered_map<char, size_t> f_map{};
            for (char c : str) {
                f_map.try_emplace(c);
                ++f_map[c];
            }
            return f_map;
        };

        return f(s) == f(t); 
    }
};
