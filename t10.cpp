#include<iostream>
using namespace std;
int a[4][6];
int candidate[4];
int station[6];
void input()
{
    for(int i=0;i<4;i++)
    {
        cout<<"For candidate "<<i+1<<" : \n";
        for(int j=0;j<6;j++)
        {
            cout<<"From polling station "<<j+1<<" : ";
            cin>>a[i][j];
        } 
    }
}
void totalVotes()
{
    // total votes for each candidate 
       for(int i=0;i<4;i++)
    {
        int sum=0;
        for(int j=0;j<6;j++)
        {
            sum+=a[i][j];
        } 
        cout<<"Candidate "<<i+1<<" has "<<sum<<" votes \n"; 
        candidate[i]=sum;
    } 
     // total votes for each station 
       for(int i=0;i<6;i++)
       {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            sum+=a[j][i];
        } 
        cout<<"Polling station "<<i+1<<" has total "<<sum<<" votes \n"; 
        station[i]=sum;
        } 
}
void winners()
{
    int max=candidate[0];
    int maxidx=0;
    for(int i=0;i<4;i++)
    {
        if(candidate[i]>max)
        {
            max=candidate[i];
            maxidx=i;
        }
    }
    cout<<"WINNER is "<<maxidx+1<<endl;
   
}
void detect()
{
 for(int i=0;i<6;i++)
    {
        if(station[i]<100)
        {
            cout<<"station "<<i+1<<" had voter turnout less than 100.\n";
        }
    }
}
int main()
{
    cout<<"---Enter votes--- \n";
    input();
    cout<<"---Total votes--- \n";
    totalVotes();
    cout<<"---WINNER---  \n";
    winners();
    cout<<"---Detections---\n";
    detect();
  return 0;
}