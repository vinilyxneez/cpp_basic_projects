#include <iostream>

using namespace std ;
int main (){
    //making a calculator
    int a,b,d;
    char c;
    cout << "*********************CALCULATOR*********************\n";
    cout << "enter the first number : ";
    cin >> a;
    cout << "enter the second number : ";
    cin >> b;
    cout << "what operation do you want to perform ? ('+' OR '-' OR '*' OR '/' OR '%') : ";
    cin >> c ;
    while (c!='+' && c!='-' && c!='*' && c!='/' && c!='%' )
    {cout << "please enter one of the following operators : ( '+' , '-' , '*' , '/' , '%' ) :  ";
    cin >> c;
   }
    if (c=='+')
    {d=a+b;
        cout << a << " + " << b << " = " << d;
    }else if (c=='-')
    {d=a-b;
    cout << a << " - " << b << " = " << d;
    }else if (c=='*')
    {d=a*b;
    cout << a << " * " << b << " = " << d;
    }
    else if (c=='/')
    {d=a/b;
    cout << a << " / " << b << " = " << d;
    }
    else if (c=='%')
    {d=a+b;
    cout << a << " % " << b << " = " << d;
    }
    return 0;
    
    
}
