#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int a,b,c,d;
    cout << "on a l'expression suivante : a*(x^2) + b*x + c . enter number a : ";
    cin >> a ;
    cout << "enter number b : ";
    cin >> b;
    cout << "enter number c : ";
    cin >> c;
    d = (b*b) + (-4*a*c);
    if (a==0 && b!=0)
    {cout << "the solution is : -c/b";
    }else if (a ==0 && b==0 && c==0)
    {
       cout << "solutions are any number x !";
    }else if (a ==0 && b==0 && c!=0)
    {cout << "there is no solutions for the equasion !";
    }
    else if (a!=0 && b==0)
    {cout << "the solution is : rac(-c/a)";
    }
    else if (d < 0)
    {
        cout << "there is no solutions for the equasion !";
    }else if (d==0)
    {
        cout << "there is only 1 solution and it is : (-b-rac(d)/2a)";
    }else{
        cout << "there is 2 solutions , the 1st one is : (-b-rac(d)/2a) \nand the 2nd one is : (-b+rac(d)/2a)";
    }
    
    
    
    
    

    return 0;
}