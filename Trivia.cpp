//
//  Trivia.cpp
//  Trivia
//  Implementation file for the Trivia class
//  Created by Max Rutherford on 11/28/21.
//

#include "Trivia.h"

//Constructors
Trivia::Trivia() {
    question = " ";
    ans1 = " ";
    ans2 = " ";
    ans3 = " ";
    ans4 = " ";
    correctAns = 0;
}

Trivia::Trivia(string q, string a1, string a2, string a3, string a4, int ca) {
    question = q;
    ans1 = a1;
    ans2 = a2;
    ans3 = a3;
    ans4 = a4;
    correctAns = ca;
}

void Trivia::setQuestion(string q) {
    question = q;
}

void Trivia::setAns1(string a) {
    ans1 = a;
}

void Trivia::setAns2(string a) {
    ans2 = a;
}

void Trivia::setAns3(string a) {
    ans3 = a;
}
void Trivia::setAns4(string a) {
    ans4 = a;
}


