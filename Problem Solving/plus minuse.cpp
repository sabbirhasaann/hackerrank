// 2025/08/23 00:15:10

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void plusMinus(vector<int> arr)
{
    int neg, zero, pos;
    neg = zero = pos = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            neg++;
        else if (arr[i] == 0)
            zero++;
        else if (arr[i] > 0)
            pos++;
    }

    cout << fixed << setprecision(6) << (float)pos / n << endl;
    cout << fixed << setprecision(6) << (float)neg / n << endl;
    cout << fixed << setprecision(6) << float(zero) / n << endl;
}
void soln()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    plusMinus(arr);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soln();
    return 0;
}