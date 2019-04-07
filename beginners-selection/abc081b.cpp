#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll res = 0;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    bool is_operation = true;
    while (true)
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                a[i] /= 2;
            else
            {
                is_operation = false;
                break;
            }
        }
        if (!is_operation)
        {
            break;
        }
        res++;
    }
    cout << res << endl;
    return 0;
}
