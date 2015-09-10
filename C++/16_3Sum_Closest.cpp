/* https://leetcode.com/problems/remove-element/ */
/* jasonlz */

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {

        sort(num.begin(), num.end());
    
        int n = num.size();
        int distance = 0x7fffffff-1;
        int result;
    
        for (int i=0; i<n-2; i++) {
            if (i>0 && num[i-1]==num[i]) continue;
            int a = num[i];
            int low = i+1;
            int high = n-1;
            while ( low < high ) {
                int b = num[low];
                int c = num[high];
                int sum = a+b+c;
                if (sum - target == 0) {
                    return target;
                } else {
    
                    if (abs(sum-target) < distance ) {
                        distance = abs(sum - target);
                        result = sum;
                    }
    
                    if (sum -target> 0) {
                        while(high>0 && num[high]==num[high-1]) high--;
                        high--;
                    } else {
                        while(low<n && num[low]==num[low+1]) low++;
                        low++;
                    }
                }
            }
        }
        return result;
    }
};