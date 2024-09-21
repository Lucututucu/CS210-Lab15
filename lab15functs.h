/** lab15duncts.h
 * =========================================================== 
 * Name: Lucas Briggs 20 Sep 2024
 * Section: T1/2 Kloenne
 * Project: Lab 15
 * Purpose: Practice Arrays
 * =========================================================== */

#ifndef LAB15FUNCTS_H
#define LAB15FUNCTS_H

/** 
 * @brief Returns the index of the largest value in an array
 * @param list An array of integers
 * @param listLen the length of the array
 * @return The index of the largest value
 */ 
int findMaxIndex(int list[], int listLen);

/** 
 * @brief Returns number of players over a threshold value for a given threshold and array.
 * @param list An array of integers
 * @param listLen the length of the array
 * @return The index of the largest value
 */ 
int numPlayerOverX(int list[], int listLen, int threshold);

/** 
 * @brief This function returns the index of the player with the max yards per carry whos number of attempts is greater than a threshold
 * @param attList An array of attempts
 * @param yardList An array of yards
 * @param listsLen The length of the arrays
 * @param threshold The threshold of number of attempts
 * @return Returns the index associated with the highest yards per carry.
 */ 
int getMaxYardsPerCarryIndex(int attList[], int yardList[], int listsLen, int threshold);

/** 
 * @brief This function returns the number of the max yards per carry where the number of attempts is greater than a threshold
 * @param attList An array of attempts
 * @param yardList An array of yards
 * @param listsLen The length of the arrays
 * @param threshold The threshold of number of attempts
 * @return Returns the double of the highest yards per carry.
 */ 
double getMaxYardsPerCarry(int attList[], int yardList[], int listsLen, int threshold);

#endif