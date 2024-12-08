#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a ="abcd";
    string b ="ef";
    cout<< a.size()<<" "<< b.size()<<endl;
    string c= a + b;
    cout<< c <<endl;
    char i = a.at(0);
    a.at(0)= b.at(0);
    b.at(0)= i; 
    cout<<a + " " + b<<endl;
    return 0;
     








}