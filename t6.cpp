#include<iostream>
using namespace std;
char a[6][4]={{'E','B','E','B'},{'E','B','E','B'},{'E','B','E','B'},{'E','B','E','B'},{'E','B','E','B'},{'E','B','E','E'}};
int arr[6];
void display()
{
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void book(){
    int c=1,b=1;
    while(1){
    cout<<"enter seat num to book (enter row(1 to 6) num then col(1 to 4)) : ";
    cin>>c>>b;
    if((c>=1 && c<=6) && (b>=1 && b<=4))
    {
        break;
    }
        cout<<"you have entered invalid input , Try Again!\n";
    }
    a[c-1][b-1]='B';
    cout<<"Your seat "<<c<<" "<<b<<" has been booked \n";
}
void availableSeats(){
    int count=0;
      for(int i=0;i<6;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]=='E')
            {
                count++;
            }
        }
    }
    cout<<"Available seats = "<<count<<"\n";
}
void RowMaxEmpty()
{
     for(int i=0;i<6;i++)
    {
        int c=0;
        for(int j=0;j<4;j++)
        {
            if(a[i][j]=='E')
            {
                c++;
            }
        }
        arr[i]=c;
    }
    int max=0;
    int maxrow=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxrow=i;
        }
    }
    cout<<"Row "<<maxrow+1<<" has maximum empty seats \n";
}
int main()
{
    cout<<"seat layout \n";
    display();
    book();
    display();
    availableSeats();
    RowMaxEmpty();
  return 0;
}