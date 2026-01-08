class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
         set<int>s;
     for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
     }
     arr.clear();

     for(auto it=s.begin();it!=s.end();it++){
       arr.push_back(*it);

     }
       return arr; 
    }
    
};