//Brute Force

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n1 = a.size(),n2=b.size();
        vector<int> n3;
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(a[i]<b[j])
            {
                n3.push_back(a[i++]);
            }
            else
            {
                n3.push_back(b[j++]);
            }
        }
        while(i<n1)
        {
            n3.push_back(a[i++]);
        }
        while(j<n2)
        {
            n3.push_back(b[j++]);
        }
        
        return n3[k-1];
    }
};