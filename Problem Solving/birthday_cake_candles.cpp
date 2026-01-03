// 2025/09/01 18:25:04

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int birthdayCakeCandles(vector<int> candles)
{
    int cnt = 0;
    int maxi = *max_element(candles.begin(), candles.end());
    for (int x : candles)
        if (x == maxi)
            cnt++;
    return cnt;
}
void soln()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << birthdayCakeCandles(arr);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soln();
    return 0;
}