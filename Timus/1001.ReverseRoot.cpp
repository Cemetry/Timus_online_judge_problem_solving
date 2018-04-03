#include<bits/stdc++.h>
#include<cmath>
using namespace std;
double in[128*1024];
int main()
{

unsigned long long n;
int i = 0;
while(scanf("%llu",&n)!=EOF)
{
    in[ i++] = (double)sqrt(n*1.0);
}
for(;--i>=0;)
{
    printf("%.4lf\n",in[i]);

}
    return 0;
}
