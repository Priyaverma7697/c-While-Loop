#include <iostream>
using namespace std;
int main(){
// Pallindrom 
// (number aage or piche se same hona chahiye)
int rv=0;
int digit=0;
int number=12321;
int new_no=number;
while(number!=0){
    digit=number%10;
    rv=rv*10+digit;
    number=number/10;
}
if(new_no==rv){
    cout<<"Pallindrome";
}
else{
    cout<<"Not";
}




}
