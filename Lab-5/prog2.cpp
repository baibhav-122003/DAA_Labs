#include <bits/stdc++.h>
using namespace std;
int d[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
int n = sizeof(d) / sizeof(d[0]);
void fm(int v)
{
    sort(d, d + n);
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        while (v >= d[i])
        {
            v -= d[i];
            ans.push_back(d[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int n = 0;
    cin >> n;
    fm(n);
    return 0;
}
