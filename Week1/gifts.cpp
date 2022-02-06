#include<iostream>
using namespace std;

int main()
{
    int n;
    int tmp;
    int sum=0;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> tmp;
        if (tmp>=0)
        {
            sum+=tmp;
        }
    }
    cout << sum << "\n";
    return 0;
}