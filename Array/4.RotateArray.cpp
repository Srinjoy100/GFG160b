class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n= arr.size();
        d=d%n;
        //Reverse the first d elements
        reverse(arr.begin(),arr.begin()+d);
        // Reverse the remaining n-d elemnets
        reverse(arr.begin()+d,arr.end());
        //reverse the entire array
        reverse(arr.begin(),arr.end());
    }
        
};

