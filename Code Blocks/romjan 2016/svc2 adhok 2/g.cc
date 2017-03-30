/*
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
bool mon(PII a, PII b)
{
    if(a.second == b.second)
    {
        return a.first > b.first;
    }

    else return a.second < b.second;
}

int main()
{
    int i, t, n;

    PII a[100005];

    cin>>t;

    for(i = 0; i  < t; i++)
    {

        cin>>a[i].first>>a[i].second;

    }


    sort(a, a+t, mon);

    for(i = 0; i  < t; i++)
    {

        cout<<a[i].first<<a[i].second<<endl;

    }



    int sum = a[0].first;
    int bfr = a[0].second;

    for(i = 1; i < t; i++)
    {
        if(a[i].second != bfr)
        {
            sum+=a[i].first;

            bfr = a[i].second;
        }

    }
    cout<<sum<<endl;





}
*/
#include <iostream>
#include <algorithm>
using namespace std;

struct cow {
    int g, d;
    cow(int g = 0, int d = 0) {
        this->g = g;
        this->d = d;
    }
};

bool cmp(const cow & c1, const cow & c2) {
    if (c1.g == c2.g) return c1.d < c2.d;
    else return c1.g > c2.g;
}

cow c[10005];
bool used[10005];

int haveTime(int d) {
    for (int i = d; i > 0; i--) if (!used[i]) return i;
    return 0;
}

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> c[i].g >> c[i].d;
    sort(c, c + n, cmp);
    int t = 4, ans = 0;
    for (int i = 0; i < n; i++) {
        int feedDay = haveTime(c[i].d);
        if (feedDay) {
            used[feedDay] = true;
            ans += c[i].g;
        }
    }
    cout << ans << endl;

    return 0;
}
