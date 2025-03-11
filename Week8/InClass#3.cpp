// Riley Seufert Coding 1 week 6
// InClass

#include <iostream>  
#include <string>
#include <cstdlib> // c standard
#include <ctime>  

using namespace std; 

// need thing here for input

int main() {

    // Have program get a number between 1-10
    srand(time(0));

    bool debug = true;

    int correctNumber = rand() % 10 + 1;

    // start while loop
    while (true)
    {

    if (debug) cout << "The number is " << correctNumber << ".\n";
        
    // ask player for a number
    cout << "Guess a number between 1 and 10!\n";
    string input = "";
    getline(cin, input);
    int playerGuess = 0;

    try { playerGuess = stoi(input); 
    }
    catch (invalid_argument) {
        cout << "Thats not a number, try again \n";
        continue;
    }
    // See if number is correct, higher or lower then the number

    if (input == "quit") {
        cout << "Oh okay...bye\n";
        break;
    }

   if (playerGuess == correctNumber) {
        cout << "That the right one! GAME OVER\n";
        break;
    }

    if (playerGuess > correctNumber) {
        cout << "Try a lower number\n";
    }

    else {
        cout << "Try a higher number\n";
    }
    // Tell the player the result of the prior test
    // run again, till correct
    // End while loop
    
    }   
} 
