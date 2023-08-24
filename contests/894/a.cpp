#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n, m;
        cin >> n >> m;

        map<char, vector<int>> letters;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                char c;
                cin >> c;

                if(c == 'v' || c == 'i' || c == 'k' || c == 'a')
                {
                    if(letters.count(c) == 0)
                    {
                        letters[c] = {j};
                    }
                    else
                    {
                        letters[c].push_back(j);
                    }
                }
            }
        }

        if(letters.count('v') > 0 && letters.count('i') > 0 &&
                letters.count('k') > 0 && letters.count('a') > 0)
        {
            sort(letters['v'].begin(), letters['v'].end());
            sort(letters['i'].begin(), letters['i'].end());
            sort(letters['k'].begin(), letters['k'].end());
            sort(letters['a'].begin(), letters['a'].end());

            int s = *letters['v'].begin();
            
            vector<int>::iterator it = letters['i'].begin();
            while(*it <= s && it != letters['i'].end())
            {
                letters['i'].erase(it);
                it = letters['i'].begin();
            }
            if(it == letters['i'].end())
            {
                cout << "NO" << endl;
                continue;
            }
            else
            {
                s = *it;
            }

            it = letters['k'].begin();
            while(*it <= s && it != letters['k'].end())
            {
                letters['k'].erase(it);
                it = letters['k'].begin();
            }
            if(it == letters['k'].end())
            {
                cout << "NO" << endl;
                continue;
            }
            else
            {
                s = *it;
            }

            it = letters['a'].begin();
            while(*it <= s && it != letters['a'].end())
            {
                letters['a'].erase(it);
                it = letters['a'].begin();
            }
            if(it == letters['a'].end())
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
