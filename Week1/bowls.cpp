#include<iostream>
using namespace std;

int main()
{
    int n,max=0;
    int tmp;
    int bowls[100010];
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> tmp;
        for (int j=0;j<301;j++)
        {
            if (tmp==j)
            {
                bowls[j]++;
                break;
            }
        }
    }
    for (int i=0;i<301;i++)
    {
        //cout << bowls[i] <<" ";
        if (bowls[i]>max)
        {
            max=bowls[i];
        }
    }
    //cout << "\n";
    cout << max <<"\n";
    return 0;
}