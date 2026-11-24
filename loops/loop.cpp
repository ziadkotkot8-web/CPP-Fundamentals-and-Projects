// this my first task to write for loop.
#include<iostream>
using namespace std;

int main(){
    int num,sum=0,sum_even=0,sum_odd=0;
    for(int i=1;i<=5;i++)
    {
        cout<<" enter the num:"<<i<<endl;
        cin>>num;
        sum+=num;
      
        if(num%2==0){
            sum_even+=num;
        }
      else
sum_odd+=num;
}
    cout<<"the sum is:"<<sum<<endl;
    cout<<" the sum_even is:"<<sum_even<<endl;
    cout<<" the sum_odd is:"<<sum_odd<<endl;
    ;
return 0;
}
