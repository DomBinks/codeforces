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

        map<int, int> h;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(h.count(x) == 0)
            {
                h[x] = i+1;
            }
            else
            {
                h[x]++;
            }
        }

        map<int, int> k;
        
        for(pair<int,int> p : h)
        {
            k[p.second] = p.first;
        }

        bool b = true;
        for(pair<int,int> p : h)
        {
            if(p.first != k[p.second] || k[p.first] != p.second)
            {
                cout << "NO" << endl;
                b = false;
                break;
            }
        }

        if(b)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
