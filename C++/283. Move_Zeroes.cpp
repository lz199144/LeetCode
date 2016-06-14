/* https://leetcode.com/problems/move-zeroes/*/
/* jasonlz */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int size = nums.size();
    	int idx = 0;
    	int i = 0;
    	int j = 0;
    	while(i<size -idx&&j<size)
    	{
    		if (nums[i] == 0)
    		{
    			idx++;
    		}
    		for (; j < size-1;++j)
    		{
    			if (nums[j] != 0)
    			{
    				break;
    			}
    		}
    		nums[i] = nums[j];
    		i++;
    		j++;
    	}
    	for (; i < size; ++i)
    	{
    		if (nums[i] == 0) idx++;
    	}
    	for (int i = 0; i < idx; ++i)
    	{
    		nums[size - 1 - i] = 0;
    	}
    }
};