#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char direction[110];
    int x=0,y=0;
    cin >> direction;
    for (int i=0;i<strlen(direction);i++)
    {
        if (direction[i]=='N')
        {
            y++;
        }
        else if (direction[i]=='W')
        {
            x--;
        }
        else if (direction[i]=='E')
        {
            x++;
        }
        else if (direction[i]=='S')
        {
            y--;
        }
        else if (direction[i]=='Z')
        {
            x=0;
            y=0;
        }
    }
    cout << x <<" "<< y <<"\n";
    return 0;
}