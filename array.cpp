#include <iostream>
using namespace std;
int main(){
    // one dimensional array
// int size;
// cout<<"enter the size of array : ";
// cin>>size;
// int a[size];
// cin>>a[0];
// cin>>a[1];
// cout<<a[0];
// cout<<a[1];
// // --------------------------
// any value update
// int a[]={1,2,3,4,5};
// a[2]=3000;
// cout<<a[2];
// ----------------------------------
 int row=2, col=2;
    // one dimensional array
// int a[]={1,2,3,4,5};
   // two dimensional array
int b[2][2]={{1,2},{3,4}};
// cout<<b[0][0];
// cout<<b[0][1]<<endl;
// cout<<b[1][0];
// cout<<b[1][1];
for(int r=0; r<row; ++r){
    for (int c=0; c<col; c++)
    {
        cin>>b[r][c];
        cout<<b[r][c];
    }
    
}
// -----------------------------------------





















}