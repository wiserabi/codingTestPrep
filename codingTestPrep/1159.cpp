#include <bits/stdc++.h>

using namespace std;

vector<char> v;

int main()
{
    int player_num;
    string s;
    map<char, int> m;

    cin >> player_num;
    for (int i = 0; i < player_num; i++) {
        cin >> s;
        if (m.find(s[0]) == m.end()) {
            m.emplace(s[0], 1);
        }
        else {
            m[s[0]]++;
        }
    }

    bool found = false;
    
    for (auto& it : m) {
        if (it.second >= 5) {
            v.push_back(it.first);
            found = true;
        }
    }

    for (char c : v) cout << c;

    if (!found) {
        cout << "PREDAJA";
    }
    return 0;
}