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
    string s;
    cin >> s;
    bool isa = false, isb = false, isc = false;
    REP(i, s.length())
    {
        if (s[i] == 'a')
            isa = true;
        else if (s[i] == 'b')
            isb = true;
        else if (s[i] == 'c')
            isc = true;
    }
    if (isa == true && isb == true && isc == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
