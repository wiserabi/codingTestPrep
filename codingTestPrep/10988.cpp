#include <bits/stdc++.h>

using namespace std;

string s;
int main() {
    cin >> s;
    int ssize = s.size();
    /*for (int i = 0; i < ssize; i++)
    {
        if (s[i] != s[ssize - 1 - i]) {
            cout << "0";
            exit(0);
        }
    }
    cout << "1";
    */

    //reverse
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (s == temp) {
        cout << "1";
    }
    else {
        cout << "0";
    }
    return 0;
}