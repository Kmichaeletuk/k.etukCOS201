#include <iostream>
#include <string>

int main() {
    // Questions and options
    std::string questions[3] = {
        "What is the capital of France?",
        "Which language is primarily spoken in Brazil?",
        "Who wrote 'To Kill a Mockingbird'?"
    };

    std::string options[3][4] = {
        {"1. Berlin", "2. Madrid", "3. Paris", "4. Rome"},
        {"1. Spanish", "2. English", "3. Portuguese", "4. French"},
        {"1. J.K. Rowling", "2. Harper Lee", "3. Mark Twain", "4. Charles Dickens"}
    };

    int correctAnswers[3] = {3, 3, 2}; // Index of correct options (1-based)

    int userAnswer;
    int score = 0;

    // Loop through each question
    for (int i = 0; i < 3; ++i) {
        std::cout << questions[i] << std::endl;
        for (int j = 0; j < 4; ++j) {
            std::cout << options[i][j] << std::endl;
        }

        std::cout << "Your answer: ";
        std::cin >> userAnswer;

        if (userAnswer == correctAnswers[i]) {
            std::cout << "Correct!" << std::endl;
            ++score;
        } else {
            std::cout << "Wrong answer!" << std::endl;
        }
        std::cout << std::endl;
    }

    // Final score
    std::cout << "You got " << score << " out of 3 correct." << std::endl;

    return 0;
}
