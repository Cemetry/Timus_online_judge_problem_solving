#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>buf;
    cin >> n;
    if(n==0)
    {
        cout <<"01"<<endl;
        return 0;
    }
    else if(n==1)
    {
    cout <<"1"<<endl;
    return 0;
    }
    else
    {
        for(int i = 9; i>=2;i--)
        {
            while(n%i==0)
            {
                n/=i;
                buf.push_back(i);
            }
        }
    }
    if(n==1)
    {
        for(int i = buf.size()-1;i>=0;i--)
        {
            cout << buf[i];
        }
        cout <<endl;
    }
    else
    {
        cout <<"-1"<<endl;
    }
    return 0;

}
