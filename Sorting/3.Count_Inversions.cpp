class Solution {
  public:
    // Function to count inversions in the array.
    int merge(vector<int>& arr,int st,int end,int mid)
    {
        vector<int> temp;
        int i = st;
        int j = mid+1;
        int inVCount=0;
        while(i<=mid && j<=end )
        {
            if(arr[i]<=arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                temp.push_back(arr[j++]);
                
                inVCount+= (mid-i+1);
            }
        }
        while(i<=mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end)
        {
            temp.push_back(arr[j]);
            j++;
        }
        for(int idx=0;idx<temp.size();idx++)
        {
            arr[idx+st]=temp[idx];
        }
        return inVCount;
    }
    
    int mergeSort(vector<int>&arr,int st,int end)
    {
        int mid = st +(end-st)/2;
        if(st<end)
        {
          int linvcount = mergeSort(arr,st,mid);
          int rinvcount= mergeSort(arr,mid+1,end);
          int inVcount = merge(arr,st,end,mid);
          return (linvcount + rinvcount + inVcount);
        }
        return 0;
    }
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int ans = mergeSort(arr,0,arr.size()-1);
        return ans;
        
    }
};