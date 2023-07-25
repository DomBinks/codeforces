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

        vector<int> inp;
        vector<int> sorted;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            inp.push_back(x);
            sorted.push_back(x);
        }

        sort(sorted.begin(), sorted.end());

        bool success = true;
        for(int i = 0; i < n; i++)
        {
            if((inp[i] % 2) != (sorted[i] % 2))
            {
                success = false;
                cout << "NO" << endl;
                break;
            }
        }

        if(success)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
