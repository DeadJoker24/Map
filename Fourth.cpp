class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> mpp;  
    
           
            for (int num : nums) {
                mpp[num]++;
            }
     priority_queue<pair<int, int>> Heap;
              
            for (auto p: mpp) {
                Heap.push({p.second,p.first});
            }
            vector<int> result;
            while (k-- && !Heap.empty()) {
                result.push_back(Heap.top().second);
                Heap.pop();
            }
    
            return result;
        }
    };
