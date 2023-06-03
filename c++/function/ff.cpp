#include<iostream>
using namespace std;

int f(int n){
    int fa=1;
    for(int i=1;i<=n;i++){
        fa*=i;
    }
    return fa;
}

int main(){
    int n;
    cin>>n;

    int a=f(n);
    cout<<a<<endl;
    return 0;
}