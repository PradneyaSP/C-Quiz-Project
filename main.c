#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include "Headers/global.h"
#include "Headers/functions.h"
#include "functions.c"

char Name[20];

int main()
{
    int total;
    system("cls");
    printf("\033[0;33m");
    printf("  |||||||||||| ||     ||  || ||          ||   ||       ||  ||||||||||  |||        |||       |||        ||||||||||   ||||||||||||\n");
    Sleep(200);
    printf("       ||      ||     ||  || || ||       ||   ||    |||     ||     |   ||||     |||||     ||   ||      ||      ||        ||     \n");
    Sleep(200);
    printf("       ||      ||     ||  || ||   ||     ||   ||   ||          ||      ||  ||  ||  ||     ||    ||     ||      ||        ||     \n");
    Sleep(200);
    printf("       ||      |||||||||  || ||     ||   ||   || ||             ||     ||    ||    ||    ||||||||||    ||||||||||        ||     \n");
    Sleep(200);
    printf("       ||      ||     ||  || ||      ||  ||   ||   ||            ||    ||          ||   ||        ||   |||||             ||     \n");
    Sleep(200);
    printf("       ||      ||     ||  || ||        ||||   ||     ||     ||    ||   ||          ||  ||          ||  ||    ||          ||     \n");
    Sleep(200);
    printf("       ||      ||     ||  || ||          ||   ||       ||   |||||||    ||          || ||            || ||     |||        ||     \n");
    Sleep(1000);
    printf("\033[0m");
    printf("\033[34m");
    printf("\n\n                           \033[4mRULES OF THE QUIZ-\n\n");
    printf("\033[0m"); // Reset color and style
    printf("\033[31m");
    Sleep(200);
    printf("1. There are questions on 6 subjects\n");
    Sleep(200);
    printf("2. There are 10 MCQs with a single correct option.\n");
    Sleep(200);
    printf("3. Each Question will be of 10 points.\n");
    Sleep(200);
    printf("4. To help you when you are stuck, we have TWO LIFELINES.\n");
    Sleep(200);
    printf("   -> EXPERT ADVICE: A Hint will be a given related to correct answer.\n");
    Sleep(200);
    printf("   -> 50-50: Two incorrect options will be removed.\n");
    Sleep(200);
    printf("5. You can use each LIFELINE only once and The score will be reduced to 5 points.\n\n");
    Sleep(1000);
    printf("\033[0m");
    printf("\033[0;32m");
    printf("PRESS ENTER TO START THE QUIZ.\n");
    printf("\033[0m");
    getchar();
    system("cls");

    // Input Personal Details
    printf("\033[34m");
    printf("\n                                \033[4mENTER YOUR DETAILS: \n");
    printf("\033[0m");
    printf("Name : ");
    scanf("%[^\n]s", Name);
    printf("\nAre you ready to take the quiz %s? Yes/No \n", Name);
    char Respond[3];
    scanf("%s", Respond);
    system("cls");
    int choice1, choice2;

    do
    {
        Total_Score = 0;
        time_taken = 0;
        Life1 = 0;
        Life2 = 0;
        numPlayers = 0;

        if (strcmp(Respond, "Yes") == 0 || strcmp(Respond, "yes") == 0 || strcmp(Respond, "y") == 0 || strcmp(Respond, "Y") == 0)
        {
            printf("\n");
            printf("\033[34m");
            printf("                                        \033[4mEnter the Subject of the Quiz: \n\n");
            printf("\033[0m");
            printf("1. Problem Solving and Computer Programming\n");
            printf("2. Engineering Visualisation\n");
            printf("3. Introduction to Computer Systems\n");
            printf("4. Data Structures and Algorithms\n");
            printf("5. System Programming\n");
            printf("6. Riddles\n\n");
            printf("What is your CHOICE?(in number): ");

            while (1)
            {
                scanf("%d", &choice1);
                if (choice1 > 6 || choice1 < 1)
                {
                    printf("Invalid Input !!\nWhat is your CHOICE?(in number): ");
                    continue;
                }
                break;
            }
        }
        else
        {
            printf("\nThank You!!\n");
            return 0;
        }
        system("cls");
        // void settValues(struct Question *q, char qt[], char a1[], char a2[], char a3[], char a4[], int ca, int pa, int s1, int s2, char h[]);
        switch (choice1)
        {
        case 1:
            setQuestions(1);
            break;
        case 2:

            setQuestions(2);
            break;
        case 3:
            setQuestions(3);
            break;
        case 4:
            setQuestions(4);
            break;
        case 5:
            setQuestions(5);
            break;
        case 6:
            setQuestions(6);
            break;
        default:
            break;
        }
        printf("\033[34m");
        printf("\n\nWOULD YOU LIKE TO TAKE THE QUIZ AGAIN ? \nENTER 1 TO CONTINUE 0 TO EXIT : ");
        printf("\033[0m");
        scanf("%d", &choice2);
        system("cls");
    } while (choice2);

    return 0;
}
