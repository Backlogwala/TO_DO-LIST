#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sum += arr[i];
        }
        cout << abs(sum) << endl;
    }
    return 0;
}