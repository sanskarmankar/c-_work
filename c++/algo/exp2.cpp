#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int a[2][2],b[2][2],c[2][2];
 int m1,m2,m3,m4,m5,m6,m7,i,j;
 
 cout<<"Enter the elements of  Matrix :\n";
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 cin>>a[i][j];
 }
 }
 cout<<"Enter the elements of  Matrix :\n";
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 cin>>b[i][j];
 }
 }
 cout<<"\nFirst matrix is:\n";
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 cout<<setw(4)<<a[i][j];
 }
 cout<<"\n";
 }
 cout<<"\nSecond matrix is\n";
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 cout<<setw(4)<<b[i][j];
 }
 cout<<"\n";
 }
 m1= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);
 m2= (a[1][0]+a[1][1])*b[0][0];
 m3= a[0][0]*(b[0][1]-b[1][1]);
 m4= a[1][1]*(b[1][0]-b[0][0]);
 m5= (a[0][0]+a[0][1])*b[1][1];
 m6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
 m7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
 c[0][0]=m1+m4-m5+m7;
 c[0][1]=m3+m5;
 c[1][0]=m2+m4;
 c[1][1]=m1-m2+m3+m6;
 cout<<"\nProduct of both is:\n";
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 cout<<c[i][j]<<" ";
 }
 cout<<"\n";
 }
 return 0;
}