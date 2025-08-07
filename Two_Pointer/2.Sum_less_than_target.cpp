// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
        int start=0,end=arr.size()-1;
        int count=0;
        while(start<end)
        {
            int sum = arr[start]+arr[end];
           
            if(sum<target)
            {
                count = count+(end-start);
                start++;
            }
            else
            {
                end--;
            }
            
            
        }
        return count;
    }
};
