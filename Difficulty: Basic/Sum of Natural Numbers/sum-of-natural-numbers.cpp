class Solution {
  public:
    int findSum(int n) {
        // code here
        int sum=0;
        if(n==0){
            return 0;
        }
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
        return sum;
    }
};
