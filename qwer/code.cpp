#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the first operand";
    cin>>a;
    cout<<"enter the second operand";
    cin>>b;
    char d;
    cout<<"enter the operator";
    cin>>d;
    switch(d)
    {
        case '+':c=a+b;
                 break;
        case '-':c=a-b;
                 break;
        case '*':c=a*b;
                 break;
        case '/':c=a/b;
                 break;
    }
    cout<<"The result is"<<c;
    return 0;
}
//good job

