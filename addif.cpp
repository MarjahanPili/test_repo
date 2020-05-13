#include <iostream>
using namespace std;

int main()
{
    char op;
    //cout<< " Enter an operator +,-,*,/ : " ;
    //cin>> op;

    float firstNumber, secondNumber, result ;
    cout <<"calculate two numbers : " ;
    //cin >> firstNumber >> secondNumber;
    cin >> firstNumber >>op>> secondNumber;
    //cout<<firstNumber <<op<< secondNumber;

    cout<<" = ";

if(op == '+')
{
    result=firstNumber+secondNumber;
    cout<<result;
    //break;
}
else if(op == '-')
{
    result=firstNumber-secondNumber;
    cout<<result;
    //break;
}
else if(op == '*')
{
    result=firstNumber*secondNumber;
    cout<<result;
    //break;
}
else if(op == '/' )
{
    result=firstNumber/secondNumber;
    cout<<result;
    //break;
}

return 0;
}
