//vijos P1090

#include <iostream>
#include <vector>
#include <algorithm>
int C(long,int);
int main() {
    using namespace std;
    int n, k;
    vector<int> vecIn, vecMod;
    cin >> n >> k;
    long long sum = 0;
    int temp;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        if (i == 0)
        {
            vecIn.push_back(temp % k);
        } else
        {
            vecIn.push_back((temp + vecIn[i - 1]) % k);
        }
    }
    sort(vecIn.begin(), vecIn.end());
    auto item_head=vecIn.begin();
    auto item_tail=vecIn.begin();
    while(item_head!=vecIn.end())
    {
        while (*item_head == *item_tail)item_tail++;
        long number=item_tail-item_head;
        if(*item_head==0)
            sum+=number;
        if(number==1)
        {
            item_head=item_tail;
            continue;
        }

        sum+=C(number,2);
        if(sum>1234567)
            sum%=1234567;
        item_head=item_tail;

    }
    cout<<sum;
    return 0;

}
int C(long m,int n)
{
    int deno=1,member=1;
    for(int i=0;i<n;++i)
    {
        deno*=m;
        --m;
    }
    for(int i=n;i>0;--i)
    {
        member*=i;
    }
    return (int)deno/member;
}