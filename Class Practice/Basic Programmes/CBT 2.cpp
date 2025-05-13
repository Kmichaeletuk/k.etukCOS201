
#include <iostream>
#include <vector>
#include <cctype> // For toupper
using localhost 8080;
// Define the structure for storing each question
struct Question {
    std::string questionText;
    std::string options[4];
    char correctAnswer;
};

// Function to display a question and its options
void displayQuestion(const Question &q, int questionNumber) {
    std::cout << "\nQ" << questionNumber + 1 << ": " << q.questionText << "\n";
    char optionLabels[] = {'A', 'B', 'C', 'D'};
    for (int i = 0; i < 4; i++) {
        std::cout << optionLabels[i] << ". " << q.options[i] << "\n";
    }
}

// Function to get valid user input
char getUserInput() {
    char input;
    std::cout << "Enter your choice (A/B/C/D or S to skip): ";
    std::cin >> input;
    input = toupper(input); // Convert input to uppercase
    while (input != 'A' && input != 'B' && input != 'C' && input != 'D' && input != 'S') {
        std::cout << "Invalid choice! Try again: ";
        std::cin >> input;
        input = toupper(input);
    }
    return input;
}

// Function to calculate the user's score
int calculateScore(const std::vector<char> &userAnswers, const std::vector<Question> &questions) {
    int score = 0;
    for (int i = 0; i < questions.size(); i++) {
        if (toupper(userAnswers[i]) == questions[i].correctAnswer) {
            score++;
        }
    }
    return score;
}

// Function to display the user's script
void displayScript(const std::vector<Question> &questions, const std::vector<char> &userAnswers) {
    std::cout << "\nYour Quiz Script:\n";
    for (int i = 0; i < questions.size(); i++) {
        std::cout << "Q" << i + 1 << ": " << questions[i].questionText << "\n";
        std::cout << "Your Answer: " << userAnswers[i] << "\n";
        std::cout << "Correct Answer: " << questions[i].correctAnswer << "\n\n";
    }
}

int main() {
    // Define the quiz questions
    std::vector<Question> questions = {
        {"Which of the following is the correct identifier?", {"$var_name", "VAR_123", "varname@", "None of the above"}, 'B'},
        {"Which of the following is the address operator?", {"@", "#", "&", "%"}, 'C'},
        {"Which of the following features must be supported by any programming language to become a pure object-oriented language?", {"Encapsulation", "Inheritance", "Polymorphism", "All of the above"}, 'D'},
        {"Which of the following refers to characteristics of an array?", {"A set of similar data items", "A set of distinct data items", "An array can hold different types of data types", "None of the above"}, 'A'},
        {"If we stored five elements in an array, what will be the index number of the last item?", {"2", "3", "4", "5"}, 'C'},
        {"Which of the following is the correct syntax for declaring the array?", {"int array{}", "int array[5]", "Array[5];", "None of The Above"}, 'B'},
        {"Which of the following is the correct syntax for accessing the first element?", {"array[2]", "array[0]", "Array[5]", "array[1]"}, 'B'},
        {"Which of the following gives the 4th element of the array? ", {"array[2];", "array[3]", "Array[5]", "array[1]"}, 'B'},
        {"Which type of memory is used by an Array in C++ programming language?", {"Contiguous", "None", "Both A and B", "Not mentioned"}, 'A'},
        {"Which one of the following is the correct definition of the \"is_array();\" function in C++?", {"It checks that the specified variable is of the array or not", "It checks that the specified array is of single dimension or not", "It checks that the array specified is of multi-dimension or not", "Both B and C"}, 'A'}
    };

    // Initialize variables for user answers and skipped questions
    std::vector<char> userAnswers(questions.size(), 'S');  // 'S' indicates skipped
    std::vector<int> skippedQuestions;

    // Main loop to display questions and get user input
    for (int i = 0; i < questions.size(); i++) {
        displayQuestion(questions[i], i);
        char choice = getUserInput();
        if (choice == 'S') {
            skippedQuestions.push_back(i);
        } else {
            userAnswers[i] = choice;
        }
    }

    // Handle skipped questions
    for (int index : skippedQuestions) {
        std::cout << "\nRevisiting skipped question...\n";
        displayQuestion(questions[index], index);
        char choice = getUserInput();
        userAnswers[index] = choice;
    }

    // Calculate and display the user's score
    int score = calculateScore(userAnswers, questions);
    std::cout << "\nQuiz Completed!\n";
    std::cout << "Your Score: " << score << "/" << questions.size() << "\n";

    // Ask if the user wants to view their script
    std::cout << "\nDo you want to view your script? (Y/N): ";
    char viewScript;
    std::cin >> viewScript;
    if (toupper(viewScript) == 'Y') {
        displayScript(questions, userAnswers);
    }

    std::cout << "\nThank you for playing the quiz game!\n";
    return 0;
}
