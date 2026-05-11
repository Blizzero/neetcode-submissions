class Solution {
public:
    int maxArea(vector<int>& heights) {
        size_t left{};
        size_t right{heights.size() - 1};

        int max_area = 0;
        while (left < right) {
            int new_area = (right - left) * std::min(heights[left], heights[right]);
            max_area = std::max(max_area, new_area);
            if (heights[left] < heights[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return max_area;
    }
};
