// User function template for C++
//Brute Force(Linear Search)
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==x)
                    return true;
            }
        }
        return false;
    }
};

//Better(Binary Search)
// User function template for C++
class Solution {
  public:
    bool binarySearch(vector<int>&mat,int x)
    {
        int low = 0,high=mat.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(mat[mid]==x)
                return true;
            else if(mat[mid]<x)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return false;
    }
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++)
        {
           if(binarySearch(mat[i],x))
                return true;
        }
        return false;
    }
};