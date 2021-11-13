#include<iostream>
using namespace std;

int main()
{
    int i, j, m, n;
    cout << "enter n:";
    cin >> n;
    cout << "enter m:";
    cin >> m;
    for (i = 1; i <= n; i++)
    {
        cout << "\n";
        for (j = 1; j <= m; j++)
            cout << i * j << "\t";
    }

    system("pause>a");  // NOLINT(concurrency-mt-unsafe)
}
