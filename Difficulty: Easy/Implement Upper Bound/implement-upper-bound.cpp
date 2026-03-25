class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int low=0,high=arr.size()-1;
        int result=arr.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>target){
                    result=mid;
                   high=mid-1;
                }
                else{
                    low=mid+1;
                }
        }
        return result;
    }
};
