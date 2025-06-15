class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int index=-1;
        int n =arr.size();
        //Find the breakpoint
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                index=i;
                break;
            }
        }
        // if the array is at highest permutation(Decresingly Sorted)
        if(index==-1)
        {
            reverse(arr.begin(),arr.end());
            return;
            
        }
        
        for(int i=n-1;i>index;i--)
        {
            if(arr[i]>arr[index])
            {
                swap(arr[i],arr[index]);
                break;
            }
        }
            
        reverse(arr.begin()+index+1,arr.end());
        
        
    }
};