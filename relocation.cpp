#include <iostream>

using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < y; i++)
    {
        int o, t, th;
        cin >> o >> t >> th;
        if (o == 1)
        {
            arr[t - 1] = th;
        }
        else
        {
            cout << abs((arr[t - 1] - arr[th - 1])) << endl;
        }
    }
    return 0;
}
