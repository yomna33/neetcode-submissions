class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> concat(2 * n);
        for (int i = 0; i < n; i++) {
            concat[i] = nums[i];
            concat[i + n] = nums[i];
        }
        return concat;

        
    }
};