#include <iostream>
#include <string>
#include <random>
#include <cstdlib>

using namespace std;

string scramble(const string& text) {

    string chars = text;
    for (int i = 0; i < chars.length(); i++) {

        int j = rand() % chars.length();
        char temp = chars[i];
        chars[i] = chars[j];
        chars[j] = temp;
    }

    return chars;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    string array[10] = {"absolute", "coming","skibidi","killer","ginger","pregnant","slavery","substance","president","popular"};
    
    for (int i = 0; i < 10; i++) {
        string OriginalWord = array[i];
        string ScrambledWord = scramble(OriginalWord);

        cout << "Guess the word " << ScrambledWord <<endl;

        string UserGuess;
        cout << "Your Guess: ";
        cin>> UserGuess;

        if (UserGuess == OriginalWord) {
            cout<<"Correct! The word is "<<OriginalWord <<endl;
    
        }
        else{
            cout<<"Wrong! The word is "<<OriginalWord <<endl;
        }

     }    

}