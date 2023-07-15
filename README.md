This project is a simple implementation of a Number Guessing Game in C programming language. It allows users to interactively guess a randomly generated secret number between 1 and 100.

The program begins by declaring variables such as `secretNumber`, `guess`, and `numGuesses`. The `secretNumber` variable is assigned a random value using the `rand()` function with the help of the `srand(time(0))` statement, which seeds the random number generator with the current time.

Inside the `do-while` loop, the user is prompted to enter their guess. The input is read using the `scanf()` function and stored in the `guess` variable. The program then compares the `guess` with the `secretNumber` to provide appropriate feedback.

If the `guess` is higher than the `secretNumber`, the program prints "Lower number please!" and if the `guess` is lower than the `secretNumber`, it prints "Higher number please!". If the `guess` is equal to the `secretNumber`, the program prints "Congratulations!" along with the number of attempts made (`numGuesses`).

The `numGuesses` variable is incremented after each guess to keep track of the number of attempts made. The `do-while` loop continues until the user correctly guesses the `secretNumber`.

This project is a basic implementation of the Number Guessing Game and serves as a starting point for further enhancements. It demonstrates the use of random number generation, user input, conditional statements, and loop control structures in the C programming language.
