//vijos P1130

#include <iostream>
int sum=1;
void cal(int );
int main()
{
    using namespace std;
    int n;
    cin>>n;
    cal(n);
    cout<<sum<<endl;

}
void cal(int a)
{
    for(int i=1;i<=a/2;++i)
    {
        sum++;
        cal(i);
    }
}