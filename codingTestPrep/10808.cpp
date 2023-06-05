//baekjoon

//counting str => map�Ǵ� array�� ����������
//string �� ��� => map
//int �� ��� => array
//sparse�� ��� => map
#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main()
{
    string s;
    cin >> s;
    map<char, int> m;
    //cout << s;

    //��� 1
    //int arr[26] = { 0 };
    for (int i = 0; i < s.size(); i++) {
        arr[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }

    //��� 2
    for (int i = 0; i < s.size(); i++)
    {
        if (m.find(s[i]) == m.end())
        {
            //not found
            m.emplace(s[i], 1);
        }
        else {
            //found
            m[s[i]]++;
        }
    }

    cout << "\n";
    for (int i = 0; i < 26; i++) {
        if (m.find(char(97 + i)) == m.end()) {
            cout << "0 ";
        }
        else {
            cout << m[char(97 + i)] << " ";
        }
    }

    return 0;
}