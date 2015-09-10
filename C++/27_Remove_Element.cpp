/*https://leetcode.com/problems/remove-element/*/
/*jasonlz*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    	int len = nums.size();
    	if(len==0) return 0;
    	int i = 0;
    	while(i<len){
    		if(nums[i]==val){
    			nums[i]=nums[len-1];
    			len--;
    			continue;
    		}
    		i++;
    	}
    	return len;
    }
};