#include<iostream>
using namespace std;
int sn(int n){
    int sum=0;
    
    for(int i=1;i<=n;i++){
       
       sum=sum+i;
    }
    return sum;
}

int main(){
    int n,s;
    cin>>n;
    s=sn(n);
    cout<<s<<endl;
    
    return 0;
    
}