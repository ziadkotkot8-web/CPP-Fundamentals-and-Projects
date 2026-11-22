// main syntax in c++.
#include<iostream>
using namespace std;

int main(){
// we will declare variable.
    int x,y;
    cout<<" enter x :";
    cin>>x;
    cout<<" enter y :";
    cin>>y;
// we will declare operation.
char op;
cout<<" enter op :";
cin>>op;
switch(op){
case '+':cout<<x << "+" <<y<<"="<<(x+y)<<endl;
break;
case '-':cout<<x<< "-" <<y<<"="<<(x-y)<<endl;
break;
case '*':cout<<x<< "*" <<y<<"="<<(x*y)<<endl;
break;
case '/':cout<<x<< "/" <<y<<"="<<(x/y)<<endl;
break;
default :cout<<" in correct"<<endl;
}
}