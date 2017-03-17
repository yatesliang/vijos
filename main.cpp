//vijos P1040

#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    string num1;
    string num2;
    vector<int> vec1;
    vector<int> vec2;
    vector<int> v_sum,v_temp;
    cin>>num1>>num2;
    int temp;
    int sum;
    for(auto item=num1.end()-1;item>=num1.begin();--item)
    {
        temp=*item-48;
        vec1.push_back(temp);
    }
    for(auto item=num2.end()-1;item>=num2.begin();--item)
    {
        temp=*item-48;
        vec2.push_back(temp);
    }
    for(int i=0;i<num1.size();++i)
    {
        for(int j=0;j<num2.size();++j)
        {
            sum=vec1[i]*vec2[j];
            v_temp.push_back(sum);
        }
        if(v_sum.empty())
        {
            v_sum=v_temp;
            for(int item=0;item<v_sum.size()-1;++item)
            {

                v_sum[item+1]+=v_sum[item]/10;
                v_sum[item]%=10;
            }

                temp=v_sum[(v_sum.size()-1)];
                v_sum[(v_sum.size()-1)]%=10;
                v_sum.push_back(temp/10);

        }
        else
        {
            for(int item=i,k=0;k<v_temp.size();++k,++item)
            {


                v_sum[item]+=v_temp[k];
                if(item==v_sum.size()-1)
                {
                    v_sum.push_back(v_sum[item]/10);
                    v_sum[item]%=10;
                }
                else
                {
                    v_sum[item+1]+=v_sum[item]/10;
                    v_sum[item]%=10;
                }


            }
        }
        v_temp.clear();
    }
    auto item=v_sum.end()-1;
    if(*item==0)
        --item;
    for(;item>=v_sum.begin();--item)
    {
        cout<<*item;
    }
    return 0;
}