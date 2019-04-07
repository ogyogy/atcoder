#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef long long ll;
int main()
{
    string S;
    ll res = 0;
    ll b = 0, w = 0;
    cin >> S;
    for (ll i = 0; i < (ll)S.length(); i++)
    {
        if (S[i] == 'W')
        {
            res += b;
        }
        else
        {
            b++;
        }
    }
    cout << res << endl;
}