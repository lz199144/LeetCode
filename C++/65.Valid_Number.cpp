/* 65.Valid Number*/
/*jasonlz 2015-9-2*/
#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    #define  TEST_NUMBER(RESULT) RESULT = (*s >='0'&&*s<='9'); while(*s >='0'&&*s<='9') s++;
	bool isNumber(string in) {
		auto s = in.c_str();
		bool n1=false,n2=false,n3=false;
		while(*s == ' ') s++;
		if(*s == '+' || *s == '-') s++;
		TEST_NUMBER(n1);
		if(*s == '.'){
			s++;
			TEST_NUMBER(n2);
			if(!n1&&!n2) return false; 
		}
		if(*s == 'e'){
			if(!n1&&!n2) return false;
			s++;
			if(*s == '+' || *s == '-') s++;
			TEST_NUMBER(n3);
			if(!n3) return false;
		}
		while(*s == ' ') s++;
		if(*s == 0) return n1||n2;
		return false;
	}
};
int main(){
	Solution s;
	cout << s.isNumber(" ") << endl;
	return 0;
}
