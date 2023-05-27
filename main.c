#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "Headers/global.h"
#include "Headers/functions.h"

char Name[20];

int main()
{
    int total;
    system("cls");
    printf("  ||||||||||||    ||     ||  || ||          ||   ||       ||       ||||||||||  |||        |||       |||        ||||||||||   ||||||||||||\n");
    printf("       ||         ||     ||  || || ||       ||   ||    |||          ||     |   ||||     |||||     ||   ||      ||      ||        ||\n");
    printf("       ||         ||     ||  || ||   ||     ||   ||   ||               ||      ||  ||  ||  ||     ||    ||     ||      ||        ||\n");
    printf("       ||         |||||||||  || ||     ||   ||   || ||                  ||     ||    ||    ||    ||||||||||    ||||||||||        ||\n");
    printf("       ||         ||     ||  || ||      ||  ||   ||   ||                 ||    ||          ||   ||        ||   |||||             ||\n");
    printf("       ||         ||     ||  || ||        ||||   ||     ||          ||    ||   ||          ||  ||          ||  ||    ||          ||\n");
    printf("       ||         ||     ||  || ||          ||   ||       ||        |||||||    ||          || ||            || ||     |||        ||\n");

    printf("\nRULES OF THE QUIZ-\n");
    printf("1. There are questions on 6 subjects\n");
    printf("2. There are 10 MCQs with a single correct option.\n");
    printf("3. Each Question will be of 10 points.\n");
    printf("5. To help you when you are stuck, we have TWO LIFELINES.\n");
    printf("      -> EXPERT ADVICE: A Hint will be a given related to correct answer.\n");
    printf("      -> 50-50: Two incorrect options will be removed.\n\n");
    printf("PRESS ENTER TO START THE QUIZ.\n");
    getchar();
    system("cls");
    // Input Personal Details
    printf("ENTER YOUR DETAILS: \n");
    printf("Name : ");
    scanf("%[^\n]s", Name);
    printf("\nAre you ready to take the quiz %s? Yes/No \n", Name);
    char Respond[3];
    scanf("%s", Respond);
    system("cls");
    int quiz_choice;
    if (strcmp(Respond, "Yes") == 0 || strcmp(Respond, "yes") == 0 || strcmp(Respond, "y") == 0 || strcmp(Respond, "Y") == 0)
    {
        printf("\n");
        printf("Enter the Subject of the Quiz: \n");
        printf("1. Problem Solving and Computer Programming\n");
        printf("2. Engineering Visualisation\n");
        printf("3. Introduction to Computer Systems\n");
        printf("4. Data Structures and Algorithms\n");
        printf("5. System Programming\n");
        printf("6. General Knowledge\n");
        printf("What is your CHOICE?(in number)\n : ");
        while (1)
        {
            if (scanf("%d", &quiz_choice) != 1 || quiz_choice > 6 || quiz_choice < 1)
            {
                printf("Error: Invalid input. Please enter your answer.\n");
                while (getchar() != '\n')
                {
                }
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
    switch (quiz_choice)
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

    return 0;

}
