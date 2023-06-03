#include<iostream>
using namespace std;

int main(){
  int I,j;

  for(I=1;I<=3;I++){
        for(j=1;j<=I;j++){
         cout<<" *";  
                    
        }cout<<endl;
    }

  for(I=2;I>=1;I--){
        for(j=1;j<=I;j++){ 
            cout<<" *";  
                    
        }cout<<endl;
   }

  return 0;
}