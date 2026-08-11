class Solution {
  public:
    int smallestSumSubarray(vector<int>& arr) {
        // Code hereclass Solution {

        int n=arr.size();
        int i=0;
        int bestend=arr[0];
        int ans=arr[0];
        for(int i=1;i<n;i++){
            int x=bestend + arr[i];
            int y=arr[i];
            bestend=min(x,y);
            ans=min(bestend,ans);
        }
        return ans;

        
    }
};
