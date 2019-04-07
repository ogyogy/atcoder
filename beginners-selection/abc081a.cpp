#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    ll res = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            res++;
    }
    cout << res << endl;
    return 0;
}
