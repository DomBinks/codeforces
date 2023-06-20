#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdlib>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t-- > 0)
    {
        int m, n;
        cin >> m >> n;

        vector<pair<int,int>> ranges;
        for(int i = 0; i < n; i ++)
        {
            int l, r;
            cin >> l >> r;
            ranges.push_back(make_pair(l,r));
        }

        int q;
        cin >> q;

        int *changes = new int[q+1];
        int **cache = new int*[m+1];

        for(int i = 1; i <= m; i++)
        {
            cache[i] = new int[m+1];
            for(int j = i; j <= m; j++)
            {
                cache[i][j] = ((j - i + 1) / 2) + 1;
            }
        }

        for(int i = 1; i <= q; i++)
        {
            int x;
            cin >> x;

            for(int f = 1; f <= x; f++)
            {
                for(int b = x; b <= m; b++)
                {
                    if(cache[f][b] > 0)
                    {
                        cache[f][b]--;
                    }

                    if(cache[f][b] == 0)
                    {
                        cache[f][b] = -i;
                    }
                }
            }
        }

        int min = q+1;

        for(pair<int,int>& range : ranges)
        {
            if(cache[range.first][range.second] < 0 && 
                    cache[range.first][range.second] * -1 < min)
            {
                min = cache[range.first][range.second] * -1;
            }
        }

        if(min == q+1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min << endl;
        }
    }

    return 0;
}
