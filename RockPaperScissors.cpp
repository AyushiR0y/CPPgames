#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    const int ROCK = 1, PAPER = 2, SCISSORS = 3;

    std::cout << "Let's play Rock-Paper-Scissors!\n";
    std::cout << "1 - Rock, 2 - Paper, 3 - Scissors\n";

    int playerChoice, computerChoice;

    std::cout << "Enter your choice (1-3): ";
    std::cin >> playerChoice;

    computerChoice = rand() % 3 + 1;

    std::cout << "Computer chose: " << computerChoice << '\n';

    if (playerChoice == computerChoice)
        std::cout << "It's a tie!\n";
    else if ((playerChoice == ROCK && computerChoice == SCISSORS) ||
             (playerChoice == PAPER && computerChoice == ROCK) ||
             (playerChoice == SCISSORS && computerChoice == PAPER))
        std::cout << "You win!\n";
    else
        std::cout << "Computer wins!\n";

    return 0;
}
