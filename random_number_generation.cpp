#include<iostream>
#include<ctime>

using namespace std;
int main(){
    srand(time(NULL));
    int num=(rand() % 61)+1;
    cout<<num<<endl;

}