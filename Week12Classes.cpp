#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

class robot {
public:
    string name;
    string phrase;
    int charge;

    //constructor, needs same name of class

    robot(string givenName, string givenPhrase, int givenCharge) {
        // assigns shit
        name = givenName;
        phrase = givenPhrase; 
        charge = givenCharge; 
        
        cout << "A new robot has been built\n";
    }

    robot(){
         cout << "Using Base contuctions\n";
        cout << "Bruh, fix me\n";
    }

    void SayHello () {
        cout << "My anme is " << name << " and my chagre is " << charge << ".\n";
        cout << phrase <<  "\n";
    }


 };




int main() {

    robot bobbert;
    bobbert.name = "Bob the Rob";
    bobbert.charge = 5;

    cout << "The is Bob, he is a Rob\n";
    cout << "Bob is currently at a charge off " << bobbert.charge << "\n";

    robot nob("Robert", "Ill do things", 25);
    cout << "New bot who this?\n";
    cout << "He is named \n";
    nob.SayHello(); 


    return 0;
}