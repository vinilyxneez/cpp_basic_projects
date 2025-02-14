#include<iostream>
using namespace std ;
int main (){
    int a,b,c;
    int n;
    cout << "enter the current year : ";
    cin >> c;
    cout << "enter the current month : ";
    cin >> b;
    cout << "enter the current day : ";
    cin >> a;
    if (b!=12 && (b%2)==0 ){  
        if (b==2 && a==29)
        {cout << "tommoro's date is : 01/03/"<<c;
        }
        else if (a==30)
        {a=1;b++;
            cout << "tommoro's date is : " << a <<"/"<<b<<"/"<<c;
        }else{
            a++;
            cout << "tommoro's date is : " << a <<"/"<<b<<"/"<<c;
        }
    }
    else if (b!=12 && (b%2)!=0){ 
        if (a==31)
        {a=1;b++;
            cout << "tommoro's date is : " << a <<"/"<<b<<"/"<<c;
        }else{
            a++;
            cout << "tommoro's date is : " << a <<"/"<<b<<"/"<<c;
        }
    }
    else if (b==12)
    {if (a==31)
    {a=1;b=1; c++;
        cout << "tommoro's date is : 01/01/" << c;
    }else{a++;cout << "tommoro's date is : " << a << "/12/" << c;
    }
    }


    return 0;
}