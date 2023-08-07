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
        int s = n*(n-1)/2;

        vector<int> b(s);
        for(int &i : b)
        {
            cin >> i;
        }

        vector<pair<int,int>> bounds(n);
        for(int i = 0; i < n; i++)
        {
            bounds[i] = make_pair(INT_MAX, INT_MIN);
        }

        int i = 0;
        int j = 1;

        for(int x : b)
        {
            bounds[i].first = min(bounds[i].first, x);
            bounds[j].first = min(bounds[j].first, x);
            bounds[i].second = max(bounds[i].second, x);
            bounds[j].second = max(bounds[j].second, x);
            
            j++;
            if(j >= n)
            {
                j = 0;
                i++;

                if(i > n)
                {
                    break;
                }
            }

            /*
            for(int y = 0; y < n; y++)
            {
                cout << bounds[y].first << "  " << bounds[y].second << endl;
            }
            cout << "--------------" << endl;
            */
        }

        for(int i = 0; i < n; i++)
        {
            cout << bounds[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}
