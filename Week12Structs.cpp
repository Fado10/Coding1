#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

enum enemyType {GRUNT, MINIBOSS, BOSS};

// POD 

struct address {
    string streetName;
    int streetNumber;
    string city;
    string state;
    int zipCode;
};

struct enemy {
    // variables public default
    int health = 10;
    int damage = 4;
    string name = "Pal The Lad"; 
    enemyType type = GRUNT;

};

struct employee {
    int Id = 0;
    string name;
    int age;
    address addr; 
    float wage;
};

string AddressInOne(address addr) {
    string oneLine;
    oneLine += addr.streetNumber;
    oneLine += " " + addr.streetName;
    return oneLine;
}

int main () {
    
    enemy brandon;
    brandon.health = 12;
    brandon.name = "Brandon The Evil";
    brandon.type = GRUNT; 

    cout << "This is " << brandon.name << "! his health is" << brandon.health << "\n"; 
 
    enemy tom;
    tom.damage = 6; 
    tom.name = "Tom The Wicked";
    tom.type = MINIBOSS; 

    cout << tom.name << " Just punched " << brandon.name << "!\n";
    brandon.health -= tom.damage;

    if(brandon.health < 0) {
        cout << brandon.name << " is dead!\n";
    } else {
        cout << brandon.name << " has " << brandon.health << " health!\n";
    }

    vector<enemy> enemies;

    enemies.push_back(brandon);
    enemies.push_back(tom);

    cout << "State of enmies.\n";
    for(int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
        cout << "Their   damage is " << enemies[i].damage << " and their type is";
        switch (enemies[i].type)
        {
        case GRUNT:
            cout << "grunt";
            break;
        case MINIBOSS:
            cout << "miniboss";
            break;
        case BOSS:
            cout << "BOSS";
            break;
        default:
        cout << "unknown";
            break;
        }

    cout << "\n";


    return 0; 
    }

    employee bob;
    bob.Id = 2456;
    bob.name = "Bob The Glob";
    bob.age = 29;
    bob.wage = 7.25f;
    bob.addr.streetNumber = 1234;
    bob.addr.streetName  = "Bob House";
    bob.addr.city = "Boblantis";
    bob.addr.state = "New Bob";

}