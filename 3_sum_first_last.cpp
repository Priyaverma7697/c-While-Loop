//3.	Sum of first and last digit:
#include <iostream>
using namespace std;
int main(){
    int n;
   cout<<"enter any number: ";
   cin>>n;;
    int last_dgt;
    last_dgt=n%10;
    while(n>10){
        n=n/10;
    }
    cout<<n+last_dgt;
}
