#include <iostream>
using namespace std;

namespace swcase
{
    int add()
    {
        int a, b, add;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        add = a + b;
        cout << "Addition = " << add << endl;
        return 0;
    }

    int sub()
    {
        int a, b, sub;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        sub = a - b;
        cout << "Subtraction = " << sub << endl;
        return 0;
    }
}

int main()
{
    swcase::add();
    swcase::sub();

    return 0;
}
