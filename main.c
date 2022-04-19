/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: logan Mead
 *  ECE141- Spring 2020
 * Created on February 1, 2020, 9:10 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(0));                                                    //Uses current time as random number
    int rNum =(rand()%100) +1;                                         //Creates a range from 1 to 100
    int userNum=0;                                                       //Sets an int as user entered number
    printf("Welcome to the guessing game, lets see how you good you are at guessing\n");
    printf("Random number is between 1 and 100\n");
    printf("\n");
    printf("\t");
    while(userNum != rNum){                                            //loops until user guess random number correctly
        printf("Enter a number: ");                                    //Asks user to enter a number
        scanf("%d",&userNum);                                          //Scans users number
        printf("\t");
            if(userNum< rNum){                                         //If userNum is less than rNum run if statement
                printf("You entered: %d\n", userNum);                  //Print user entered number
                printf("\t");
                printf("Your number is too low\n");                    //tells user number is too low
                printf("\n");
            }
            else if(userNum> rNum){                                    //run command if other statement is wrong
         printf("You entered: %d\n", userNum);                         //print users number
         printf("\t");
         printf("Your number is too high\n");                          //tells user number is too high
         printf("\n");
             }
 }
   printf("\n"); 
   printf("\t");
   printf("congratulations, you have won the random number guessing game!\n");
   printf("\t");
   printf("Want to play again?");

    return (EXIT_SUCCESS);
}

