#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
           cout<<"np"<<endl;
           break;
        }
        else{
            cout<<"p"<<endl;
        }
    }

   return 0;
}