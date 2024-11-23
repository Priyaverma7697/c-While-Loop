#include <iostream>
using namespace std;
int main(){
int number= 1234;
int rv=0;
int new_no=0;
int digit=0;
while (number>0)
{
    rv=rv*10+number%10;
    number=number/10;
}
new_no=rv;
while (new_no!=0)
{
    digit=new_no%10;
    new_no=new_no/10;
    switch (digit)
    {
    case 1: cout<<"one ";
        break;
    case 2: cout<<"two ";
    break;
    case 3: cout<<"three ";
    break;
    case 4: cout<<"four ";
    break;
    case 5: cout<<"five ";
    break;
    case 6: cout<<"six ";
    break;
    case 7: cout<<"seven ";
    break;
    case 8: cout<<"eight ";
    break;
    case 9: cout<<"nine ";
    break;
    case 0: cout<<"zero ";
    break;
    default:
        break;
    }
}


}
