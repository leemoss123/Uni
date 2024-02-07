#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Rolling the dice randomly
int dicerolling() {
    return rand() % 1000 + 1;
}

int main() {
    
    int score = 0; //adds numbers for a scoring system
    
    
    // Random number generator
    srand(static_cast<unsigned int>(time(0)));

    cout << "This is the Higher or Lower Game of Death" << endl;

    // First roll
    int pastroll = dicerolling();
    cout << "Is this number higher or lower? Be careful, your life is on the line...  " << pastroll << endl;
    
    
    string guess;

    do {
        cout << "Will the next roll be higher or lower than the last one?  ";
        cin >> guess;

        // Roll the dice
        int currentroll = dicerolling();
        cout << "Next roll: " << currentroll << endl;

        // Checking the result
        if ((guess == "higher" || guess == "h") && currentroll > pastroll) {
            cout << "YOU LIVE!!! +1 point" << endl;
            score++;
        }
        else if ((guess == "lower" || guess == "l") && currentroll < pastroll) {
            cout << "YOU LIVE!!!" << endl;
        }
        else {
            cout << "YOU DIE...." << endl; // if you fail you die
            
            break;
        }

        //Displaying current score
        cout << "current score: " << score << endl;


        // Set the current roll as the previous roll for the next turn in the game
        pastroll = currentroll;

        // Ask if the player wants to keep going
        cout << "Do you wish to keep testing your fate? (Enter 'yes' or 'no' or even 'y' or 'n') ";
        cin >> guess;

    } while (guess == "yes" || guess == "Yes" || guess == "y" || guess == "Y");
    //shows the score and ends the game
    cout << "final score: " << score << endl;
    cout << "It looks like your fate has been decided." << endl;
    
    return 0;
}

