class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
    sort(arr,arr+n);
    
     long long count=0;
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
           
            long long summ=arr[i]+arr[j]+arr[k];
           
            if (summ>=sum){
                k--;
            }
            else{
               count += (k - j);
                j++;

            }
        }
    }
        
        return count;
    }
};