#include<iostream>
using namespace std;
int a[10][5];
float avg[5];
void input()
{
    for(int i=0;i<10;i++)
    {
        cout<<"For Customer "<<i+1<<" : \n";
        for(int j=0;j<5;j++)
        {
           while(1)
        {
            cout<<"Enter rating of product "<<j+1<<" : ";
            cin>>a[i][j];
            if(a[i][j]<0 || a[i][j]>5)
            {
                cout<<"you have entered invalid input\n";
            }
            else{
                break;
            }
        }
        }
    }
}
void AverageRatingOfEachProduct(){
    for(int i=0;i<5;i++)
    {
        float sum=0;
        for(int j=0;j<10;j++)
        {
            sum+=a[j][i];
        }
        float average=sum/10;
        avg[i]=average;
        cout<<"average rating of product"<<i+1<<" = "<<average<<"\n";
    }
}
void perfectRating()
{
    for(int i=0;i<5;i++)
    {
    int c=0;
        for(int j=0;j<10;j++)
        {
            if(a[j][i]==5)
            {
                c++;
            }
        }
        cout<<c<<" customers give perfect rating of 5 to product "<<i+1<<endl;
    }
}
void worstavg()
{
    float min=avg[0];
    int minnum=0;
    for(int i=1;i<5;i++)
    {
        if(avg[i]<min)
        {
            min=avg[i];
            minnum=i;
        }
    }
    cout<<"worst avg is of product "<<minnum+1<<" with avg of "<< min<<endl;
}
int main()
{
    input();
    AverageRatingOfEachProduct();
    perfectRating();
    worstavg();
  return 0;
}