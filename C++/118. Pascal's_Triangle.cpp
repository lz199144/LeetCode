/* https://leetcode.com/problems/pascals-triangle/*/
/* jasonlz */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    	vector<vector<int>> nums;
    	if (numRows == 0) return nums;
    	nums.push_back(vector<int>{1});
    	int s;
    	for (int i = 1; i < numRows; s=1, ++i)
    	{
    		vector<int> row;
    		row.push_back(1);
    		for (int j = 1; j < i; ++j)
    		{
    			s = (i - j + 1) * s / j;
    			row.push_back(s);
    		}
    		row.push_back(1);
    		nums.push_back(row);
    	}
    	return nums;
    }
};