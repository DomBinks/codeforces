#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n, m, k, vlad;
        cin >> n >> m >> k >> vlad;

        int out = 0;
        for(int i = 0; i < n; i++)
        {
            int h;
            cin >> h;

            int dh = abs(vlad - h);
            if(dh != 0 && dh % k == 0 && dh / k < m)
            {
                out++;
            }
        }

        cout << out << endl;
    }

    return 0;
}
