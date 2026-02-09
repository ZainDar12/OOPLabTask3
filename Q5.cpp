#include <iostream>
using namespace std;

class SoccerStar {

    string nameTag, fieldRole;
    int totalGoals;

public:
    SoccerStar() {
        nameTag = "Anonymous";
        fieldRole = "Substitute";
        totalGoals = 0;
    }
    SoccerStar(const SoccerStar &s) {
        nameTag = s.nameTag;
        fieldRole = s.fieldRole;
        totalGoals = s.totalGoals;
    }
    SoccerStar(string n, string role = "Defender", int goals = 5) {
        nameTag = n;
        fieldRole = role;
        totalGoals = goals;
    }
    void addGoals(int g) {
        totalGoals += g;
    }
    void showProfile() {
        cout << "Name: " << nameTag << endl
             << "Role: " << fieldRole << endl
             << "Goals Scored: " << totalGoals << endl
             << "Scouts are watching 👀\n" << endl;
    }
};
int main() {
    SoccerStar s1;
    SoccerStar s2("Erling Haaland", "Striker", 240);
    SoccerStar s3 = s2;
    SoccerStar s4("Luka Modric");
    s1.addGoals(3);
    s1.showProfile();
    s3.showProfile();
    s4.showProfile();
    return 0;
}
