#include<iostream>
using namespace std;
float a[5][5];
void input(){
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
            cout<<"Enter temp for location "<<i<<","<<j<<" : \n";
      cin>>a[i][j];
    }
  }
}
void average(){
  for(int i=0;i<5;i++)
  {
    float sum=0.0;
    for(int j=0;j<5;j++)
    {
      sum+=a[i][j];
    }
    float avg=sum/5;
    cout<<"Average temperature of zone "<<i+1<<" = "<<avg<<endl;
  }
}
void extreme(){
 for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      if(a[i][j]>45.0){cout<<"extreme hot at "<<i<<","<<j<<" : " <<a[i][j]<<" Celsius\n";}
      else if (a[i][j]<0.0){cout<<"extreme cold at "<<i<<","<<j<<" : "<<a[i][j]<<" Celsius\n";}
      else{cout<< "Normal at " <<i<<","<<j<<" : "<<a[i][j]<<" "<<" Celsius\n";}
    }
  }
}
int main()
{
  cout<<"Enter temperatires at different spots \n";
  input();
  cout<<"Row wise averages \n";
  average();
  cout<<"Extreme hot or cold \n";
  extreme();
  return 0;
}