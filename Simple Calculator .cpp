#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    int num1 , num2;
    char op;
    cout<<"Hello! ... CALCULATOR ! \n" ;
    cout<<"Enter Two Numbers \n";
    cin>>num1 >>op>>num2;
    switch (op)
    {
    case '+':
    cout<<num1 <<"+"<<num2<<"="<<num1+num2<<endl;
    break;
    
    case '-':
      cout<<num1 <<"-"<<num2<<"="<<num1-num2<<endl;
    break;
    
    case'*':
      cout<<num1 <<"*"<<num2<<"="<<num1*num2<<endl;
    break;
    
    case'/':
      cout<<num1 <<"/"<<num2<<"="<<num1/num2<<endl;
    break;
    default:
    cout<<"Math Error .... PLZ Try Agin \n";
    }
    
   
    return 0;
}