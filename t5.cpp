#include<iostream>
using namespace std;
int a[4][6];
int TotalScoreEachTeam[6];
void input()
{
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<6;j++)
    {
      while(1){
      cout<<"Enter score(from 1 to 10) of quiz round "<<i+1<<" of team "<<j+1<<" : ";
      cin>>a[i][j];
      if(a[i][j]<0 || a[i][j]>10)
      {
        cout<<"you have entered invalid input \n";
      }
      else{
        break;
      }
              }
    }
  }
}

void TotalScorePerTeam()
{
  for(int i=0;i<6;i++)
  {
    int sum=0;
    for(int j=0;j<4;j++)
    {
      sum+= a[j][i];
    }
    TotalScoreEachTeam[i]=sum;
    cout<<"Total Score of team "<<i+1<<" = "<<sum<<endl;
  }
}
void winner(){
  int win=0;
  int winteam=0;
  for(int i=0;i<6;i++){
    if(TotalScoreEachTeam[i]>win)
    {
      win=TotalScoreEachTeam[i];
      winteam=i+1;
    }
  }
  cout<<"winner team is "<<winteam<<" with score of "<<win<<endl;
  int runnerup=0;
  int runnerteam=1;
  for(int i=0;i<6;i++){
    if(TotalScoreEachTeam[i]>runnerup && TotalScoreEachTeam[i]<win)
    {
      runnerup=TotalScoreEachTeam[i];
      runnerteam=i+1;
    }
  }
  cout<<"runnerup team is "<<runnerteam<<" with score of "<<runnerup<<endl;
}
void less10(){
  for(int i=0;i<6;i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if(a[j][i]<10)
      {
        cout<<"team "<<i+1<<" scored less than 10 in round "<<j+1<<endl;
      }
    }
    
  }
}
int main()
{
  cout<<"Enter scores\n";
  input();
  cout<<"scores per team \n";

  TotalScorePerTeam();
  cout<<"winner and runeerup team \n";

  winner();
  cout<<" teams score less than 10 \n";

  less10();
  return 0;
}
