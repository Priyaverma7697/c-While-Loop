#include <iostream>
using namespace std;
int main(){
int num=153, n1=0, sum=0, new_no=num;
while (num!=0)
{
    n1=num%10;
    sum=sum+(n1*n1*n1);
    num=num/10;
}
cout<<sum;
if(new_no=sum){
    cout<<"armstrong number";
}
else{
    cout<<"not armstrong number";
}
}
