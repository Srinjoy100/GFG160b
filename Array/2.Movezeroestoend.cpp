// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n=arr.size();
        int index=0;//where the next element is placed
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[index++]=arr[i];
            }
        }
        while(index<n)
        {
            arr[index++] = 0;
        }
        
    }
};