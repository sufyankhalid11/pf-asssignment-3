#include<iostream>
using namespace std;
float a[3][7];
void input(){
  for(int i=0;i<3;i++)
  {
    cout<<"For shift "<<i+1<<"\n";
    for(int j=0;j<7;j++)
    {
      cout<<"Enter defect percentage for day "<<j+1<<" : ";
      cin>>a[i][j];
    }
  }
}
void avgPerShift()
{
  for(int i=0;i<3;i++)
  {
    float sum=0;
    for(int j=0;j<7;j++)
    {
      sum+=a[i][j];
    }
    float average=sum/7;
    cout<<"Average of shift "<<i+1<<" = "<<average<<endl;
    if(average>10)
    {
      cout<<"shift "<<i+1<<" is critical one as defects avg >10\n";
    }
  }
}
void avgPerDay()
{
  for(int i=0;i<7;i++)
  {
    float sum=0;
    for(int j=0;j<3;j++)
    {
      sum+=a[j][i];
    }
    float average=sum/3;
    cout<<"Average of day "<<i+1<<" = "<<average<<endl;

  }
}
int main()
{
  input();
  avgPerDay();
  avgPerShift();

  return 0;
}