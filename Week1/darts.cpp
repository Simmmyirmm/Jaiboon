#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,x,y;
    int score=0;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> x >> y;
        if (pow(x,2)+pow(y,2)<=4)
        {
            score+=5;
        }
        else if (pow(x,2)+pow(y,2)<=16)
        {
            score+=4;
        }
        else if (pow(x,2)+pow(y,2)<=36)
        {
            score+=3;
        }
        else if ((pow(x,2)+pow(y,2)<=64))
        {
            score+=2;
        }
        else if (pow(x,2)+pow(y,2)<=100)
        {
            score+=1;
        }
        else
        {
            score+=0;
        }
        //cout << score <<"\n";
    }
    cout << score <<"\n";
    return 0;
}
//1+1+1+3