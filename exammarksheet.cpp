#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    string semester;

    string subject[5];
    float marks[5];

    float total;
    float percentage;
    string grade;
    string result;

public:

    void inputDetails()
    {
        cout << "=============================================\n";
        cout << "           SEMESTER MARK SHEET\n";
        cout << "=============================================\n\n";

        cout << "Enter Student Name : ";
        getline(cin >> ws, name);

        cout << "Enter Roll Number  : ";
        cin >> rollNo;

        cout << "Enter Semester     : ";
        cin >> semester;

        // Subject names
        subject[0] = "Mathematics";
        subject[1] = "Programming in C++";
        subject[2] = "Data Structures";
        subject[3] = "Computer Networks";
        subject[4] = "Database Management";

        cout << "\nEnter marks for each subject (out of 100):\n";

        for (int i = 0; i < 5; i++)
        {
            cout << subject[i] << " : ";
            cin >> marks[i];
        }
    }

    void calculateResult()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = total / 5;

        // Check pass/fail
        result = "PASS";

        for (int i = 0; i < 5; i++)
        {
            if (marks[i] < 40)
            {
                result = "FAIL";
                break;
            }
        }

        // Calculate grade
        if (result == "FAIL")
        {
            grade = "F";
        }
        else if (percentage >= 90)
        {
            grade = "A+";
        }
        else if (percentage >= 80)
        {
            grade = "A";
        }
        else if (percentage >= 70)
        {
            grade = "B+";
        }
        else if (percentage >= 60)
        {
            grade = "B";
        }
        else if (percentage >= 50)
        {
            grade = "C";
        }
        else
        {
            grade = "D";
        }
    }

    void displayMarkSheet() const
    {
        cout << "\n\n";
        cout << "============================================================\n";
        cout << "                    SEMESTER MARK SHEET\n";
        cout << "============================================================\n";

        cout << "Student Name : " << name << endl;
        cout << "Roll Number  : " << rollNo << endl;
        cout << "Semester     : " << semester << endl;

        cout << "------------------------------------------------------------\n";

        cout << left
             << setw(5)  << "No."
             << setw(30) << "Subject"
             << right
             << setw(15) << "Marks"
             << endl;

        cout << "------------------------------------------------------------\n";

        for (int i = 0; i < 5; i++)
        {
            cout << left
                 << setw(5)  << i + 1
                 << setw(30) << subject[i]
                 << right
                 << setw(15) << marks[i]
                 << endl;
        }

        cout << "------------------------------------------------------------\n";

        cout << left << setw(35) << "Total Marks"
             << right << setw(15) << total << " / 500" << endl;

        cout << left << setw(35) << "Percentage"
             << right << setw(15) << fixed << setprecision(2)
             << percentage << "%" << endl;

        cout << left << setw(35) << "Grade"
             << right << setw(15) << grade << endl;

        cout << left << setw(35) << "Result"
             << right << setw(15) << result << endl;

        cout << "============================================================\n";
        cout << "                 END OF MARK SHEET\n";
        cout << "============================================================\n";
    }
};

int main()
{
    Student s;

    s.inputDetails();
    s.calculateResult();
    s.displayMarkSheet();

    return 0;
}