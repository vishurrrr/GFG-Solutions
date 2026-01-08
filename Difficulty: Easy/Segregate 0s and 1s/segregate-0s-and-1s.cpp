class Solution {
public:
    void segregate0and1(vector<int> &arr) {
        int left = 0;                  // pointer for 0s
        int right = arr.size() - 1;    // pointer for 1s

        while (left < right) {
            // move left forward if it is already 0
            while (arr[left] == 0 && left < right) {
                left++;
            }

            // move right backward if it is already 1
            while (arr[right] == 1 && left < right) {
                right--;
            }

            // swap if left is 1 and right is 0
            if (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};
