#include<iostream>
using namespace std;

int main()
{
    int n,k,t,start=1,count=0;
    cin >> n >> k >> t;
    while (1)
    {
        if (start == t)
        {
            count++;
            break;
        }
        start += k;
        count++;
        if (start>n)
        {
            start=start%n;
            if (start == 1)
            {
                break;
            }
            if (start == t)
            {
                count++;
                break;
            }
        }
        //cout << start <<"\n";
    }
    cout << count <<"\n";
    return 0;
}