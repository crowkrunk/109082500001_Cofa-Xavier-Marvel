#include <iostream>
using namespace std;

const int MAX_STUDENTS = 10;

struct Student {
    string name;
    string Nim;
    double uts;
    double uas;
    double Tugas;
    double finalGrade;
};

double calculateFinalGrade(double uts, double uas, double Tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * Tugas;
}

void displayStudents(const Student students[], int n) {
    cout << "------------------------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Name\t: "
             << students[i].name << "\n"
             << "NIM\t: "
             << students[i].Nim << "\n"
             << "UTS\t: "
             << students[i].uts << "\n"
             << "UAS\t: "
             << students[i].uas << "\n"
             << "Tugas\t: "
             << students[i].Tugas << "\n"
             << "Nilai Akhir\t: "
             << students[i].finalGrade << "\n";
        cout << "------------------------------------------------------------------------\n";
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int n = 0;
    char again;

    do {
        if (n >= MAX_STUDENTS) {
            cout << "\nMaximum of " << MAX_STUDENTS << " students reached.\n";
            break;
        }

        cout << "\n--- Input data for student #" << (n + 1) << " ---\n";
        cout << "Name\t: ";
        getline(cin, students[n].name);

        cout << "NIM\t: ";
        getline(cin, students[n].Nim);

        cout << "UTS\t: ";
        cin >> students[n].uts;
        cout << "UAS\t: ";
        cin >> students[n].uas;
        cout << "Tugas\t: ";
        cin >> students[n].Tugas;

        students[n].finalGrade = calculateFinalGrade(students[n].uts, students[n].uas, students[n].Tugas);
        n++;

        cout << "Add another student? (y/n): ";
        cin >> again;
        cin.ignore();
    } while (again == 'y' || again == 'Y');

    displayStudents(students, n);

    return 0;
}