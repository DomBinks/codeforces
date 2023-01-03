#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int t;
    scanf("%d", &t);
    while(t-- > 0)
    {
        int length;
        int favourite;
        scanf("%d %d", &length, &favourite);

        int operations = 0;

        vector<int> nums;
        vector<int> sums;
        int sum;
        for(int i = 0; i < length; i++)
        {
            int num;
            cin >> num;
            sum += num;
            nums.push_back(num);
            sums.push_back(sum);
        }

        int beginSum = sums[favourite-1];
        for(int i = favourite-1; i >= 0; i--)
        {
            if(beginSum - nums[i] < sums[favourite-1])
            {
                operations++;
                beginSum -= nums[i];
                beginSum += (-nums[i]);
            }
        }

        int endSum = beginSum;
        for(int i = favourite; i < length; i++)
        {
            if(endSum + nums[i] < sums[favourite-1])
            {
                operations++;
                endSum += (-nums[i]);
            }
            else
            {
                endSum += nums[i];
            }
        }

        cout << operations << endl;
    }

    return 0;
}

