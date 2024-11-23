//2.	REVERSE NUMBER 
#include <iostream>
using namespace std;
int main(){
    int n=1234;

    int rv=0;
    int d1;
    while (n>0){
     rv=rv*10+n%10;
     n=n/10;
    }
    cout<<rv;
}
