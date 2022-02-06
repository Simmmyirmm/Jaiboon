#include<iostream>
using namespace std;


int main()
{
    int n,tmp,now;
    int next[100100];
    int temp[100100];
    int countnumber=0,maxround=-9999;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> tmp;
        next[i]=tmp;
        //cout << temp[i] <<" ";
    }
    for (int i=1;i<=n;i++)
    {
        now=i;
        while (temp[i]==0)
        {
            //cout << now <<" ";
            now=next[now];
            temp[now]=1;
            countnumber++;
            if (now==i)
            {
                break;
            }
        }
        if (countnumber>maxround)
        {
            maxround=countnumber;
        }
        countnumber=0;
    }
    cout << maxround << "\n";
    return 0;
}