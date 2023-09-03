// Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>
using namespace std;
int main(){

int x=3,y=4,null;

null=x;
x=y;
y=null;

cout<<"x="<<x<<endl;
cout<<"y="<<y;

return 0;
}