#include <iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-- > 0)
    {
        int n, k;
        cin >> n >> k;

        vector<int> diffs(n);
        for(int &d : diffs)
        {
            cin >> d;
        }

        int *range = new int[1000000001];
        for(int i = 0; i < 1000000001; i++)
        {
            range[i] = 0;
        }

        for(int i : diffs)
        {
            for(int j = i - k; j <= i + k; j++)
            {
                range[j]++;
            }
        }

        int m = 0;
        for(int i : diffs)
        {
            m = max(m, range[i]);
        }

        cout << m << endl;
    }

    return 0;
}

        /*
        int m = 999999999;
        vector<int> left;
        do
        {
            left.clear();
            int removed = n - left.size();
            int l = 0;
            int r = 1;
            while(r + 1 < diffs.size())
            {
                cout << "start l r " << diffs[l] << " " << diffs[r] << endl;
                if(abs(diffs[l] - diffs[r]) <= k)
                {
                    cout << "fine" << endl;
                    l++;
                    r++;
                }
                else
                {
                    cout << "abs " << abs(diffs[l] - diffs[r+1]) << " " << abs(diffs[r] - diffs[r+1]) << endl; 
                    if(abs(diffs[l] - diffs[r+1]) < abs(diffs[r] - diffs[r+1]))
                    {
                        removed++;
                        cout << "r" << *(diffs.begin()+r) << endl;
                        left.push_back(*(diffs.begin()+r));
                        diffs.erase(diffs.begin()+r);
                    }
                    else
                    {
                        while(l >= 0)
                        {
                            removed++;
                            cout << "r" << *(diffs.begin()+l) << endl;
                            left.push_back(*(diffs.begin()+l));
                            diffs.erase(diffs.begin()+l);
                            l--;
                        }

                        l = 0;
                        r = 1;
                    }
                }
                cout << "end l r " << diffs[l] << " " << diffs[r] << endl;
            }
            if(n > 1 && abs(diffs[l] - diffs[r]) > k)
            {
                removed++;
                cout << "r" << *(diffs.begin()+r) << endl;
                left.push_back(*(diffs.begin()+r));
                diffs.erase(diffs.begin()+r);
            }
            
            m = min(removed, m);
            diffs = left;
            for(int i : diffs)
            {
                cout << i << " ";
            }
            cout << endl;
            sleep(1);

        } while(diffs.size() > 0);

        cout << m << endl;
        */
