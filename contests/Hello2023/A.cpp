#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    int t;
    scanf("%d", &t);
    while(t-- > 0)
    {
        int lamps;
        scanf("%d", &lamps);

        string lampString;
        cin >> lampString;

        bool found = false;

        for(int i = 0; i < lamps - 1; i++)
        {
            if(lampString[i] == 'R' && lampString[i+1] == 'L')
            {
                cout << "0" << endl;
                found = true;
                break;
            }
                
            if(lampString[i] == 'L' && lampString[i+1] == 'R')
            {
                cout << i+1 << endl;
                found = true;
                break;
            }
        }

        if(found == false)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
