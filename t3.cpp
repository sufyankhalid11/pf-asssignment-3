#include<iostream>
using namespace std;
char a[7][5];
void input()
{
    for(int i=0;i<7;i++)
    {
        cout<<"day "<<i+1<<"\n";
        for(int j=0;j<5;j++)
        {
            cout<<"Enter patient "<<j+1<<" status (S (Stable), C (Critical), and R (Recovered) ) : ";
            cin>>a[i][j];
        }
    }
}
void count()
{
    int snum=0;
    int cnum=0;
    int rnum=0;
        for(int i=0;i<7;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]=='S'){snum++;}
            if(a[i][j]=='C'){cnum++;}
            if(a[i][j]=='R'){rnum++;}
        }
    }
    cout<<"num of patients in s = "<<snum<<endl;
    cout<<"num of patients in c = "<<cnum<<endl;
    cout<<"num of patients in r = "<<rnum<<endl;
}
void criticalstate(){
    for(int i=0;i<5;i++)
    {
        int c=0;
        for(int j=0;j<7;j++)
        {
            if(a[j][i]=='C'){c++;}
        }
        cout<<"number of days each patient "<<i+1<<" remained in a 'Critical' state = "<<c<<endl;
    }
}
int main()
{
    input();
    count();
    criticalstate();
  return 0;
}

