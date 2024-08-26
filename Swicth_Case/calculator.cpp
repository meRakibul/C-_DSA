#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Two Number" << endl;
    cin >> a >> b;
    char op;
    cout << "ENTER A OPERATOR" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "ADDISION IS:";
        cout << a + b << endl;

        break;
    case '-':
        cout << "SUBSTRACTION IS:";
        cout << a - b << endl;

        break;
    case '*':
        cout << "MULTIPLICATION IS:";
        cout << a * b << endl;

        break;
    case '/':
        cout << "DIVISION IS:";
        cout << a / b << endl;
        break;

    default:
        cout << "ENTERED ANOTHER OPERATOR:";
        break;
    }

    return 0;
}