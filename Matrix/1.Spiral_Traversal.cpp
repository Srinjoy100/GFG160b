class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        int top =  0,left=0;
        int bottom = row-1,right = col-1;
        vector<int> ans;
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(mat[left][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(mat[i][right]);
            }
            right--;
            if(top<=bottom)
            {
                 for(int i=right;i>=left;i--)
            {
                ans.push_back(mat[bottom][i]);

            }
            bottom--;
            }
           
            
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
            
        }
        return ans;
    }
};