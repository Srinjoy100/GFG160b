#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int left = a.size() - 1;
        int right = 0;

        // Swap larger elements of a with smaller elements of b
        while (left >= 0 && right < b.size()) {
            if (a[left] > b[right]) {
                swap(a[left], b[right]);
                left--;
                right++;
            } else {
                break;
            }
        }

        // Correct way to sort vectors
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};
