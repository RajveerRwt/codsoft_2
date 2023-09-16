//a simple calculator using switch in c++

/* user have to enter two operands  then select the operator among (+,*,/,-)
you get your result
*/


#include <iostream>
using namespace std;

int main()

{
    cout<<"how to use this calculator:: \n";
    cout<<"step 1: enter first operand \n";
    cout<<"step 2: enter second operand \n";
    cout<<"step 3: enter operator \n\n";

    char op;
    float a,b;
    int i=1;

    while (i=1)
    {
        cout<<"enter first operand:";
        cin>>a;


        cout<<"enter second operand :";
        cin>>b;

        cout<<"enter operator( +,-,*,/):";
        cin>>op;

        cout<<endl;


        switch (op) 
      {
        case '+':
        cout<<a+b;
        break;
    
        case '-':   
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;
       
        case '/':
        cout<<a/b;
        break;

        default:
        cout<<"error enter only among +,*,-,/";

      }
      cout<<endl;

    }

    
    return 0;
}


   
