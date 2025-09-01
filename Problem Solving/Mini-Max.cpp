// 2025/08/27 19:36:33

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void miniMaxSum(vector<int> arr)
{
    long long sum = accumulate(arr.begin(), arr.end(), (long long)0);
    long long mini = sum - arr[0], maxi = sum - arr[0];

    for (int i = 0; i < 5; i++)
    {
        long long val = sum - arr[i];
        if (val > maxi)
            maxi = val;
        if (val < mini)
            mini = val;
    }
    cout << (long long)mini << " " << (long long)maxi << endl;
}
void soln()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    miniMaxSum(arr);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soln();
    return 0;
}