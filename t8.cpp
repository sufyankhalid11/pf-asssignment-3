#include<iostream>
using namespace std;
char a[5][5]={{'A','A','I','I','M'},{'A','A','I','I','M'},{'A','A','I','I','M'},{'A','A','I','I','M'},{'A','M','I','M','M'}};
int missingcount[5];
void display()
{
    for(int i=0;i<5;i++)
    {
          if(i==0)
            {
                cout<<"  0 1 2 3 4\n";
            }
        cout<<i<<" ";
        for(int j=0;j<5;j++)
        {
          
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void count()
{
    int available=0 , issued=0 , missing=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]=='A'){available++;}
            else if(a[i][j]=='I'){issued++;}
            else if(a[i][j]=='M'){missing++;}
        }
    }
    cout<<"Count total available "<<available<<"\n";
    cout<<"Count total issued "<<issued<<"\n";
    cout<<"Count total missing "<<missing<<"\n";
}
void rowsHighestMissingCount()
{
    for(int i=0;i<5;i++)
    {
        int mcount=0;
        for(int j=0;j<5;j++)
        {
            if(a[i][j]=='M'){mcount++;}
        }
        missingcount[i]=mcount;
    }
    int highmissing=missingcount[0];
    int highrow=0;
    for(int i=0;i<5;i++)
    {
        if(missingcount[i]>highmissing)
        {
            highmissing=missingcount[i];
            highrow=i;
        }
        
    }
    cout<<"rows "<<highrow<<" (shelves) with the highest missing count = "<<highmissing<<"\n";
}
int main()
{
    display();
    count();
    rowsHighestMissingCount();
  return 0;
}