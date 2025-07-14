#include<vector>
using namespace std;
class Solution {
  public:

    int countFreq(vector<int>& arr, int target) {
        // code here
        //Linear Search
        // int count=0;
        // int n = arr.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]==target)
        //     {
        //         count++;   
        //     }
        // }
        // return count;
        
        //Binary Search
        int left = lower_bound(arr.begin(),arr.end(),target)-arr.begin();
        int right = upper_bound(arr.begin(),arr.end(),target)-arr.begin();
        return right-left;
        
    }
};
