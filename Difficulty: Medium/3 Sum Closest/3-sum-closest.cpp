class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        // initialize with first valid triplet
        int ans = arr[0] + arr[1] + arr[2];

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];

                // update closest sum
                if (abs(target - sum) < abs(target - ans) ||
   (abs(target - sum) == abs(target - ans) && sum > ans)) {
    ans = sum;
}


                if (sum == target) {
                    return sum;   // exact match
                }
                else if (sum < target) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return ans;
    }
};
