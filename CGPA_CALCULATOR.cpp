#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float totalCredits = 0, totalGradePoints = 0;

    for(int i = 1; i <= n; i++) {
        float grade, credit;
        cout << "Course " << i << " Grade: ";
        cin >> grade;
        cout << "Course " << i << " Credit Hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}