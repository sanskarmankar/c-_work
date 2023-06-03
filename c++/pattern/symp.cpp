#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    float
    int c=1;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=i;j++){
            cout<<" ";
        }
         c=i;
        for(;j<=n;j++){
            cout<<c--;
        }
         c=2;
        for(;j<=n+i-1;j++){
            cout<<c++;
        }
        cout<<endl;
    }
}
