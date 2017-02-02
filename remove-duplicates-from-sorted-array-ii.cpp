/*
 * Thoughts: 
 * If the first and the third number are the same, that means the three number from the first to the third must be equal
 * in this sorted array. So comparing the numbers in the middle can be eliminate.
 */ 


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 2; // the position to be updated
        
        if (nums.size() <= 2) return nums.size();
        
        for (int i = 2; i < nums.size(); i++) {
            if (nums[pos-2] != nums[i])  // number of pos - 2 is number of the first duplicate number
                nums[pos++] = nums[i];
        }
        
        return pos;
    }
};
