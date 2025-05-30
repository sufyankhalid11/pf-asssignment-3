#include<iostream>
using namespace std;
    float a[7][4];
    float saleitem[4];
    float saleday[7];
void input()
{
    for(int i=0;i<7;i++)
    {
        cout<<"Day "<<i+1<<"\n";
        for(int j=0;j<4;j++)
        {
            cout<<"Enter sale of  item "<<j+1<<" ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
}
void totalsalesperitem(){
    for(int i=0;i<4;i++)
    {
        float sale=0;
        for(int j=0;j<7;j++)
        {
            sale+=a[j][i];
        }
        saleitem[i]=sale;
    }
    cout<<"TOTAL SALE PER item \n";
    for(int i=0;i<4;i++)
    {
        cout<<saleitem[i]<<" ";
    }
}
void totalsalesperday(){
    for(int i=0;i<7;i++)
    {
        float sale=0;
        for(int j=0;j<4;j++)
        {
            sale+=a[i][j];
        }
        saleday[i]=sale;

    }
    float maxi=saleitem[0];
    int maxinum=1;
for(int i=1;i<4;i++)
{
    if(saleitem[i]>maxi)
    {
        maxi=saleitem[i];
        maxinum=i+1;
    }
}
   float maxd=saleday[0];
   int maxdnum=1;
for(int i=1;i<7;i++)
{
    if(saleday[i]>maxd)
    {
        maxd=saleday[i];
        maxdnum=i+1;
    }
}
 cout<<"\nTOTAL SALE PER day \n";
    for(int i=0;i<7;i++)
    {
        cout<<saleday[i]<<" ";
    }
    cout<<endl;
cout<<"the highest total sales per day is on day "<<maxdnum<<" = "<<maxd<<endl;
cout<<"the highest total sales per item is of item "<<maxinum<<" = "<<maxi<<endl;
}

int main()
{
    input();
    totalsalesperitem();
    totalsalesperday();

  return 0;
}