#include<set>

class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> as(a.begin(),a.end());
        unordered_set<int> res;
        vector<int> result;
        for(int i=0;i<b.size();i++)
        {
            if(as.find(b[i])!=as.end() && res.find(b[i]) == res.end())
            {
                result.push_back(b[i]);
                res.insert(b[i]);
               
            }
            
        }
        return result;
    }
};