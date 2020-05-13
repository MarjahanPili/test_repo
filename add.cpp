#include <iostream>
using namespace std;

int main()
{
    char op;
    //cout<< " Enter an operator +,-,*,/ : " ;
    //cin>> op;

    float firstNumber, secondNumber ;
    cout <<"calculate two numbers : " ;
    //cin >> firstNumber >> secondNumber;
    cin >> firstNumber >>op>> secondNumber;
    cout<<firstNumber <<op<< secondNumber;
    cout<<" = ";


  switch(op)
  {
      case '+':
      cout <<firstNumber+secondNumber;
      break;

        case '-':
      cout <<firstNumber-secondNumber;
      break;

        case '*':
      cout <<firstNumber*secondNumber;
      break;

        case '/':
      cout <<firstNumber/secondNumber;
      break;

        default :
            cout<<" The operator is not correct:";

}
return 0;
}
