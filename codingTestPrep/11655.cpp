#include <bits/stdc++.h>

using namespace std;

string s;
string ret;

int main() {
    getline(cin, s);
    //cout << s << "\n";

    for (int i = 0; i < s.size(); i++) {
        int temp = s[i];
        //알파벳인 경우
        if (97 <= s[i] && s[i] <= 122) {
            temp = s[i] + 13;
            if (temp > 122) {
                temp = temp - 26;
            }
        }
        else if (65 <= s[i] && s[i] <= 90) {
            temp = s[i] + 13;
            if (temp > 90) {
                temp = temp - 26;
            }
        }
        ret += (char)temp;
    }
    cout << ret;
    return 0;
}