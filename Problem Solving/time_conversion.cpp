// 2025/09/01 19:00:03

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
string timeConversion(string s)
{
    string pm = s.substr(8, 2);
    string hr = s.substr(0, 2);
    string fixed = s.substr(2, 6);
    string ss;
    int n;
    if (pm == "PM")
        n = (stoi(hr) + 12) % 24;
    else
        n = (12 - stoi(hr)) % 12;
    if (n < 10)
        ss = '0';
    ss = ss + to_string(n) + fixed;
    return ss;
}
void soln()
{
    string s;
    cin >> s;
    cout << timeConversion(s);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soln();
    return 0;
}