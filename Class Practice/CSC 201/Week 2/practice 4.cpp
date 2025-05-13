#include <iostream>
using namespace std;
  main()
{
    int a = 5;
    int b = 6;

    cout << "a = " << a << "b =" << b << endl;
    if (a == b)
    {
        cout << "( a == b) a is equal to b" << endl;
    }
    else
    {
         cout << "( a == b) a is not equal to b" << endl;
    }

    if (a < b)
    {
         cout << "( a < b) a is less than b" << endl;
    }
    else
    {
         cout << "( a < b) a is not less than b" << endl;
    }

    if (a > b)
    {
         cout << "( a > b) a is greater than b" << endl;
    }
    else
    {
         cout << "( a > b) a is not greater than b" << endl;
    }

    if (a <= b)
    {
         cout << "( a <= b) a is less than \ or equal to b" << endl;
    }
    else
    {
          cout << "( a <= b) a is not less than \ or equal to b" << endl;
    }
    
    if (a >= b)
    {
        cout << "( a >= b) a is more than \ or equal to b" << endl;
    }
    else
    {
        cout << "( a <= b) a is not more than \ or equal to b" << endl;
    }
}