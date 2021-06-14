#include <iostream>
#include <cstdlib>      // uses th c standard library - for random values
#include <ctime>        //uses the time functions in C++

using namespace std;

int main()
{
    srand(time(0));      // seeds a time in the computer's clock at time 0
                        // ensures that different numbers are generated
                        // each time the progrma runs
                        
    int number;     // variable that holds a number with no decimal places
    int number2;    // variable that holds a rabnodmly generated number
    int guesses = 0; //variables holds the number of guesses
    
          // generate the random number
          // formula: min + rand() % max- min
          number2 = 1 + rand() % 99;
    
    do
    {
        // ask the user to input the value of the number
        cout << "Enter a whole number: ";
        cin >> number;
        
        // add on the guesses
        guesses++;      // same as guesses = guesses + 1;
        // display the number that was entered
        cout << endl << "You entered the number " << number << endl;
        
        // if statement that checks to see if the user entered the right number
        if(number == number2)
            cout << "You guessed the right bumber!" << endl;
        else if(number < number2)
            cout << "you guessed too low. Try again " << endl;
        else
            cout << "You guessed too high. Try again" << endl;
            
    }while(number != number2);
    
    cout << "it took you" << guesses << "to get the right number.";
    ;return 0;
}
