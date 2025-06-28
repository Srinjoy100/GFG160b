#include<algorithm>
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        unordered_map<char,int> frequency;
        
        for(char ch1: s1)
        {
            frequency[ch1] += 1;
        }
        for(char ch2 : s2)
        {
            frequency[ch2] -= 1;
        }
        
        for(auto i: frequency)
        {
            if(i.second!=0)
            {
                return 0;
            }
        }
        return 1;
    }
};