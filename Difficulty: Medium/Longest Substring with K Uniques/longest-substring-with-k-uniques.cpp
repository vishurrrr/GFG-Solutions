class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int low=0;
        int ans=-1;
        int n=s.length();
       unordered_map<char,int>mp; 
        for(int high=0;high<n;high++){
            mp[s[high]]++;
            while(mp.size()>k){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
            }
            if(mp.size()==k){
                ans=max(high-low+1,ans);
            }
            
        }
        return ans;
        
    }
};