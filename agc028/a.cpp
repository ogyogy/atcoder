#include <bits/stdc++.h>

using namespace std;

long long gcd(long long x, long long y)
{
    long long r;

    if (x == 0 || y == 0)
    {
        return 0;
    }

    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

long long lcm(long long x, long long y)
{
    if (x == 0 || y == 0)
    {
        return 0;
    }

    return (x * y / gcd(x, y));
}

int main()
{
    long long n, m;
    string s, t;

    cin >> n >> m;
    cin >> s;
    cin >> t;
    long long l = lcm(n, m);
    vector<long long> ss(n);
    vector<long long> tt(m);
    for (long long i = 0; i < n; i++)
    {
        ss[i] = l / n * i;
    }
    for (long long i = 0; i < m; i++)
    {
        tt[i] = l / m * i;
    }
    vector<long long> intersection;
    set_intersection(ss.begin(), ss.end(), tt.begin(), tt.end(), inserter(intersection, intersection.end()));
    for (long long i = 0; i < intersection.size(); i++)
    {
        long long item = intersection[i];
        std::vector<long long>::iterator s_it = find(ss.begin(), ss.end(), item);
        long long s_idx = distance(ss.begin(), s_it);
        std::vector<long long>::iterator t_it = find(tt.begin(), tt.end(), item);
        long long t_idx = distance(tt.begin(), t_it);
        if (s[s_idx] != t[t_idx])
        {
            l = -1;
            break;
        }
    }
    cout << l << endl;
}
