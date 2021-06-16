/********************************************************
 rock, paper, scissors
 
 The rules to this game are as follows:
 
 Rock beats scissors
 Scissors beats paper
 Paper beats rock
 
 /******************************************************/
 #include <iostream>
 #include <ctime>
 #include <cstdlib>
 
 using namespace std;
 
  // function prototypes
 void rules();
 void menu();
 void play();
 
 int main()
 {
     
     int choice; 
     
     do
     {
        menu();
        cout << "Enter your chouce (1, 2, or 3)";
        cin >> choice;
    
        // do some action based on the menu choice
        if(choice == 1)
        {
            // play the game
            play();
        }
        else if(choice == 2)
        {
            //display the rules
            system("cls"); // cleares the console
            // call the rules function
            rules();
        }
        else if(choice == 3)
        {        
            //quit
            cout << "Thank you for using the program. Bye!";
        }
        else
        {
            //display an error
        }
    
}while(choice != 3);
     
     menu();
     
     return 0;
 }
 /*
 function names rules that display the rules of the rock
 paper scissors game
 */
 
 void rules()
 {
     // display the rules to the game
     cout << "***************"
     ;cout << "\t Rock, Paper, Scissors Rules" << endl;
     cout << "***************" << endl;
     cout << "\t - Rock beats scissors" << endl;
     cout << "\t - Scissors beats paper" << endl;
     cout << "\t - Paper beats Rock" << endl;
     cout << "***************" << endl;
     
}
     
     /*
     function that displays the menu for the game
     */
     void menu()
{
     cout << "***************" << endl;
     ;cout << "\t Rock, Paper, Scissors Rules" << endl;
     cout << "***************" << endl;
     cout << "\t - Select one of the folowing" << endl;
     cout << "\t 1 - Play Rock, Papaer, Scissosrs" << endl;
     cout << "\t 2 - View the rules of the game" << endl;
     cout << "\t 3 - Quit" << endl;
     cout << "***************" << endl;
}

void play()
{
    //generate a random number
    srand(time(0));
    
    // variables
    int userchoice;     // user's choice
    int cpuchoice;      // cpu choice
    
    //generate a random number for the cpu
    cpuchoice = 1 + rand() % 3; // select between 1 and 3 for the computer
    
    cout << "***************"
     ;cout << "\t Rock, Paper, Scissors Rules" << endl;
     cout << "***************" << endl;
     cout << "\t - Select one of the folowing" << endl;
     cout << "\t 1 - Rock" << endl;
     cout << "\t 2 - paper" << endl;
     cout << "\t 3 - Scissors" << endl;
     cout << "***************" << endl;
     cout << "Enter your choice (1, 2, oe 3):";
     cin >> userchoice;
    
    //validate the user's choice
    while(userchoice < 1 or userchoice > 3)
    {
            cout << "***********" << endl;
            cout << "\t ERROR: INVALID MENU CHOICE" << endl;
            cout << "***********" << endl;
            cout << "Enter your choice (1, 2, oe 3):";
            cin >> userchoice;
    }
    
    //implement the game logic
    if(userchoice == 1)
    {
        //user picked rock
        if(cpuchoice == 3)
            cout << "You picked rock, CPU picked scissors , You win! \n\n"; // user wins
        else if(cpuchoice == 2)
            cout << "You picked rock, CPU picked Paper , You lose :)\n\n"; // user loses
        else
            cout << "You picked rock, CPU picked Rock , You tied :l \n\n"; // user ties
            
    }
    else if(userchoice == 2)
    {
        //user picked paper
        if(cpuchoice == 3)
            cout << "You picked paper, CPU picked Scissors You lose :l \n\n"; // user lose
        else if(cpuchoice == 2)
            cout << "You picked Paper, CPU picked Paper , You tied :l \n\n"; // user tied
        else
            cout << "You picked Paper , CPU picked Rock , You win :l \n\n"; // user win
    }
    else
    {
        //user picked scissors
        if(cpuchoice == 3)
            cout << "You picked Scissors , CPU picked Scissors , You tied :l \n\n"; // user tied
        else if(cpuchoice == 2)
            cout << "You picked Scissors , CPU picked Paper , You win :l \n\n"; // user win
        else
            cout << "You picked Scissors , CPU picked Rock , You lose :l \n\n"; // user lose
    }
}


 
 
 
 
 
 
 
 
 
 
 