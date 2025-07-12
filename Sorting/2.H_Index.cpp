// User function Template for C++
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        vector<int> arr(n+1,0);
        for(int c:citations)
        {
            if(c>n)
                arr[n]++;
            else
                arr[c]++;
        }
        int count=0;
        for(int i =n;i>=0;i--)
        {
            count = count+arr[i];
            if(count>=i)
            {
                return i;
            }
        }
        return 0;
    }
};