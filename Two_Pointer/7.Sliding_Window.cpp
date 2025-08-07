class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int n = arr.size();
        vector<int> res;
        for(int i=0;i<=n-k;i++)
        {
            unordered_set<int>st;
            for(int j=i;j<i+k;j++)
            {
                st.insert(arr[j]);
            }
            res.push_back(st.size());
        }
        return res;
        
    }
};