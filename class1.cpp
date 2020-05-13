#include<iostream>
#include<string.h>
using namespace std;

class LearnClass

  {
 public:
     LearnClass(string a)
     {
         setName(a);
         //CONSTRUCTOR
         //cout<<"Learning c++";
     }
    void setName(string x)
    {
        name= x;
    }
    string getName()
    {
        return name;
    }
 private:
    string name;

 };

int main ()
{
    LearnClass l2 ("Learn Constructor");
    cout<< l2.getName();
 //LearnClass l1;
 //l1.setName("MY NAME IS PILI");
 //cout<< l1.getName();
    return 0;
}
