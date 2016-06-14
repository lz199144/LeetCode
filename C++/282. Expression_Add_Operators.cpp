/* https://leetcode.com/problems/expression-add-operators/ */
/* jasonlz */

class Solution {
    public:
        void Operator(const string &num, const int target,
        vector<string>& result,
        string solution,
        int idx,
        long long val,
        long long prev,
        char preop)
    {
    
        if (target == val && idx == num.size()) {
            result.push_back(solution);
            return;
        }
        if (idx == num.size()) return;
    
        string n;
        long long v = 0;
        for (int i = idx; i<num.size(); i++) {
            if (n == "0") return;
    
            n = n + num[i];
            v = v * 10 + num[i] - '0';
    
            if (solution.size() == 0) {
                Operator(num, target, result, n, i + 1, v, 0, ' ');
            }
            else {
                Operator(num, target, result, solution + '+' + n, i + 1, val + v, v, '+');
                Operator(num, target, result, solution + '-' + n, i + 1, val - v, v, '-');

                if (preop == '+') {
                    Operator(num, target, result, solution + '*' + n, i + 1, (val - prev) + prev*v, prev*v, preop);
                }
                else if (preop == '-') {
                    Operator(num, target, result, solution + '*' + n, i + 1, (val + prev) - prev*v, prev*v, preop);
                }
                else {
                    Operator(num, target, result, solution + '*' + n, i + 1, val*v, v, '*');
                }
            }
        }    
    }
    vector<string> addOperators(string num, int target) {
        vector<string> result;
        if (num.size() == 0) return result;
        Operator(num, target, result, "", 0, 0, 0, ' ');
        return result;
    }
};
