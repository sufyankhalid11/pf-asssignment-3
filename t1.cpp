#include<iostream>
using namespace std;
    int result[10][5];
    int totalm[10];
    float avg, allavg[10];
void inputmarks()
{
    for(int i=0;i<10;i++)
    {
        cout<<"For student "<<i+1<<" \n";
        for(int j=0;j<5;j++)
        {
            cout<<"Enter student "<<i+1<<" marks of subject "<<j+1<<" ";
            cin>>result[i][j];
        }
    }
}
void average()
{
    for(int i=0;i<10;i++)
    {
        int allsum=0;
        for(int j=0;j<5;j++)
        {
            allsum+=result[i][j];
        }
        totalm[i]=allsum;
         avg=allsum/5.0;
         allavg[i]=avg;
         cout<<"For student "<<i+1<<"\n";
        cout<<"avg = "<<avg<<endl;
        cout<<"total number = "<<allsum<<endl;
    }
}
void grade(){
    for(int i=0;i<10;i++)
    {
        char grade;
        if(allavg[i]>90){grade='A';}
        else if(allavg[i]>80){grade='B';}
        else if(allavg[i]>70){grade='C';}
        else {grade='F';}
        cout<<"Grade of student "<<i+1<<" = "<<grade<<"\n";
    }
}
void topscorrer()
{
    int max=0, student=0;
    for(int i=0;i<10;i++)
    {
        if(totalm[i]>max)
        {
            max=totalm[i];
            student=i;
        }
    }
    cout<<"Top Scorre is student "<<student+1<<" with marks of "<<max<<endl;
}
int main()
{
    inputmarks();
    average();
    grade();
    topscorrer();

  return 0;
}