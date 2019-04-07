#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    ll n, Y;
    cin >> n >> Y;
    bool is_pos = false;
    ll x = -1, y = -1, z = -1;
    REP(i, n + 1)
    {
        REP(j, n - i + 1)
        {
            ll k = n - i - j;
            if (i * 10000 + j * 5000 + k * 1000 == Y)
            {
                x = i, y = j, z = k;
                is_pos = true;
                break;
            }
        }
        if (is_pos)
        {
            break;
        }
    }
    cout << x << " " << y << " " << z << endl;
    return 0;
}
