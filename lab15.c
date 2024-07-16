/** lab15.c
 * ===========================================================
 * Name:
 * Section:
 * Project: Lab 15
 * Purpose:
 * ===========================================================
 */

#include <stdio.h>
#include "football.h"
#include "lab15functs.h"

int main()
{
    // This creates 3 arrays to hold the # of attempts, rushing yards, and touchdowns for NFL players
    int attempts[MAXPLAYERS];
    int yards[MAXPLAYERS];
    int TDs[MAXPLAYERS];

    // This code reads the FBdata2017.txt file, and fills in the data in the attempts, yards, and TDs arrays
    // It also stores the number of players read into the variable, numPlayers
    int numPlayers = readData(attempts, yards, TDs);
    printf("%d players data read.\n", numPlayers);


    // ----------------------------------------------------
    // Exercise 1:  Display Some Data
    // ----------------------------------------------------
    // Display name and # of touchdowns for player 0
    //printf("Player ID 0 is %s and he scored %d touchdowns in 2017.\n", 

    // Display name and # of rushing yards for player 122
    //printf("Player ID 122 is %s and he rushed for %d yards in 2017.\n", 


    // ----------------------------------------------------
    // Exercise 2:  findMaxIndex
    //    - Declare the function in lab15functs.h
    //    - Define the function in lab15functs.c
    //    - THEN, use the function to print the following output
    // ----------------------------------------------------
    // Display the name of the player with the most yards
    //printf("The player with the most yards in 2017 is %s and he had %d.\n", 

    // Display the name of the player with the most TDs in 2017
    //printf("The player with the most TDs in 2017 is %s and he had %d.\n", 


    // ----------------------------------------------------
    // Exercise 3:  numPlayerOverX
    //    - Declare the function in lab15functs.h
    //    - Define the function in lab15functs.c
    //    - THEN, use the function to print the following output
    // ----------------------------------------------------
    // Display the number of players with more than 10 TDs in 2017
    //printf("The number of players with more than 10 TDs in 2017 is %d.\n", 

    // Display the number of players with more than 1000 yards in 2017
    //printf("The number of players with more than 1000 yards in 2017 is %d.\n", 

    // Display the number of players with more than 100 attempts in 2017
    //printf("The number of players with more than 100 attempts in 2017 is %d.\n", 


    // ----------------------------------------------------
    // Exercise 4:  getMaxYardsPerCarryIndex AND getMaxYardsPerCarry
    //    - Declare the functions in lab15functs.h
    //    - Define the functions in lab15functs.c
    //    - THEN, use the functions to print the following output
    // ----------------------------------------------------
    // Display the player with the max yards per carry with > 100 attempts
    //printf("The player with the most yards per carry (>100 attempts) is %s and he had %0.1lf.\n",
    
    // find the player with the max yards per carry with > 50 attempts
    //printf("The player with the most yards per carry (>50 attempts) is %s and he had %0.1lf.\n", 

    // find the player with the max yards per carry with > 10 attempts
    //printf("The player with the most yards per carry (>10 attempts) is %s and he had %0.1lf.\n", 

    return 0;
}