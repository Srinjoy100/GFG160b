// User function Template for C++

class Solution {
  public:
    bool isPossible(vector<int>&stalls,int dist,int cows)
    {
        int cowsCnt = 1,last=stalls[0];
        for(int i=1;i<stalls.size();i++)
        {
            if(stalls[i]-last>=dist)
            {
                cowsCnt++;
                last=stalls[i];
            }
            if(cowsCnt==cows)
                return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(),stalls.end());
        int n =stalls.size();
        int low =1;
        int high = stalls[n-1] - stalls[0];
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(isPossible(stalls,mid,k))
            {
                low=mid+1;
            }
            else
            {
                high =mid-1;
            }
        }
        return high;
    }
};