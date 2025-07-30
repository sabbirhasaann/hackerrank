#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<vector<int>> input_matrix(int n, int m)
{
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    return arr;
}

int diagonalDifference(vector<vector<int>> arr)
{
    int p_axis = 0, s_axis = 0;
    for (int i = 0; i < arr.size(); i++)
        p_axis += arr[i][i];
    cout << p_axis << endl;
    for (int i = arr.size() - 1; i >= 0; i--)
        s_axis += arr[i][arr.size() - i - 1];
    cout << s_axis << endl;
    return abs(p_axis - s_axis);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr = input_matrix(n, m);
    cout << diagonalDifference(arr);

    return 0;
}