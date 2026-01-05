class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> s;
        
        for (int x : arr) {
            int need = target - x;
            if (s.find(need) != s.end()) {
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};
