class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
    //     for(int i=0;i<arr.size();i++)
    //     {
    //         for(int j=i+1;j<arr.size();j++)
    //         {
    //             if((arr[i]+arr[j])==target)
    //                 return true;
    //         }
    //     }
    
    // return false;
    
        sort(arr.begin(),arr.end());
        int left = 0,right = arr.size()-1;
        while(left<right)
        {
             int sum = arr[left]+arr[right];
             if(target==sum)
             {
                 return true;
             }
    
            if(sum<target)
            {
                left++;
            }
            else 
                right--;
            
        }
        return false;
       
    }
};