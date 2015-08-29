/* https://leetcode.com/problems/two-sum/ */
/* jasonlz */

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> v;
        map<int,int> hash;
        for(int i=0;i<numbers.size();i++)
        {
            if(!hash.count(numbers[i]))
                hash.insert(pair<int,int>(numbers[i],i));
			if(hash.count(target-numbers[i]))
			{
				int n=hash[target-numbers[i]];
				if(n<i)
				{
				    v.push_back(n+1);
				    v.push_back(i+1);
				    return v;
				}
			}
        }
        return v;
    }
};
