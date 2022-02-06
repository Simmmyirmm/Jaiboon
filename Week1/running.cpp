#include <cstdio>
using namespace std;

int main()
{
    int n,k,tmp,ans=0,indexmin=0;
    double floater=0;
    double min=9999;
    double time[100010];
    scanf("%d %d",&n,&k);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        floater=float(tmp)/60;
        time[i]=floater;
    }
    for (int i=0;i<n;i++)
    {
        if (time[i]<min)
        {
            min=time[i];
            indexmin=i;
        }
    }
    //printf("%lf",min);
        for (int j=0;j<n;j++)
        {
            
            if (time[j]==NULL)
            {
                continue;
            }
            if (time[indexmin]*(k)<=(time[j]*(k-1)))
            {
                time[j]=NULL;
            }
           // cout << time[j] << " ";
        }
    
    for (int i=0;i<n;i++)
    {
        if (time[i]!=NULL)
        {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}