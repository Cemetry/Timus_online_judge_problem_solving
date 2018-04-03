#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cin >> n;
    if(n<=0)
    {
        for(int i = n; i<=1; i++)
        {
            sum+=i;
        }
    }
    else
    {
        for(int i = 1;i<=n;i++)
        {
            sum+=i;
        }
    }
    cout << sum <<endl;
    return 0;

}
