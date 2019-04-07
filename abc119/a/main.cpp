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

int ctoi(const char c)
{
    if ('0' <= c && c <= '9')
        return (c - '0');
    return -1;
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int year = ctoi(s[0]) * 1000 + ctoi(s[1]) * 100 + ctoi(s[2]) * 10 + ctoi(s[3]);
    int month = ctoi(s[5]) * 10 + ctoi(s[6]);
    int day = ctoi(s[8]) * 10 + ctoi(s[9]);
    if (year <= 2019 && month <= 4 && day <= 30)
        cout << "Heisei" << endl;
    else
        cout << "TBD" << endl;
    return 0;
}
