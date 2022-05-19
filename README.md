# C-Trivia-Game
This is a simple 2-player trivia game created using the C++ language.
This project includes a Trivia.h header file, a Trivia.cpp implementation file, and a main.cpp file as a driver for the code.
The header file creates a Trivia class that has private variables for whatever questions and answers you would like to pick.
It also contains the normal utility functions to set and get each question and its respective set of answers.
You initialize a question by creating a Trivia object in main. The easiest way would be using the constructors rather than
the utility functions. The constructor allows you to initialize an object with the question, 4 different answers, and the
integer value of the correct answer (i.e. if the correct answer is answer 3, the correctAns value should be 3.
The main code contains a couple of functions to aid the actual Trivia game itself, including functions to set the players'
names, a function to check if somebody wins (which includes a tiebreaker if one occurs), and a function to introduce the
game itself.
