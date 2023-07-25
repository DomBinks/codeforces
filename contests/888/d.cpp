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

        vector<int> nums(n-1);
        for(int &num : nums) 
        {
            cin >> num;
        }

        vector<bool> found(n+1, false);
        int f = 0;
        found[0] = true;
        found[1] = true;
        bool error = false;

        int big = -1;

        for(int i = 1; i < n-1; i++)
        {
            if(nums[i]-nums[i-1] > n)
            {
                cout << "BIG" << endl;
                if(big != -1)
                {
                    cout << "BIG already" << endl;
                    error = true;
                }

                big = nums[i]-nums[i-1]; 
                break;
            }
            if(found[nums[i]-nums[i-1]])
            {
                error = true;
                break;
            }
            else //if (nums[i]-nums[i-1] >= 2 || nums[i]-nums[i-1] <= n)
            {
                found[nums[i]-nums[i-1]];
                f++;
            }
        }

        if(big == -1 && f == n -2)
        {
            big = 0;
            f++;
        }

        if(big != -1)
        {
            for(int i = 2; i <= n; i++)
            {
                if(!found[i])
                {
                    if(!found[big-i])
                    {
                        big = 0;
                        f += 2;
                    }
                }
            }
        }

        if(error || big == -1 || f < n-1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

    }

    return 0;
}
