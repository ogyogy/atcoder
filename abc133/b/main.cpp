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
    ll n, d;
    cin >> n >> d;
    double x[10][10] = {0};
    ll res = 0;
    REP(i, n)
    {
        REP(j, d)
        {
            cin >> x[i][j];
        }
    }
    FOR(i, 0, n - 1)
    {
        FOR(j, i + 1, n)
        {
            double dist = 0;
            REP(k, d)
            {
                dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
            }
            dist = sqrt(dist);
            double integral_part = 0;
            double fractional_part = modf(dist, &integral_part);
            if (fractional_part == 0)
            {
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}
