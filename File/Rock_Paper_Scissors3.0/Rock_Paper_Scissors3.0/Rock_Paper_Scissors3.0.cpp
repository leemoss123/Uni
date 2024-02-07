
#include <iostream>
#include <ctime>
#include <string>

// To get the player's answer
std::string getPlayerAnswer() {
    std::string player;
    std::cout << "Rock - Paper - Scissors, to the death!!!!\n";

    // Get the player's answer and store it
    do {
        std::cout << "Choose rock, paper, or scissors: ";
        std::cin >> player;

        // Convert to lowercase for case-insensitive comparison
        for (char& c : player) {
            c = std::tolower(c);
        }
    } while (player != "rock" && player != "paper" && player != "scissors" &&
        player != "r" && player != "p" && player != "s");

    return player;
}

// To get the computer's answer/ai
std::string getAIAnswer() {
    srand(static_cast<unsigned int>(time(0)));
    int num = rand() % 3;

    switch (num) {
    case 0: return "rock";
    case 1: return "paper";
    case 2: return "scissors";
    }

    return "rock"; // Default, this should not be reached
}

// To display the answer
void showAnswer(const std::string& answer) {
    std::cout << answer << std::endl;
}

// To display the winner and show the winner
void showWinner(const std::string& player, const std::string& ai) {
    if (player == ai) {
        std::cout << "It's a draw, you are lucky!\n";
    }
    else if ((player == "rock" && ai == "scissors") ||
        (player == "paper" && ai == "rock") ||
        (player == "scissors" && ai == "paper")) {
        std::cout << "You live!\n";
    }
    else {
        std::cout << "You die!\n";
    }
}

int main() {
    char playAgain;

    do {
        std::string player = getPlayerAnswer();
        std::cout << "Your answer: ";
        showAnswer(player);

        std::string ai = getAIAnswer();
        std::cout << "AI's answer: ";
        showAnswer(ai);

        showWinner(player, ai);

        std::cout << "Do you wish to test your fate again? (yes/no): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "your fate has been decided...\n";

    return 0;
}
