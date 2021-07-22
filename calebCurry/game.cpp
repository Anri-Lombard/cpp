#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

void print_vector(std::vector<int> vec) {
    std::cout << "Your guesses:\t";
    for (int i=0; i<vec.size(); i++) {
        std::cout << vec[i] << "\t";
    }
    std::cout << "\n";
}

void play_game(){
    std::vector<int> guesses;
    int count = 0;

    int random = rand() % 251;

    std::cout << "Game is being played\n";
    std::cout << "Guess a number: ";
    while(true) {
        int guess;
        std::cin >> guess;

        guesses.push_back(guess);

        if(guess == random) {
            std::cout << "You win!\n";
            break;
        } else if (guess < random) {
            std::cout << "Too low\n";
        } else {
            std::cout << "You high!\n";
        }
    }
    print_vector(guesses);
}

int main()
{
    srand(time(NULL));
    int choice;

    do {
        std::cout << "0. Quit" << std::endl << "1. Play Game\n";
        std::cin >> choice;

        switch(choice) {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
                play_game();
                break;
        }
    } while (choice != 0);

}
