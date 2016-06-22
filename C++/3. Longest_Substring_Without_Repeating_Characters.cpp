/* https://leetcode.com/problems/longest-substring-without-repeating-characters/ */
/* jasonlz */

int lengthOfLongestSubstring(string s) {
	const int MAX_CHARS = 256;
	int m[MAX_CHARS];
	memset(m, -1, sizeof(m));

	int maxLen = 0;
	int lastRepeatPos = -1;
	for (int i = 0; i<s.size(); i++) {
		if (m[s[i]] != -1 && lastRepeatPos < m[s[i]]) {
			lastRepeatPos = m[s[i]];
		}
		if (i - lastRepeatPos > maxLen) {
			maxLen = i - lastRepeatPos;
		}
		m[s[i]] = i;
	}
	return maxLen;
}