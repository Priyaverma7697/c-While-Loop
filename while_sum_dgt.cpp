//sum of first and last digit
#include <iostream>
using namespace std;
int main(){
    int num=1234;
    int last_dgt;
    last_dgt=num%10;
    while (num>10)
    {
        num=num/10;
    }
    cout<<last_dgt+num;
}
