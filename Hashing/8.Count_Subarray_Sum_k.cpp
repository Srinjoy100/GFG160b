class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        map<int,int> mp;
        mp[0]=1;
        int presum = 0,cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            presum = presum+arr[i];
            int exclude  = presum -k;
            cnt+=mp[exclude];
            mp[presum]+=1;
        }
        return cnt;
    }
};