#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter) {
	long long pos = 0;
	string token = "";
	vector<string> ret = {};
	//while there is delimiter loop
	while ((pos = input.find(delimiter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}

void testArr(int a[]) {
	cout << sizeof(a) << "\n";
	cout << sizeof(*a) << "\n";
}
int main() {
	int x[3] = { 1,2,3 };
	testArr(x);
	string s = "¾È³çÇÏ¼¼¿ä Å«µ¹ÀÌ´Â Å·°«Á¦³×·² ÃµÃ¤", d = " ";
	string* b = &s;
	cout << *b << "\n";
	vector<string> a = split(s, d);
	for (string b : a) cout << b << "\n";
}