#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 100005;
string a[N];
int main() {
    map<string, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < a[i].size(); j++) {
            mp[a[i].substr(j)]++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << mp[a[i]] << endl;
    }
    return 0;
}
