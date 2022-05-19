//
//  Trivia.hpp
//  Trivia
//  Specification file for the Trivia class
//  Created by Max Rutherford on 11/28/21.
//

#ifndef Trivia_h
#define Trivia_h
#include <string>
using namespace std;

class Trivia {
private:
    string question, ans1, ans2, ans3, ans4;
    int correctAns;
public:
    Trivia();
    Trivia(string, string, string, string, string, int);
    void setQuestion(string);
    void setAns1(string);
    void setAns2(string);
    void setAns3(string);
    void setAns4(string);
    void setCorrectAns(int);
    string getQuestion() {
        return question;
    }
    string getAns1() {
        return ans1;
    }
    string getAns2() {
        return ans2;
    }
    string getAns3() {
        return ans3;
    }
    string getAns4() {
        return ans4;
    }
    int getCorrectAns() {
        return correctAns;
    }
};


#endif /* Trivia_h */
