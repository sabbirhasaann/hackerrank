// 2025/08/27 20:37:38

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void staircase(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int k = n - i + 1; k < n; k++)
            cout << " ";
        for (int j = i; j <= n; j++)
            cout << "#";
        cout << endl;
    }
}

void soln()
{
    int n;
    cin >> n;
    staircase(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soln();
    return 0;
}