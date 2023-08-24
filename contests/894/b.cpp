#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-- > 0)
    {
        int n;
        cin >> n;

        vector<int> b = {};
        int i;
        cin >> i;
        b.push_back(i);

        int o = 0;

        for(int i = 1; i < n; i++)
        {
            int x;
            cin >> x;

            if(x < b[i+o-1])
            {
                b.push_back(x);
                o++;
            }

            b.push_back(x);
        }

        cout << b.size() << endl;
        for(int i : b)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
