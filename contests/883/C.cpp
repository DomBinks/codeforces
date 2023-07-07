#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n, m, h;
        cin >> n >> m >> h;

        map<int,int> indexToScore;
        map<int,int> indexToPenalty;
        for(int i = 0; i < n; i++)
        {
            indexToScore[i] = 0;
            indexToPenalty[i] = 0;
        }

        for(int i = 0; i < n; i++)
        {
            int clock = 0;
            vector<int> times;

            for(int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                times.push_back(x);
            }

            sort(times.begin(), times.end());
            for(int time : times)
            {
                if(clock + time <= h)
                {
                    indexToScore[i]++;
                    indexToPenalty[i] += (clock + time);
                    clock += time;
                }
                else
                {
                    break;
                }
            }
        }

        priority_queue<pair<int,int>> byScore;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> byPenalty;
        for(int i = 0; i < n; i++)
        {
            byScore.push(make_pair(indexToScore[i], i));
            byPenalty.push(make_pair(indexToPenalty[i], i));
        }

        int seen = 1;
        while(true)
        {
            pair<int,int> score = byScore.top();
            byScore.pop();

            if(score.first != indexToScore[0])
            {
                seen++;
            }
            else
            {
                vector<int> same;
                while(score.first == indexToScore[0] && !byScore.empty())
                {
                    same.push_back(score.second); 
                    score = byScore.top();
                    byScore.pop();
                }

                for(int index : same)
                {
                    if(indexToPenalty[index] < indexToPenalty[0])
                    {
                        seen++;
                    }
                }

                cout << seen << endl;
                break;
            }
        }
    }

    return 0;
}
