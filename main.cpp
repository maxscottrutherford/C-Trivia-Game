//
//  main.cpp
//  Trivia
//
//  Created by Max Rutherford on 11/28/21.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Trivia.h"
using namespace std;

//Function Prototypes
void gameIntro();
void setPlayer1();
void setPlayer2();
void question(int);
void checkWinner();

//Global Variables
string player1, player2;
int player1Points = 0, player2Points = 0;


//Array of Trivia Objects
Trivia questions[] = {
    Trivia("How many languages are written right to left?", "8", "20", "12", "74", 3),
    Trivia("Which is the largest tech company in South Korea", "Toshiba", "Samsung", "Apple", "Huawei", 2),
    Trivia("Which year did the Berlin Wall fall?", "1992", "1987", "1990", "1989", 4),
    Trivia("Which country invented ice cream?", "India", "Russia", "China", "Italy", 3),
    Trivia("Which country won the first World Cup in 1930?", "Uruguay", "Venezuela", "Argentina", "Germany", 1),
    Trivia("How many hearts does an octopus have?", "8", "3", "6", "0", 2),
    Trivia("How many teeth does an adult human have?", "28", "32", "34", "26", 2),
    Trivia("Which is usually the pH level of water?", "3", "5", "10", "7", 4),
    Trivia("Which language has the most words?", "Ukrainian", "English", "Korean", "Samoan", 2),
    Trivia("Which year was Walt Disney born?", "1895", "1907", "1915", "1901", 4),
    Trivia("How many valves does a trumpet have?", "5", "3", "7", "4", 2)
};

int main() {
    gameIntro();
    setPlayer1();
    setPlayer2();
    for (int q = 1; q < 11; q++) {
        question(q);
    }
    checkWinner();
}


void gameIntro() {
    cout << "\n\n\n\n\t\tWelcome to Trivia!\n\n\n\n";
    cout << "Two of you will each answer 5 questions!\n\n\n";
    cout << "Whoever answers the most questions, wins!\n\n\n";
}

void setPlayer1() {
    cout << "Player 1, please enter your name: ";
    cin >> player1;
    cin.ignore();
}

void setPlayer2() {
    cout << "\n\nPlayer2, please enter your name: ";
    cin >> player2;
    cin.ignore();
}

void question(int q) {
    int choice;
    if (q % 2 != 0) {
        cout << "\n\n" << player1 << ", it's your turn.\n\n";
        q -= 1;
        cout << questions[q].getQuestion() << endl;
        cout << "Option 1: " << questions[q].getAns1() << endl;
        cout << "Option 2: " << questions[q].getAns2() << endl;
        cout << "Option 3: " << questions[q].getAns3() << endl;
        cout << "Option 4: " << questions[q].getAns4() << endl << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        while (choice < 1 || choice > 4) {
            cout << "Enter a choice between 1 and 4: ";
            cin >> choice;
        }
        if (choice == questions[q].getCorrectAns()) {
            cout << "\n\nYou're correct! That's a point for you, Player 1!\n\n";
            player1Points +=1;
        }
        else
            cout << "\n\nSorry, that's incorrect.\n\n";
    }
    else {
        cout << "\n\n" << player2 << ", it's your turn.\n\n";
        q -= 1;
        cout << questions[q].getQuestion() << endl;
        cout << "Option 1: " << questions[q].getAns1() << endl;
        cout << "Option 2: " << questions[q].getAns2() << endl;
        cout << "Option 3: " << questions[q].getAns3() << endl;
        cout << "Option 4: " << questions[q].getAns4() << endl << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        while (choice < 1 || choice > 4) {
            cout << "Enter a choice between 1 and 4: ";
            cin >> choice;
        }
        if (choice == questions[q].getCorrectAns()) {
            cout << "\n\nYou're correct! That's a point for you, Player 2!\n\n";
            player2Points += 1;
        }
        else
            cout << "\n\nSorry, that's incorrect.\n\n";
    }
}

void checkWinner() {
    int player1c, player2c;
    if (player1Points > player2Points) {
        cout << "\n\nCongratulations, " << player1 << "! You win!\n";
        cout << "You beat " << player2 << " by " << player1Points - player2Points << " points!\n";
        cout << "You answered " << player1Points << " questions correct!\n\n";
    }
    else if (player2Points > player1Points) {
        cout << "\n\nCongratulations, " << player2 << "! You win!\n";
        cout << "You beat " << player1 << " by " << player2Points - player1Points << " points!\n";
        cout << "You answered " << player2Points << " questions correct!\n\n";
    }
    else {
        cout << "\n\nIt looks like we have a tie!\n";
        cout << "We'll have to do a tiebreaker question!\n\n";
        cout << questions[10].getQuestion() << endl;
        cout << "Option 1: " << questions[10].getAns1() << endl;
        cout << "Option 2: " << questions[10].getAns2() << endl;
        cout << "Option 3: " << questions[10].getAns3() << endl;
        cout << "Option 4: " << questions[10].getAns4() << endl;
        cout << "\nPlayer 1, enter your choice: ";
        cin >> player1c;
        while (player1c < 1 || player1c > 4) {
            cout << "Enter a choice between 1 & 4: ";
            cin >> player1c;
        }
        cout << "\nPlayer 2, enter your choice: ";
        cin >> player2c;
        while (player2c < 1 || player2c > 4) {
            cout << "Enter a choice between 1 & 4: ";
            cin >> player2c;
        }
        if (player1c == questions[10].getCorrectAns() && player2c != questions[10].getCorrectAns())
            cout << "\n\nCongratulations, " << player1 << "! You win!\n\n";
        else if (player2c == questions[10].getCorrectAns() && player1c != questions[10].getCorrectAns())
            cout << "\n\nCongratulations, " << player2 << "! You win!\n\n";
        else
            cout << "\n\nWell I ran out of questions, you both win!\n\n";
    }
}

