#include <iostream>

using namespace std;


void inforMatic(int num)
{
    if (num%3==0 && num%5==0 && num!=0)
    {
       cout<<"InforMatic"<<endl;
    }
    else if (num%3==0 && num!=0)
    {
       cout<<"Infor"<<endl;
    }
    else if (num%5==0 && num!=0 )
    {
       cout<<"Matic"<<endl;
    }
       else
    {
       cout<<num<<endl;
    }
}

int main()
{
    for(int i=0; i<21; ++i)
        inforMatic(i);
}
