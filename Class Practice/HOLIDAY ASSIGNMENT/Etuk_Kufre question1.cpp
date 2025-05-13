//used Copilot to know what directives I need
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <map>
using namespace std;

struct Question {
    string text;
    string options[4];
    char correctOption;
    char userAnswer;
    bool skipped;
};

map<string, string> users = {
    {"kufreetuk", "kufre2007"},
    {"danielibok", "dan13l"},
    {"excelogbo", "3xc3l0gb0"},
    {"johnpaul", "john2006"}
};
//used Copilot to show results and view scripts
bool authenticate();
void startQuiz(vector<Question>& questions);
void displayQuestion(const Question& q, int index);
char getUserAnswer();
void showResults(const vector<Question>& questions, int score);
void viewScript(const vector<Question>& questions);
//YouTube to learn how to use toupper function
int main() {
    char choice;
    do {
        cout << "Enter 'S' to start the quiz or 'E' to exit: ";
        cin >> choice;
        choice = toupper(choice);
//AI-generated questions, but the framework of the code is mine. Credit: ChatGPT
        if (choice == 'S') {
            if (authenticate()) {
                vector<Question> questions = {
                    {"What is the capital of France?", {"Berlin", "Madrid", "Paris", "Rome"}, 'C', '\0', false},
                    {"Who was the first President of the United States?", {"Tinubu", "Washington", "Trump", "Putin"}, 'B', '\0', false},
                    {"Which is the largest desert in the world?", {"Sahara", "Gobi", "Antarctic", "Arabian"}, 'C', '\0', false},
                    {"What is the value of 7 square?", {"14", "49", "1", "64"}, 'B', '\0', false},
                    {"What does HTML stand for?", {"HyperText Markup Language", "HyperText Machine Language", "HTML", "HyperTool Machine Language"}, 'A', '\0', false},
                    {"What is 7x3?", {"10", "4", "21", "343"}, 'C', '\0', false},
                    {"What is 5+8?", {"12", "13", "40", "3"}, 'B', '\0', false},
                    {"What is the chemical symbol for silver?", {"Au", "Ag", "Cl", "Fe"}, 'B', '\0', false},
                    {"What is the chemical symbol for iron?", {"Au", "Ag", "Cl", "Fe"}, 'D', '\0', false},
                    {"What is the chemical symbol for chlorine?", {"Au", "Ag", "Cl", "Fe"}, 'C', '\0', false}
                };
                startQuiz(questions);
            } else {
                cout << "Wrong login details. Please try again.\n" << endl;
            }
        } else if (choice != 'E') {
            cout << "Wrong character entered. Try again.\n" << endl;
        }
    } while (choice != 'E');

    cout << "Exiting..." << endl;
    return 0;
}
//Used Copilot to create an endpoint which connects the authenticator to the CBT
bool authenticate() {
    string username;
    string password;

    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    if (users.find(username) != users.end() && users[username] == password) {
        cout << "Authentication successful!\n" << endl;
        return true;
    } else {
        return false;
    }
}

void startQuiz(vector<Question>& questions) {
    int score = 0;
    int totalQuestions = questions.size();

    for (int i = 0; i < totalQuestions; ++i) {
        displayQuestion(questions[i], i);
        char answer = getUserAnswer();
        if (answer == 'S') {
            questions[i].skipped = true;
        } else {
            questions[i].userAnswer = answer;
            if (answer == questions[i].correctOption) {
                ++score;
            }
        }
    }

    for (int i = 0; i < totalQuestions; ++i) {
        if (questions[i].skipped) {
            cout << "\nLet's go back to skipped question(s)" << endl;
            displayQuestion(questions[i], i);
            char answer = getUserAnswer();
            questions[i].userAnswer = answer;
            if (answer == questions[i].correctOption) {
                ++score;
            }
        }
    }

    showResults(questions, score);
}

void displayQuestion(const Question& q, int index) {
    cout << "Question " << index + 1 << ": " << q.text << endl;
    for (int i = 0; i < 4; ++i) {
        cout << char('A' + i) << ". " << q.options[i] << endl;
    }
    cout << "Enter your choice (A/B/C/D) or S to skip: ";
}

char getUserAnswer() {
    char answer;
    cin >> answer;
    answer = toupper(answer);
    while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D' && answer != 'S') {
        cout << "Invalid character entered. Please enter A, B, C, D, or S: ";
        cin >> answer;
        answer = toupper(answer);
    }
    return answer;
}

void showResults(const vector<Question>& questions, int score) {
    cout << "\nQuiz completed!" << endl;
    cout << "Your score: " << score << " out of " << questions.size() << endl;

    cout << "\nWould you like to view your script? (Y/N): ";
    char viewScriptChoice;
    cin >> viewScriptChoice;
    if (toupper(viewScriptChoice) == 'Y') {
        viewScript(questions);
    }
}

void viewScript(const vector<Question>& questions) {
    for (int i = 0; i < questions.size(); ++i) {
        const Question& q = questions[i];
        cout << "Question " << i + 1 << ": " << q.text << endl;
        for (int j = 0; j < 4; ++j) {
            cout << char('A' + j) << ". " << q.options[j] << endl;
        }
        cout << "Your answer: " << q.userAnswer << endl;
        cout << "Correct answer: " << q.correctOption << endl;
        if (q.userAnswer == q.correctOption) {
            cout << "Correct!" << endl;
        } else {
            cout << "Wrong!" << endl;
        }
        cout << endl;
    }
}
//used Copilot to debug




 
