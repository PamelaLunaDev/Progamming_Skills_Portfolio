# Primitive Quiz

## Description
This program is a simple question and answer quiz about capital cities.  
It asks the user two questions:  
1- What is the capital of France?  
2- What is the capital of Brazil?  
For each question, the user types answer as text.  
The program converts the answer to lowercase to ignore capital letters, checks if it is correct, print feedback and then displays the final score out of 2.

## How to run
- 1 Open the terminal in VS Code.
- 2 Compile the program:  
g++PrimitiveQuiz.cpp -o PrimitiveQuiz

- 3 Execute
- On Windows:  
.\ PrimitiveQuiz.exe

- On MacOS / Linux:  
./PrimitiveQuiz

## What I learned
- How to use `std::string` to store text input from the user.
- How to use getline `cin, answer` to reaad a full line of text.
- How to normalise user input by converting characters to **lowercase** before comparision.
- How to use `if` and `else` to check whether an answer is correct or incorrect.
- How to keep track of a `score` using an `int` variable and update it for each correct answer.
- How to print clear feedback messages and a final score to the terminal.

## Academic Integrity Note
I use ChatGPT to study and understand the task requirements.
After learning the concepts, I adapted and wrote the **final version** of the code myself.


## Author
**Pamela Luna**  
Bath Spa University - Computing Class.
