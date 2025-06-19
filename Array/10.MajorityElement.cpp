class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int cnt1=0,cnt2=0;
        int ele1,ele2;
        int n =arr.size();
        
        for(int i=0;i<n;i++)
        {
            if(cnt1==0 && ele2!=arr[i])
            {
                cnt1=1;
                ele1=arr[i];
            }
            else if(cn2==0 && ele1!=arr[i])
            {
                
                cnt2=1;
                ele2=arr[i];
            }
            
            else if(arr[i]==ele1)
            {
                cnt1++;
            }
            else if(arr[i]==ele2)
            {
                cnt2++;
            }
            
            else
            {
                cnt1--,cnt2--;
            }
        }
        
        vector<int> ls;
        int c1=0, c2=0;
        for(int i=0;i<n;i++)
        {
            if(ele1==arr[i])
                c1++;
            if(ele2==arr[i])
                c2++;
            
        }
        int mini=int(arr.size()/3)+1;
        if(c1>=mini)
            ls.push_back(ele1);
        if(c2>=mini)
            ls.push_back(ele2);
        return ls;
    }
};