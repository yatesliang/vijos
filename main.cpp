//vijos P1131

#include <iostream>
#include <cmath>
int gcd(int,int);
int main()
{
    int sum=0;
    using namespace std;
    int m,n;
    int x,y;
    cin>>m>>n;
    int m_range;
    m_range=n/m;
    for(int i=1;i<=m_range;++i)
    {
        x=m*i;
        for(int j=1;j<=m_range;++j)
        {
            y=m*j;
            if(gcd(x,y)==m&&x*y==n*m)
                sum++;

        }
    }

    cout<<sum<<endl;
    return 0;
}
int gcd(int a,int b)
{
    if(a<b)
    {
        int t=a;
        a=b;
        b=t;
    }
    int r=1;

    while(r)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}