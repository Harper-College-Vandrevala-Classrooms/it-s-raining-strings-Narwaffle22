// It's Raining Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
list<string> buisnesses;
list<string> correctResponges = { "yes", "y" };
void listFormatter(string item) {
    //adds buisness
    buisnesses.push_back(item);

    //formats the list in alphabetical
    buisnesses.sort();

}

bool strcmp_case_insensitive(string str1) {
    //instantiating the strings
    string firstString = "";
    list<string>::iterator itd = correctResponges.begin();

    //defing the strings, removing the spaces, and lowercasing everything for comparison
    for (char& c : str1) {
        if (c != 32) {
            firstString += tolower(c);
        }
    }

    //compare and return
    for (int i = 0; i < correctResponges.size(); i++) {
        if (firstString.compare(*itd) == 0)
            return true;
        ++itd;
    }
    return false;
    
        
}

int main()
{
    string buisness;
    bool wantContinue = true;
    cout << "Please enter buisness name!\n";
    getline(cin, buisness);

    cout << "\nYour Buisness is:\n";

    buisnesses.push_back(buisness);

    for (string x : buisnesses) {
        std::cout << x << "\n";
    }

    cout << "\n";

    while (wantContinue) {
        string yayNay = "";
        cout << "Would you like to continue entering buisnesses?\n";
        getline(cin, yayNay);

        cout << "\n";
        
        if (!strcmp_case_insensitive(yayNay)){
            cout << "thanks for your buisnesses";
            wantContinue = false;
        }
        else {
            buisness = "";
            cout << "Please enter buisness name!\n";
            getline(cin, buisness);

            cout << "\nYour Buisnesses are:\n";

            listFormatter(buisness);

            for (string x : buisnesses) {
                std::cout << x << "\n";
            }

            cout << "\n";
        }

        
    }
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
