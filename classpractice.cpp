#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    string name;
    int age;


};
int main()
{
    student s1;
    s1.name = "Atharva";
    s1.age = 19;
    cout << s1.name <<endl;
    cout << s1.age <<endl;

    return 0;

}
