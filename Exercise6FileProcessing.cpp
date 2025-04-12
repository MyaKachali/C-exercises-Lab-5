#include <iostream>
#include <fstream>  // for file stuff
#include <string>
#include <sstream>  // to split words
#include <cctype>   
using namespace std;

// Function to count vowels in a string
int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {
        // Check if it's a vowel (case insensitive)
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words by checking spaces
int countWords(const string& text) {
    stringstream ss(text);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

// Function to reverse the text
string reverseText(const string& text) {
    string reversed = text;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetters(const string& text) {
    stringstream ss(text);
    string word, result = "";

    while (ss >> word) {
        // If the word has at least 2 letters
        if (word.length() >= 2) {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }

    return result;
}

int main() {
    string fileData;

    // Step 1: Read from the file
    ifstream inputFile("statement.txt");
    if (!inputFile) {
        cout << "Error: Could not open file." << endl;
        return 1;
    }

    getline(inputFile, fileData); // read the line from the file
    inputFile.close();

    cout << "Original Text: " << fileData << endl;

    // Step 2: Count vowels
    cout << "Number of vowels: " << countVowels(fileData) << endl;

    // Step 3: Count words
    cout << "Number of words: " << countWords(fileData) << endl;

    // Step 4: Reverse the text
    cout << "Reversed text: " << reverseText(fileData) << endl;

    // Step 5: Capitalize second letter of each word
    cout << "Text with second letters capitalized: " << capitalizeSecondLetters(fileData) << endl;

    return 0;
}