#include <iostream>
#include <string>


using namespace std;


double a; //first number
double b; // second number
string c; // action
double result; //result
char x; // exit


int
main ()
{
    
    do
    {
    
        cout <<
        "Hi!Choose one of the actions: sum/min/div/mult" << endl;
        cin >> c;
        if (c == "sum"){
            
            cout << "Enter your first number:" << endl;
            cin >> a;
            cout << "Enter the second one:" << endl;
            cin >> b;
            result = a + b;
            cout << "Your result is: " << result << endl;    
        
        }
        
        if (c == "min")
        {
    
            cout << "Enter your first number:" << endl;
            cin >> a;
            cout << "Enter the second one:" << endl;
            cin >> b;
            result = a - b;
            cout << "Your result is: " << result << endl;
    
        }
    
        if (c == "div")
        {
    
            cout << "Enter your first number:" << endl;
            cin >> a;
            cout << "Enter the second one:" << endl;
            cin >> b;
            result = a / b;
            cout << "Your result is: " << result << endl;
    
        }
    
        if (c == "mult")
        {
    
            cout << "Enter your first number:" << endl;
            cin >> a;
            cout << "Enter the second one:" << endl;
            cin >> b;
            result = a * b;
            cout << "Your result is: " << result << endl;
    
        }
        
        cout << "Enter 'X' to exit" <<endl;
        cin >> x;
        
    }
    
    while (x != 'X');

    return 0;
}
