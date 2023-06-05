#include <bits/stdc++.h>

using namespace std;

vector<int> arr;
int N;
int M;
int cnt;

/*
int r = 2;

void combi(vector<int>& v, int start) {
    if (v.size() == r) {
        if (v[0] + v[1] == M) {
            cnt++;
        }
        return;
    }
    for (int i = start; i < N; i++) {
        v.push_back(arr[i]);
        combi(v, i + 1);
        v.pop_back();
    }
}
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    cin >> M;
    int temp;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    if (M > 200000) cout << 0 << "\n";
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == M) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}