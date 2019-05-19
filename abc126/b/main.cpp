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
    ll s0 = (s[0] - '0');
    ll s1 = (s[1] - '0');
    ll s2 = (s[2] - '0');
    ll s3 = (s[3] - '0');
    ll a = s0 * 10 + s1;
    ll b = s2 * 10 + s3;
    // bool a_year = true;
    bool a_month = true;
    // bool b_year = true;
    bool b_month = true;
    if (a < 1 || a > 12)
        a_month = false;
    if (b < 1 || b > 12)
        b_month = false;
    if (a_month && b_month)
        cout << "AMBIGUOUS" << endl;
    else if (!a_month && b_month)
        cout << "YYMM" << endl;
    else if (a_month && !b_month)
        cout << "MMYY" << endl;
    else
        cout << "NA" << endl;
    return 0;
}
