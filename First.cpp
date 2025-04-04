class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> v; 

        for (int i = 0; i < nums.size(); i++) {
            int c = target - nums[i]; 
             if (v.find(c) != v.end()) { 
                return {v[c], i};
            } v[nums[i]] = i; 
        }
 return {}; 
    }
};
