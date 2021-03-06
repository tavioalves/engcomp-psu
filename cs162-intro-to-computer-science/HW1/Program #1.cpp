/* - Algorithm  - 
    Start program
        create arrays playerone_choice, playertwo_choice, computer_choice, possible_choice, user_choice
        create integer random_number, ties_number = 0
        create boolean winner = FALSE
        create random number generator
        
        welcome program for the user_choice
        ask the user for the type of game -> against the computer or another player
        uppercase the user_choice
        
        while the user_choice is not ('C' and 'P') or length is bigger than 1
            print an ERROR
            ask again the user for the type of game - against the computer or another player
            uppercase the user choice
        
        if the choice is equal to P
            do a loop
                ask the playerone_choice
                uppercase the playerone_choice
                while the playerone_choice is not ('R' and 'P' and 'S') or length is bigger than 1
                    print an ERROR
                    ask again a valid the playerone_choice 
                    uppercase the playerone_choice
                    
                clear the screen
                
                ask the playertwo_choice
                uppercase the playertwo_choice
                while the playertwo_choice is not ('R' and 'P' and 'S') or length is bigger than 1
                    print an ERROR
                    ask again a valid the playertwo_choice 
                    uppercase the playertwo_choice
                
                clear the screen
                
                if playerone_choice is equal to 'R' and if playerotwo_choice is equal to 'S'
                    playerone is the winner
                    variable winner is TRUE
                    
                if playerone_choice is equal to 'P' and if playerotwo_choice is equal to 'R'
                    playerone is the winner
                    variable winner is TRUE
                    
                if playerone_choice is equal to 'S' and if playerotwo_choice is equal to 'P'
                    playerone is the winner
                    variable winner is TRUE
                
                if playerotwo_choice is equal to 'R' and if playerone_choice is equal to 'S'
                    playerotwo is the winner
                    variable winner is TRUE
                    
                if playerotwo_choice is equal to 'P' and if playerone_choice is equal to 'R'
                    playerotwo is the winner
                    variable winner is TRUE
                    
                if playerotwo_choice is equal to 'S' and if playerone_choice is equal to 'P'
                    playerotwo is the winner
                    variable winner is TRUE
                    
                if winner is equal to false
                    ties_number is increasing by one
                    winner is equal to FALSE
                
             while is winner equal to FALSE
         
         if the choice is equal to C
            do a loop
                ask the player_choice
                uppercase the player_choice
                while the player_choice is not ('R' and 'P' and 'S') or length is bigger than 1
                    print an ERROR
                    ask again a valid the player_choice 
                    uppercase the player_choice
                    
                clear the screen
                
                generate a random_number
                computer_choice is equal to possibles_choices[random_number]
                
                clear the screen
                
                if player_choice is equal to 'R' and if computer_choice is equal to 'S'
                    playerone is the winner
                    variable winner is TRUE
                    
                if player_choice is equal to 'P' and if computer_choice is equal to 'R'
                    playerone is the winner
                    variable winner is TRUE
                    
                if player_choice is equal to 'S' and if computer_choice is equal to 'P'
                    playerone is the winner
                    variable winner is TRUE
                
                if computer_choice is equal to 'R' and if player_choice is equal to 'S'
                    computer_choice is the winner
                    variable winner is TRUE
                    
                if computer_choice is equal to 'P' and if player_choice is equal to 'R'
                    computer_choice is the winner
                    variable winner is TRUE
                    
                if computer_choice is equal to 'S' and if player_choice is equal to 'P'
                    computer_choice is the winner
                    variable winner is TRUE
                    
                if winner is equal to false
                    ties_number is increasing by one
                    winner is equal to FALSE
                
             while is winner equal to FALSE   
        
        print the winner and results
    End program
*/

/* 
    Created by Alves Silva, Otavio Augusto - Program #1 Rock, Paper and Scissors game.
    CS 162 - Intro to Computer Science 
    Email address: alves2@pdx.edu
    Date: 01/19/2015

    When you are with your best friend or colleague and you have a problem to decide who goes first? One way is to play the game 'rock, paper and scissors.
    This program simulates the game with two players or against a computer and presents who is the winner.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstring>

using namespace std;


int main()
    {
    char playerone_choice[20]; // Variable to keep the player one choice
    char playertwo_choice[20]; // Variable to keep the player two choice
    char computer_choice[20]; // Variable to keep the computer choice
    char user_choice[20]; // Variable to keep the user choice of game
      
    char possible_choices[3] = {'R','P','S'}; // Variable to keep the possible computer choice - Rock, paper and scissors
    
    int random_number; // Integer variable to keep the random number for the computer choice
    int ties_number = 0; // Integer variable to keep the number of draws
    
    bool winner = false; // Boolean variable  to keep the loop until a winner is false
    
    srand(time(NULL)); // Initialize random number generator.
    
    system("clear");     // The terminal is clean
     
    cout << "==================================\n";
    cout << "= ROCK, PAPER and SCISSORS GAME  =\n";     
    cout << "==================================\n\n";              
    
    // Welcome the game for the user
    cout << "- RULES -> The 'rock' beats scissors, the 'scissors' beats paper and the 'paper' beats rock; if both players throw the same shape, the game is tied.\n\n";
    
    // Ask and take the user option of game
    cout << "- If you want to play against a computer please enter 'C'. Otherwise,if you want to play against another player please enter 'P': ";  
    cin >> user_choice;
    user_choice[0] = toupper(user_choice[0]); // Uppercase the choice 
    
    // Loop - While the choice isn't valid or bigger than one character. The progrm will continue ask a valid choice
    while( ((user_choice[0] != 'C') && (user_choice[0] != 'P')) || (strlen(user_choice) > 1) )
    {
        cout << "\n\nERROR!, Please enter 'C' to play against a computer or 'P' to play against another player. \n";
        cout << "Please, enter your choice again: ";
        cin >> user_choice;
        user_choice[0] = toupper(user_choice[0]);
    }
    
    	system("clear");  // The terminal is clean
    
    if (user_choice[0] == 'P') // If the choice was 'P', the game will have two players
    {
        // Loop - The program will stay in a loop until have a winner
	    do{ 	        
	        cout << "Please enter 'R' for Rock, 'P' for paper and 'S' for scissors.\n\n"; // Welcome the rules 
            cout << "Enter the player one choice: ";	   //  Ask and take the player one choice
            cin >> playerone_choice;
            playerone_choice[0] = toupper(playerone_choice[0]); // Uppercase the choice of player one
            
             // Loop - While the player one choice isn't valid or bigger than one character. The progrm will continue ask a valid choice
            while( ((playerone_choice[0] != 'R') && (playerone_choice[0] != 'P') && (playerone_choice[0] != 'S')) || (strlen(playerone_choice) > 1) )
            {
                cout << "\n\nERROR!, Please enter 'R' for Rock, 'P' for paper and 'S' for scissors. \n";
                cout << "Enter the player one choice again: ";
                cin >> playerone_choice;
                playerone_choice[0] = toupper(playerone_choice[0]);
            }
        
            system("clear"); // The terminal is clean
                        
	        cout << "Please enter 'R' for Rock, 'P' for paper and 'S' for scissors.\n\n"; // Welcome the rules
            cout << "Enter the player two choice: ";  //  Ask and take the player two choice
            cin >> playertwo_choice;
            playertwo_choice[0] = toupper(playertwo_choice[0]); // Uppercase the choice of player two
            
            // Loop - While the player two choice isn't valid or bigger than one character. The progrm will continue ask a valid choice
            while( ((playertwo_choice[0] != 'R') && (playertwo_choice[0] != 'P') && (playertwo_choice[0] != 'S')) || (strlen(playertwo_choice) > 1) )
            {
                cout << "\n\nERROR!, Please enter 'R' for Rock, 'P' for paper and 'S' for scissors. \n";
                cout << "Enter the player two choice again: ";
                cin >> playertwo_choice;
                playertwo_choice[0] = toupper(playertwo_choice[0]);
            }
        
            system("clear");  // The terminal is clean
        
            // Player one winning
            if((playerone_choice[0] == 'R')&&(playertwo_choice[0] == 'S')){ // Rock beats scissors
                cout << "Player one won ! Rock beats scissors!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true; // Winner is TRUE - Loop break
            }
            else if((playerone_choice[0] == 'S')&&(playertwo_choice[0] == 'P')){ // Scissors beats paper
                cout << "Player one won ! Scissors beats paper!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true; // Winner is TRUE - Loop break
            } 
            else if((playerone_choice[0] == 'P')&&(playertwo_choice[0] == 'R')){ // Paper beats rock
                cout << "Player one won ! Paper beats rock!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true; // Winner is TRUE - Loop break
            }
    
            // Player two winning
            else if((playertwo_choice[0] == 'R')&&(playerone_choice[0] == 'S')){ // Rock beats scissors
                cout << "Player two won ! Rock beats scissors!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true; // Winner is TRUE - Loop break
            }
            else if((playertwo_choice[0] == 'S')&&(playerone_choice[0] == 'P')){ // Scissors beats paper
                cout << "Player two won ! Scissors beats paper!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true; // Winner is TRUE - Loop break
            }
            else if((playertwo_choice[0] == 'P')&&(playerone_choice[0] == 'R')){ // Paper beats rock
                cout << "Player two won ! Paper beats rock!\n";
                cout << "The number of ties was: " << ties_number << "\n";
                winner = true; // Winner is TRUE - Loop break
            }
    		    else if(winner == false)  // If no one is the winner, we have a draw.
     		{
                cout << "Draw ! Let's play again. \n";
                ties_number += 1;
            }
        }while(winner == false);
    }
    else if (user_choice[0] == 'C') // If the choice was 'C', the game will have one player and a computer
    {
        do
        {
	        // Welcome the rules 
	        cout << "Please enter 'R' for Rock, 'P' for paper and 'S' for scissors.\n\n";
	        //  Ask and take the user choice
            cout << "Enter your choice: ";
            cin >> playerone_choice;
            playerone_choice[0] = toupper(playerone_choice[0]); // Uppercase the user's choice
            
            // Loop - While the player  choice isn't valid or bigger than one character. The progrm will continue ask a valid choice
            while( ((playerone_choice[0] != 'R') && (playerone_choice[0] != 'P') && (playerone_choice[0] != 'S')) || (strlen(playerone_choice) > 1) )
            {
                cout << "\n\nERROR!, Please enter 'R' for Rock, 'P' for paper and 'S' for scissors. \n";
                cout << "Enter your choice again: ";
                cin >> playerone_choice;
                playerone_choice[0] = toupper(playerone_choice[0]);
            }

            random_number = rand()%3; // Returns a pseudo-random integral number in the range between 0 and 2.
         
            computer_choice[0] = possible_choices[random_number]; // Computer choice will be 0 - R, 1 - P and 2 - S.
            cout << "The computer choice was "<< computer_choice[0] << endl;
        
            // Player one win
            if((playerone_choice[0] == 'R')&&(computer_choice[0] == 'S')){ // Rock beats scissors
                cout << "You won ! Rock beats scissors!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true;
            }
            else if((playerone_choice[0] == 'S')&&(computer_choice[0] == 'P')){ // Scissors beats paper
                cout << "You won ! Scissors beats paper!\n"; 
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true;
            }
            else if((playerone_choice[0] == 'P')&&(computer_choice[0] == 'R')){ // Paper beats rock
                cout << "You won! Paper beats rock!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true;
            }
    
            // Computer win
            else if((computer_choice[0] == 'R')&&(playerone_choice[0] == 'S')){ // Rock beats scissors
                cout << "Computer won ! Rock beats scissors!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true;
            }
            else if((computer_choice[0] == 'S')&&(playerone_choice[0] == 'P')){ // Scissors beats paper
                cout << "Computer won ! Scissors beats paper!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true;
            }
            else if((computer_choice[0] == 'P')&&(playerone_choice[0] == 'R')){ // Paper beats rock
                cout << "Computer won ! Paper beats rock!\n";
                cout << "The number of ties was: " << ties_number << "\n\n";
                winner = true;
            }
            else if(winner == false) // If no one is the winner, we have a draw.
     		{
                cout << "Draw ! Let's play again.\n\n";
                ties_number += 1;
            }
        }while(winner == false);
    }

    return 0;
}
