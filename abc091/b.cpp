#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < (n); i++)
#define REPR(i, n) for (ll i = (n); i >= 0; i--)
#define FOR(i, m, n) for (ll i = (m); i < (n); i++)
#define FORR(i, m, n) for (ll i = (m); i >= (n); i--)
#define INF 1e9
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((ll)(x).size())
#define SORT(x) sort((x).begin(), (x).end())
#define dump(x) cerr << #x << " = " << (x) << endl
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
                      << " " << __FILE__ << endl

int main(int argc, char const *argv[])
{
    ll n, m;
    cin >> n;
    string ss;
    vector<string> s(n);
    REP(i, n)
    {
        cin >> s[i];
    }
    cin >> m;
    vector<string> t(m);
    REP(i, m)
    {
        cin >> t[i];
    }
    ll point_max = 0;
    REP(i, n)
    {
        ll cnt1 = count(ALL(s), s[i]);
        ll cnt2 = count(ALL(t), s[i]);
        ll point = cnt1 - cnt2;
        if (point > point_max)
        {
            point_max = point;
        }
    }
    cout << point_max << endl;
    return 0;
}
