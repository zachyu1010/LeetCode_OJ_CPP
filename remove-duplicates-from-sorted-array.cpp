
/* 
 * Thoughts: The array is "sorted" array, that mean the former is less than or equal to the latter.
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 0; // the position of number is to be compared
        
        if (nums.size() == 0) return 0;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[pos] != nums[i])
            nums[++pos] = nums[i]; // pos + 1 is the postion updated with the later number
        }
        
        return pos + 1; // pos is zero index, so the length from the index is pos + 1
    }
};  
