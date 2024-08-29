// It's Raining Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>
using namespace std;
list<string> buisnesses;

void listFormatter(string item) {
    list<string>::iterator itr = buisnesses.begin();
    //++itr;
    
    buisnesses.insert(itr, item);
}

int main()
{
    string buisness;
    bool wantContinue = true;
    cout << "Please enter buisness name!\n";
    getline(cin, buisness);

    cout << "\nYour Buisness is:\n";

    listFormatter(buisness);

    for (string x : buisnesses) {
        std::cout << x << "\n";
    }

    cout << "\n";

    while (wantContinue) {
        string yayNay = "";
        cout << "Would you like to continue entering buisnesses?\n";
        getline(cin, yayNay);

        cout << "\n";
        
        if (yayNay != "y"){
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
