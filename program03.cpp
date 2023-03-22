#include<iostream>
using namespace std;
int main()
{
    int cpbike,rtax,choice;
    cout<<" Enter cost-price of bike: ";
    cin>>cpbike;

    if(cpbike<=50000)
    {
        rtax=cpbike*5/100;
        cout<<" The road-price will be: "<<rtax<<endl;
        cout<<" The total amount willbe: "<<rtax+cpbike<<endl;
    }

    else if(cpbike>50000 || cpbike<=100000)
    {
        rtax=cpbike*10/100;
        cout<<" The road-price will be: "<<rtax<<endl;
        cout<<" The total amount will be: "<<rtax+cpbike<<endl;
    }

    else if(cpbike>100000)
    {
        rtax=cpbike*15/100;
        cout<<" The road-price will be: "<<rtax<<endl;
        cout<<" The total amount will be: "<<rtax+cpbike<<endl;
    }

    else
    {
        cout<<" Invalid Input! "<<endl;
    }

    return 0;
}
