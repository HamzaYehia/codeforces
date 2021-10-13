// problem name: 158A Next Round
// problem link: https://codeforces.com/problemset/problem/158/A
// status: accepted

// auother: https://github.com/HamzaYehia

#include <iostream>
using namespace std;

int main()
{
    int n, k, cnt = 0;
    int arr[100]{};
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int x = 1; x <= n; x++)
    {
        if (arr[x] >= arr[k] && arr[x] != 0)
        {
            cnt++;
        }
    }

    cout << cnt;
}

