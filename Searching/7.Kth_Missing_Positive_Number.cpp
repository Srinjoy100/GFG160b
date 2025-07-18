// User function template for C++

//Brute Force
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=k)
            {
                k++;
            }
            else
            {
                break;
            }
            
        }
        return k;
    }
};


//Binary Search
// User function template for C++

//Brute Force
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
       int low=0,high = arr.size()-1;
       int res = arr.size()+k;
       while(low<=high)
       {
           int mid = (low+high)/2;
           if(arr[mid]>mid+k)
           {
               res = mid+k;
               high = mid-1;
           }
           else
           {
               low= mid+1;
           }
       }
       return res;
    }
};

