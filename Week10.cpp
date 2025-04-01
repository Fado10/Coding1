#include <iostream>  
#include <string>
#include <cstdlib> 
#include <ctime>  

using namespace std; 

// global variables here
int currentShirtSizeElement = 0;

// declare and define the new function 
// The function must be declared to be used
// It can be defined later in the code
// its "void" so it returns nothing
void sayHello(){
    cout << "Hello!\n";
}

void sayGoodBye(){
    cout << "Good Bye...\n";
}

// add numbers n stuff
// 
void add(int number1 = 2, int number2 = 0) {
    cout << "The sum of number 1 and number 2 is ";
    cout << "The sum of " << number1 << " and " << number2 << " is ";
    cout << number1 + number2 << endl;
}

// overload the add function
void add(float firstNum, float secoundNum) {
    cout << firstNum << " plus " << secoundNum << " equils ";
    cout << firstNum + secoundNum << endl;
}

void add(string firstWord, string secoundWord) {
    cout << firstWord << " plus " << secoundWord << " equils ";
    cout << firstWord + secoundWord << endl;
}

// return types
bool ankYN(string question = "y/n?") {
    // in a dowhile loop
    // ask question
        // if y then return true
        // if n return false
        // else, loop again

    do {
         cout << question << endl;
         string input;
         getline(cin, input);

        if (input == "y") {
            return true;
        }

        else if (input == "n") {
            return false;
        }

        else {
            cout << "Please type y or n. \n";
        }

    } while(true);
}

// show array 
// doesnt show anything
// accepts one parameter as a pointer

void show(string* array, int arraySize) {
    cout << "Here are the contents of your array:\n";
    for(int i = 0; i < arraySize; i++) {
        cout << array[i] << endl; 
    }
}

// If you can dont do global
string professor = "Brian";



// make funtion thta accpets a point to an arrat

void addShirtSize(string* array) {
    string input;
    while (true) {
        if(currentShirtSizeElement > 10) {
            cout << "That all the shirt sizes you can have\n";
            break;
        }

        cout << "Please add shirt size.\n";
        cout << "or type 'done' to stop\n";
        getline(cin, input);

        if(input == "done") {
            break;
        }

    }
    array[currentShirtSizeElement++] = input;
}

// in class HW?
// add a while loop to add shirt size
    // Or fill array



int main() {

    // Set up
    string shirtSizes[10];
    // int currentSize = 0;
    addShirtSize(shirtSizes);
    show(shirtSizes, currentShirtSizeElement);

    // call sayHello
    sayHello();

    string playerName = "You";
    // string setup
    string names[3];
    // Set the array 
    names[0] = "Mickey";
    names[1] = "Donald";
    names[2] = "Goofy";


    show(names, 3);
    // set start number
    int counter = 0; 
   
    // say the names (cout)
    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }

    sayGoodBye();

    add ();
    add(23);
    add (23,2);
    add (22.2f, 23.5f);

    //if(askYN("Do you like pizza?")) {
   //     cout << "Lets get some then!\n";
    // }
   // else {
   //     cout << " Die..\n";
    // }
}

