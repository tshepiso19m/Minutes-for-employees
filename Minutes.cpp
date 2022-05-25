// Minutes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
using namespace std;

int main() {
    //declaring variable
    int MonHrs, TueHrs, WedHrs, MonMins, TueMins, WedMins, totalhours, totalminutes, salary, extraminutes, extrahours;


    //prompts the user to enter their Hrs and Mins for Mon,Tues and Wed
    cout << " Enter the number of hours and minutes which you worked on Monday " << endl;
    cin >> MonHrs >> MonMins;

    cout << " Enter the number of hours and minutes which you worked on Tuesday " << endl;
    cin >> TueHrs >> TueMins;

    cout << " Enter the number of hours and minutes which you worked on Wednesday " << endl;
    cin >> WedHrs >> WedMins;

    totalhours = MonHrs + TueHrs + WedHrs;
    totalminutes = MonMins + TueMins + WedMins;
    extrahours = totalminutes / 60;
    totalhours += extrahours;
    extraminutes = totalminutes % 60;

    if (totalhours > 40) {

        salary = ((40 * 200) + (totalhours - 40) * 250);
    }
    else {

        salary = totalhours * 200;



    }

    cout << "You worked for " << totalhours << " hours and " << extraminutes << " minutes and your salary is R" << salary;

    return 0;








}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
