//vijosP1257


#include <iostream>

void swap(std::string & a,std::string & b)
{
    std::string temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    using namespace std;
    int n;
    cin>>n;
    string *name=new string[n];
    string *store=new string [n];
    for(int i=0;i<n;++i)
    {
        cin>>name[i]>>store[i];
    }
    for(int i=0;i<n;++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if(store[j].size()>store[j+1].size()||(store[j].size()==store[j+1].size()&&store[j]==store[j+1]&&name[j]<name[j+1])||
                    (store[j].size()==store[j+1].size()&&store[j]>store[j+1]))
            {
                swap(store[j],store[j+1]);
                swap(name[j],name[j+1]);
            }
        }

    }
    for(int i=n-1;i>=0;--i)
    {
        cout<<name[i]<<endl;
    }
    return 0;
}
