class Solution {
  public:
    bool isValid(vector<int>&arr,int n,int m,int maxAllowed)
    {
        int stu=1;
        int pages = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxAllowed)//arr[i] stores number of pages in the ith book
            {
                return 0;
            }
            if(pages+arr[i]<=maxAllowed)
            {
                pages = pages+arr[i];
                
            }
            else
            {
                stu++;
                pages=arr[i];
            }
        }
        return stu>m?false:true;
    }
    int findPages(vector<int> &arr, int k) {
        if(arr.size()<k)
        {
            return -1;
        }
        // code here
        int mini = 0;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        } 
        
        
        int maxi = sum;
        
        int ans = -1;
        while(mini<=maxi)
        {
            
        
        int mid = (mini+maxi)/2;
        if(isValid(arr,arr.size(),k,mid))
        {
            ans = mid;
            maxi = mid-1;
        }
        else
        {
            mini= mid+1;
        }
        }
        return ans;
    }
};