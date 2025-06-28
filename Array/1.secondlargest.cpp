#include<bits/stdc++.h>

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) return -1;

        int largest = -1;
        int secondLargest = -1;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }

        return secondLargest;
    }
};