#include <iostream>
using namespace std;
int main(){

// while loop reverse number
int rv=0;
int num=1234;
while(num>0){
    rv=rv*10+num%10;
    num=num/10;
}
cout<<rv<<endl;

}