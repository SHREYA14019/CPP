#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter the value of side a: ";
    cin>>a;
    cout<<"Enter the value of side b: ";
    cin>>b;
    c=sqrt(a*a+b*b);
    cout<<"The value of hypotenuse c is: "<<c<<endl;
}