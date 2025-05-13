#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

string scrambleWord(const string& word) {
    string scrambled = word;
    random_shuffle(scrambled.begin(), scrambled.end());
    return scrambled;
}

void displayScore(int correctGuesses, int totalWords) {
    cout << "Words guessed correctly: " << correctGuesses << "/" << totalWords << endl;
}

int main() {
    vector<string> words = {"apple", "banana", "cherry", "date", "elderberry"};
    int totalWords = words.size();
    int correctGuesses = 0;
    int getCorrectLetterAttempts = 5;
    char choice;

    srand(static_cast<unsigned int>(time(0)));

    do {
        cout << "Enter 'S' to start or 'E' to exit: ";
        cin >> choice;
        choice = tolower(choice);

        if (choice == 's') {
            for (int i = 0; i < totalWords; ++i) {
                string currentWord = words[i];
                string scrambled = scrambleWord(currentWord);
                cout << "Scrambled word: " << scrambled << endl;

                while (true) {
                    cout << "Guess the word (or enter 'H' for hint, 'N' for next): ";
                    string guess;
                    cin >> guess;

                    if (guess == "H" || guess == "h") {
                        cout << "Hint: The word starts with '" << currentWord[0] << "'." << endl;
                        continue;
                    } else if (guess == "N" || guess == "n") {
                        cout << "The correct word was: " << currentWord << endl;
                        cout << "You scored 0 points for this word." << endl;
                        break;
                    }

                    if (guess == currentWord) {
                        cout << "Correct! You spelled the word correctly." << endl;
                        correctGuesses++;
                        getCorrectLetterAttempts++;
                        displayScore(correctGuesses, totalWords);
                        break;
                    } else {
                        cout << "Incorrect spelling." << endl;
                    }

                    if (getCorrectLetterAttempts > 0) {
                        char revealChoice;
                        cout << "Do you want to 'R' to reveal a correct letter? (Attempts left: " << getCorrectLetterAttempts << "): ";
                        cin >> revealChoice;
                        if (revealChoice == 'R' || revealChoice == 'r') {
                            cout << "Revealing one correct letter: '" << currentWord[rand() % currentWord.length()] << "'" << endl;
                            getCorrectLetterAttempts--;
                        }
                    } else {
                        cout << "No attempts left to reveal a letter." << endl;
                    }
                }
            }
            cout << "This is the last word." << endl;
        } else if (choice != 'e') {
            cout << "Wrong character entered. Please enter 'S' to start or 'E' to exit." << endl;
        }
    } while (choice != 'e');

    cout << "Thank you for playing!" << endl;
    return 0;
}
