
// This is a Brute Force Soln. Time COomplexity is O(NLOGN) and Space Complexity is O(N)
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int res =1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]== res)
            {
                res++;
            }
            
            if(arr[i]>res)
            {
                break;
            }
        }
        return res;
    }
};