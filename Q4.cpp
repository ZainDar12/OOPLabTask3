#include <iostream>
using namespace std;

class Cricketer {

    string fullName;
    int kitNumber;
    double performanceAvg;

public:
    Cricketer(string name, int number, double avg) {
        fullName = name;
        kitNumber = number;
        performanceAvg = avg;
    }

    Cricketer& enhanceForm(int runs) {
        performanceAvg += runs * 0.1;
        return *this;
    }

    Cricketer& playGame(int scoredRuns) {
        performanceAvg = (performanceAvg + scoredRuns) / 2.0;
        return *this;
    }

    void printDetails() {
        cout << "Player: " << fullName << endl
             << "Kit Number: " << kitNumber << endl
             << "Current Average: " << performanceAvg << endl
             << "Consistency level: better than random power outages ⚡\n" << endl;
    }
};

int main() {
    Cricketer p1("Fakhar Zaman", 39, 41.7);
    Cricketer p2("Imam-ul-Haq", 9, 43.2);
    Cricketer p3("Abdullah Shafique", 70, 36.8);

    p1.playGame(78).enhanceForm(18);
    p2.playGame(55).enhanceForm(12).enhanceForm(8);
    p3.enhanceForm(22).playGame(64);

    p1.printDetails();
    p2.printDetails();
    p3.printDetails();

    return 0;
}
