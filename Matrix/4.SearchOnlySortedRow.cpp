

class Solution {
  public:
    bool binarySearch(vector<int>&mat,int x)
    {
        int low=0,high=mat.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(mat[mid]==x)
            {
                return true;
            }
            else if(mat[mid]<x)
            {
                low=mid+1;
            }
            else
            {
                high = mid-1;
            }
            
        }
        return false;
    }
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row = mat.size(),col=mat[0].size();
        for(int i=0;i<row;i++)
        {
            if(binarySearch(mat[i],x))
                return true;
        }
        return false;
        
    }
};