class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low=0,sum=0;
        int high=k-1;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int maxi=INT_MIN;
        int n=arr.size();
        while(high<n){
            maxi=max(maxi,sum);
            low++;high++;
            sum=sum-arr[low-1];
            if(high==n){
                break;
            }
            sum=sum+arr[high];
        }
        return maxi;
        
    }
};