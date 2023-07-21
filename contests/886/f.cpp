#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-- > 0)
    {
        int n;
        cin >> n;

        int p = 0;

        map<int, int> nums;
        vector<int> as;
        
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            as.push_back(a);

            if(nums.count(a) == 0)
            {
                nums[a] = 1;
            }
            else
            {
                nums[a]++;
            }
        }

        for(int a : as)
        {
            int total = 0;
            for(int j = 1; (j*j <= a) && (j <= n); j++)
            {
                if(a % j == 0)
                {
                    if(nums.count(j) > 0)
                    {
                        total += nums[j];
                    }

                    if(j*j < a && (a / j) <= n)
                    {
                        if(nums.count(a/j) > 0)
                        {
                            total += nums[a/j];
                        }
                    }
                }
            }

            p = max(p, total);
        }

        cout << p << endl;
    }

    return 0;
}
