class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) return -1;

        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};