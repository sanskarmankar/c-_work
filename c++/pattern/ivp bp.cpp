#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int s=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            s=i+j;
            if(s%2==0){
                cout<<" "<<"1";
            }
            else{
                cout<<" "<<"0";
            }
        }
        cout<<endl;
    }

    return 0;
}