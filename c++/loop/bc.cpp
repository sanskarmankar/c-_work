#include<iostream>
#include<
using namespace std;

int main(){
    char button;
    int a,b;
    cout<<"ENTER TWO VARIABLE"<<endl;
    cin>>a>>b;

    cout<<"ENTER OPERATOR +,-,*,/"<<endl;
    cin>>button;

    switch(button)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;    
    }
    return 0;
}
