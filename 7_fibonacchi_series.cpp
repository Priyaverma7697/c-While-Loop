#include <iostream>
using namespace std;
int main(){
// Fibonacchi Series (0,1,1,2,3,5,8)
int next=0, t1=0, t2=1, i=0;
while(i<=5){
    if(i==0){
        cout<<i;
        i++;
        continue;
    }
    if(i==1){
        cout<<i;
        ++i;
        continue;
    }
    next=t1+t2;
    t1=t2;
    t2=next;
    cout<<next;
    i++;
}

}
