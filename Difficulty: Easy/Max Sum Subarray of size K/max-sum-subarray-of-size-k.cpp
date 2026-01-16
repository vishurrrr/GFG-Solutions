class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low=0;
        int high=k-1;
        int sum=0;
        for(int i=low;i<=high;i++){
            sum=sum+arr[i];
        }
        int n=arr.size();
        int res=0;
        while(high<n){
            res=max(sum,res);
            low++;
            high++;
            if(high==n){
                break;
            }
            sum=sum-arr[low-1]+arr[high];
            
        }
        return res;
    }
};