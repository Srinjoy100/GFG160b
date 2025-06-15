#include<bits/stdc++.h>
#include<limits.h>
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int maxi=INT_MIN;
        int sum=0;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum>maxi)
            {
                maxi=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};