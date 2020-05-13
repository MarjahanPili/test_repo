#include<iostream>
using namespace std;

string wordReverse(string str)
{
int i = str.length() - 1;  //lenth = 11
int start, end = i + 1; //end = 12
string result = "";

while(i >= 0)
{
if(str[i] == ' ')           //
{
start = i + 1;
while(start != end)
result += str[start++];

result += ' ';

end = i;
}
i--;
}
start = 0;
while(start != end)			//start =0 , end =12, i=10
result += str[start++];			// result = K
return result;
}
// Driver code

int main()
{
string str = "I AM A GEEK";

cout << wordReverse(str);

return 0;
}
