#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < (n); i++)
#define REPR(i, n) for (ll i = (n); i >= 0; i--)
#define FOR(i, m, n) for (ll i = (m); i < (n); i++)
#define FORR(i, m, n) for (ll i = (m); i >= (n); i--)
#define INF 1e9
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((ll)(x).size())
#define SORT(x) sort((x).begin(), (x).end())
#define dump(x) cerr << #x << " = " << (x) << endl
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
                      << " " << __FILE__ << endl

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    vector<ll> start0(s.length()), start1(s.length()), src(s.length());
    ll n = s.length();
    REP(i, n)
    {

        if (i % 2)
        {
            start0[i] = 0;
            start1[i] = 1;
        }
        else
        {
            start0[i] = 1;
            start1[i] = 0;
        }
        if (s[i] == '0')
            src[i] = 0;
        else
            src[i] = 1;
    }
    ll res0 = 0, res1 = 0;
    REP(i, n)
    {
        if (start0[i] != src[i])
        {
            res0++;
        }
        if (start1[i] != src[i])
        {
            res1++;
        }
    }
    cout << (res0 < res1 ? res0 : res1) << endl;
    return 0;
}
