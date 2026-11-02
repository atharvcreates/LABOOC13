
#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    Distance(int f, int i)
    {
        this->feet = 100;
        this->inch = 500;
    }

    void operator+()
    {
        feet--;
        inch--;

        cout << "\nFeet & Inches (Decrement): "
             << feet << " " << inch << endl;
    }
    void operator++()
    {
        feet--;
        inch--;

        cout << "\nFeet & Inches (Decrement): "
             << feet << " " << inch << endl;
    }
};

int main()
{
    Distance d1(8, 9);

    cout << "Value before minus: "
         << d1.feet << " " << d1.inch << endl;

    +d1;

    cout << "Value after minus: "
         << d1.feet << " " << d1.inch << endl;

    return 0;
}
