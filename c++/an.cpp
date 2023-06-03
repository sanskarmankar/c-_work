#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int on;
    on=n;
    int sum=0;
    int h=3;
    while(n>0){
        int l=n%10;
        sum=sum+pow(l,h);
        n=n/10;
    }

    if(sum==on){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<sum<<endl;
    }

    return 0;
}