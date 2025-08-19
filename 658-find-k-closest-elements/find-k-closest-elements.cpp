class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0;
        int right = arr.size() - 1;

        // Shrink the window until its size becomes k
        while (right - left >= k) {
            if (abs(arr[left] - x) > abs(arr[right] - x)) {
                left++;  // Remove the leftmost element
            } else {
                right--; // Remove the rightmost element
            }
        }

        // Now, the window [left, right] has k closest elements
        return vector<int>(arr.begin() + left, arr.begin() + right + 1);
    }
};
