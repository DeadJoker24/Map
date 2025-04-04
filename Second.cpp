class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; 
        map<int, bool> v; 
       
        for (int num : nums) {
            v[num] = true;
        }
        int l = 0;
        int count = 0;
        int prev = INT_MIN;
         for (auto p : v) {
            if (p.first == prev + 1) {
                count++; 
            } else {
                count = 1; 
           }
            prev = p.first; 
            l = max(l, count); 
        }

        return l;
    }
};
