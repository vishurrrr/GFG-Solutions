class Solution {
public:
    int kokoEat(vector<int>& piles, int k) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int res = high; // worst case, eat max pile in 1 hour

        while (low <= high) {
            int mid = low + (high - low) / 2;  // safe from overflow
            long long hours = hoursNeeded(piles, mid);

            if (hours <= k) { 
                // can finish with this speed, try smaller
                res = mid;
                high = mid - 1;
            } else {
                // too slow, need bigger speed
                low = mid + 1;
            }
        }
        return res;
    }

private:
    long long hoursNeeded(const vector<int>& piles, int speed) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + speed - 1) / speed; // ceil division
        }
        return hours;
    }
};