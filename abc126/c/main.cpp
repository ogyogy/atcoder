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
    double n, k;
    cin >> n >> k;
    double res = 1.0;
    double y = 0.0;
    FOR(i, 1, n + 1)
    {
        if (i >= k)
            continue;
        double x = ceil(log2(k / i));
        y += (1.0 / n) * (1.0 - pow(0.5, x));
    }
    res -= y;
    cout << std::setprecision(13) << res << endl;
    return 0;
}
