class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        
        int i = max_element( A.begin(), A.end() ) - A.begin();
        
        return i;
    }
};

