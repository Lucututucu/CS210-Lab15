/** lab15duncts.c
 * =========================================================== 
 * Name: Lucas Briggs 20 Sep 2024
 * Section: T1/2 Kloenne
 * Project: Lab 15
 * Purpose: Practice Arrays
 * =========================================================== */

//Remember any includes and defines
#include <stdio.h>

int findMaxIndex(int list[], int listLen) {
    int max = list[0];
    int maxIndex;
    int i;
    for (i = 0; i < listLen; ++i) {
        if (max < list[i]) {
            max = list[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int numPlayerOverX(int list[], int listLen, int threshold) {
    int count = 0;
    int i;
    for (i = 0; i < listLen; ++i) {
        if (list[i] > threshold) {
            count++;
        }
    }
    return count;
}


int getMaxYardsPerCarryIndex(int attList[], int yardList[], int listsLen, int threshold) {
    int maxIndex = 0;
    double maxYPC = (double)yardList[0] / attList[0];
    int i;
    for (i = 0; i < listsLen; ++i) {
        if (attList[i] > threshold) {
            double currYPC = (double)yardList[i] / attList[i];
            if (maxYPC < currYPC) {
                maxIndex = i;
                maxYPC = currYPC;
            }
        }
    }
    return maxIndex;
}


double getMaxYardsPerCarry(int attList[], int yardList[], int listsLen, int threshold) {
    int maxYPCIndex = getMaxYardsPerCarryIndex(attList, yardList, listsLen, threshold);
    return (double)yardList[maxYPCIndex] / attList[maxYPCIndex];
}
