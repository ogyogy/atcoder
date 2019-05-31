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

struct Info
{
    string first;
    ll second;
    ll num;
};

bool cmp(const Info &a, const Info &b)
{
    if (a.first < b.first)
        return true;
    else if (a.first == b.first)
    {
        if (a.second > b.second)
            return true;
        else
            return false;
    }
    else
        return false;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<Info> p(n);
    REP(i, n)
    {
        cin >> p[i].first >> p[i].second;
        p[i].num = i + 1;
    }
    sort(ALL(p), cmp);
    REP(i, n)
    cout << p[i].num << endl;
    return 0;
}
