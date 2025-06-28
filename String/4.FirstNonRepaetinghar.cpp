
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        vector<int> frequency(26,0);
        for(char ch:s)
        {
            frequency[ch-'a']++;
        }
        
       for(char ch:s)
        {
            if(frequency[ch-'a']==1)
            {
                return ch;
            }
        }
        return '$';
    }
};