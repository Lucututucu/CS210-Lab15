/** football.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 15
* Purpose: Provides functionality for extracting data from files
* ===========================================================
*/
 
#include <stdio.h>
#include <string.h>
#include "football.h"

#define MAX_PLAYER_NAME_LEN 40

char playerName[MAXPLAYERS][MAX_PLAYER_NAME_LEN];
int numPlayers;

/**
 *   @brief A function that reads data from a file into the associated arrays
 *   @param attempts - the number of rushing attempts made during the season
 *   @param yards - the number of rushing yards made during the season
 *   @param touchdowns - the number of TDs a player made during the season
 *   @pre  data file exists
 *   @pre  parameter arrays of appropriate size exist
 *   @post fills the parameter arrays with data from file (or fails)
 *   @returns the number of players read or -1 on error
 */
int readData(int attempts[], int yards[], int touchdowns[]) {

    FILE *inFile = NULL; // File pointer
    char firstName[30];
    char lastName[45];
    int numRead = 0;
    int gamesPlayed[MAXPLAYERS]; // reserved for future use.

    // Open file
    printf("Opening file \"" DATA_FILE_NAME "\".\n");
    inFile = fopen(DATA_FILE_NAME, "r");


    if (inFile == NULL) {
        printf("Could not open file \"" DATA_FILE_NAME "\".\n");
        return -1;
    }

    printf("Reading football data.\n");
    while (numRead < 400 && !feof(inFile)) {
        fscanf(inFile, "%s %s %d %d %d %d", firstName, lastName, &gamesPlayed[numRead],
               &attempts[numRead], &yards[numRead], &touchdowns[numRead]);
        strcat(firstName, " ");
        strncpy(playerName[numRead], strcat(firstName, lastName), MAX_PLAYER_NAME_LEN);
        numRead++;
    }
    printf("Closing file \"" DATA_FILE_NAME "\".\n");
    fclose(inFile);
    numPlayers = numRead;
    
    return numRead;
}

/**
 *   @brief when given a player ID returns that players name as a string
 *   @param playerID - the ID of the player whose name is desired
 *   @returns a string representing the player whose player ID was provided, NULL on error
 *   @pre the readData function has been called and was successful
 *   @post none
 */
char* getPlayerName(int playerID) {
    if ((playerID >= 0) && (playerID < numPlayers)) {
        return playerName[playerID];
    }
    return NULL;
}