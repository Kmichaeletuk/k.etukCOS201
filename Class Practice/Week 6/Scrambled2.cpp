#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int main() {
    std::string words[] = {"apple", "banana", "cherry"};
    const int numWords = 3;
    int score = 0;

    std::srand(static_cast<unsigned int>(std::time(0))); // Seed random number generator

    for (int i = 0; i < numWords; ++i) {
        std::string scrambledWord = words[i];
        std::random_shuffle(scrambledWord.begin(), scrambledWord.end());

        std::cout << "Unscramble this word: " << scrambledWord << std::endl;
        std::string userGuess;
        std::cin >> userGuess;

        if (userGuess == words[i]) {
            std::cout << "Correct!" << std::endl;
            ++score;
        } else {
            std::cout << "Wrong! The correct word was: " << words[i] << std::endl;
        }
    }

    std::cout << "You unscrambled " << score << " out of " << numWords << " words correctly." << std::endl;

    return 0;
}
