#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretnumber = rand() % 100 + 1;
    int guessthenumber, attempt = 0;

    std::cout << "Welcome to Guess the Number!\n";

    do {
        std::cout << "Enter your guess (1-100): ";
        std::cin >> guessthenumber;
        ++attempt;

        if (guessthenumber > secretnumber)
            std::cout << "Too high! Try again.\n";
        else if (guessthenumber < secretnumber)
            std::cout << "Too low! Try again.\n";
        else
            std::cout << "Congratulations! You guessed the number in " << attempt << " attempts!\n";
    } while (guessthenumber != secretnumber);

    return 0;
}
