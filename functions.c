#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "global.h"
#include "functions.h"

C_Programming p1;
Engineering_Visualisation e1;
Data_Structure d1;
Computer_Systems c1;
Advanced_Calculus a1;
General g1;
Question q;

int Guess;
int Total;
int Life1;
int Life2;

int questions[10];

void setValues(Question *q, char qt[], char a1[], char a2[], char a3[], char a4[], int ca, int pa, int s1, int s2, char h[])
{
    strcpy(q->Question_Text, qt);
    strcpy(q->Option_1, a1);
    strcpy(q->Option_2, a2);
    strcpy(q->Option_3, a3);
    strcpy(q->Option_4, a4);
    q->Correct_Answer = ca;
    q->Question_Score = pa;
    q->show1 = s1;
    q->show2 = s2;
    strcpy(q->Hint, h);
}

void setQuestions(int n)
{
    switch (n)
    {
    case 1:
        setValues(&p1.p_q[0], "Which of the following is the correct syntax to declare a variable in C?", "1) int variableName;", "2) variableName int;", "3) var variableName;", "4) variableName = int;", 1, 10, 1, 3, "The data type is usually mentioned before the variable name in C.");
        setValues(&p1.p_q[1], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nprintf(\"%d\", sizeof(float));\nreturn 0;\n}", "1) 4", "2) 8", "3) 2", "4) Compiler Error", 4, 10, 1, 4, "The sizeof operator returns the size in bytes of a data type.");
        setValues(&p1.p_q[2], "Which of the following is NOT a valid identifier in C?", "1) myVariable", "2) _variable", "3) 123variable", "4) variable123", 3, 10, 2, 3, "An identifier cannot start with a digit.");
        setValues(&p1.p_q[3], "What is the purpose of the \"break\" statement in C?", "1) To exit the current loop or switch statement", "2) To skip the current iteration of a loop", "3) To continue to the next iteration of a loop", "4) To print a line break in the output", 1, 10, 1, 3, "The \"break\" statement is used to terminate the execution of a loop or switch statement.");
        setValues(&p1.p_q[4], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nint x = 5;\nprintf(\"%d\", ++x);\nreturn 0;\n}", "1) 4", "2) 5", "3) 6", "4) Compiler Error", 3, 10, 2, 3, "The prefix increment operator (++x) increments the value of x before it is used in the printf statement.");
        setValues(&p1.p_q[5], "Which of the following is the correct way to define a constant in C?", "1) constant int PI = 3.14;", "2) const int PI = 3.14;", "3) #define PI 3.14", "4) Both 2) and 3)", 4, 10, 2, 4, "Constants can be defined using either the \"const\" keyword or the preprocessor directive \"#define\".");
        setValues(&p1.p_q[6], "What is the purpose of the \"sizeof\" operator in C?", "1) To calculate the size of a data type", "2) To calculate the sum of two numbers", "3) To determine if a variable is initialized", "4) To convert one data type to another", 1, 10, 1, 4, "The \"sizeof\" operator returns the size in bytes of a data type or variable.");
        setValues(&p1.p_q[7], "Which of the following is the correct way to read a character from the user in C?", "1) scanf(\"%c\", &ch);", "2) scanf(\"%s\", &ch);", "3) scanf(\"%d\", &ch);", "4) getchar(ch);", 1, 10, 1, 2, "The \"%c\" format specifier is used to read a character, and the \"&\" operator is used to get the address of the variable.");
        setValues(&p1.p_q[8], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nint x = 10;\nint y = 5;\nprintf(\"%d\", x > y ? x : y);\nreturn 0;\n}", "1) 10", "2) 5", "3) 15", "4) Compiler Error", 1, 10, 1, 3, "The ternary operator (?:) returns the value of x if x > y, otherwise it returns the value of y.");
        setValues(&p1.p_q[9], "What is the purpose of the \"continue\" statement in C?", "1) To exit the current loop", "2) To skip the remaining code in the current iteration ", "3) To return a value from a function", "4) To transfer control to another part of the program", 2, 10, 2, 4, "The \"continue\" statement is used to skip the remaining code in a loop and move to the next iteration.");
        setValues(&p1.p_q[10], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nint x = 10;\nint y = 5;\nprintf(\"%d\", x & y);\nreturn 0;\n}", "1) 10", "2) 5", "3) 15", "4) 0", 4, 10, 2, 4, "The bitwise AND operator (&) performs a bitwise AND operation on the binary representations of x and y.");
        setValues(&p1.p_q[11], "Which of the following is the correct way to define a function in C?", "1) functionName;", "2) functionName();", "3) functionName() {}", "4) function functionName() {}", 3, 10, 2, 3, "A function definition consists of the return type, function name, parentheses, and function body enclosed in curly braces.");
        setValues(&p1.p_q[12], "What is the purpose of the \"strcpy\" function in C?", "1) To concatenate two strings", "2) To compare two strings", "3) To copy one string to another", "4) To convert a string to uppercase", 3, 10, 3, 1, "The \"strcpy\" function is used to copy the contents of one string to another.");
        setValues(&p1.p_q[13], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nchar str[] = \"Hello\";\nprintf(\"%c\", str[3]);\nreturn 0;\n}", "1) H", "2) e", "3) l", "4) l", 4, 10, 1, 4, "Arrays in C are zero-indexed, so str[3] represents the fourth character in the array.");
        setValues(&p1.p_q[14], "What is the purpose of the \"scanf\" function in C?", "1) To print output to the console", "2) To read input from the user", "3) To format strings", "4) To perform mathematical calculations", 2, 10, 2, 3, "The \"scanf\" function is used to read input from the user based on the specified format.");
        setValues(&p1.p_q[15], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nint x = 5;\nint y = 2;\nprintf(\"%d\", x / y);\nreturn 0;\n}", "1) 2.5", "2) 2", "3) 2.0", "4) Compiler Error", 2, 10, 2, 3, "The division operator (/) performs integer division, which truncates the decimal part of the result.");
        setValues(&p1.p_q[16], "Which of the following is the correct syntax to define a structure in C?", "1) struct MyStruct { int x; };", "2) MyStruct { int x; };", "3) structure MyStruct { int x; };", "4) MyStruct = structure { int x; }", 1, 10, 1, 4, "The keyword \"struct\" is used to define a structure, followed by the structure name and the definition inside curly braces.");
        setValues(&p1.p_q[17], "What is the purpose of the \"fwrite\" function in C?", "1) To write data to a file", "2) To read data from a file", "3) To copy a file", "4) To delete a file", 1, 10, 1, 2, "The \"fwrite\" function is used to write data from memory to a file.");
        setValues(&p1.p_q[18], " What is the purpose of the \"malloc\" function in C?", "1) To allocate memory for an array", "2) To deallocate memory", "3) To compare two strings", "4) To copy one string to another", 1, 10, 1, 3, "The \"malloc\" function is used to dynamically allocate memory during runtime.");
        setValues(&p1.p_q[19], "Which of the following is the correct way to access the value of a structure member in C?", "1) structureName.memberName", "2) structureName->memberName", "3) structureName[memberName]", "4) structureName.memberName()", 2, 10, 2, 4, "The arrow operator (->) is used to access structure members when using a pointer to the structure.");
        setValues(&p1.p_q[20], "What is the purpose of the \"fclose\" function in C?", "1) To open a file", "2) To write data to a file", "3) To close a file", "4) To delete a file", 3, 10, 1, 3, "The \"fclose\" function is used to close an open file.");
        setValues(&p1.p_q[21], "Which of the following is the correct way to define a constant pointer in C?", "1) const int *ptr;", "2) int *const ptr;", "3) const int *const ptr;", "4) All of the above", 4, 10, 2, 4, "Constants can be applied to the pointer, the pointed-to value, or both.");
        setValues(&p1.p_q[22], "What is the purpose of the \"strcmp\" function in C?", "1) To concatenate two strings", "2) To compare two strings", "3) To copy one string to another", "4) To convert a string to uppercase", 2, 10, 1, 2, "The \"strcmp\" function is used to compare two strings lexicographically.");
        setValues(&p1.p_q[23], "Which of the following is the correct syntax to define a two-dimensional array in C?", "1) int array[rows][columns];", "2) int array[columns][rows];", "3) int array[rows, columns];", "4) int array[columns, rows];", 1, 10, 1, 3, "The number of rows is mentioned first, followed by the number of columns.");
        setValues(&p1.p_q[24], "What is the purpose of the \"fprintf\" function in C?", "1) To read input from a file", "2) To write formatted output to a file", "3) To copy a file", "4) To delete a file", 2, 10, 2, 3, "The \"fprintf\" function is used to write formatted data to a file.");

                
        random_Qnumber();

        for (int i = 0; i < 10; i++)
        {
            int result = askQuestion(&p1.p_q[questions[i]]);
            if (result)
                p1.Total_Score += p1.p_q[questions[i]].Question_Score;
            system("cls");
        }

        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
    case 5:
    case 6:
    default:
        break;
    }
}

int askQuestion(Question *q)
{
    printf("\n%s\n", q->Question_Text);
    printf("%s\n", q->Option_1);
    printf("%s\n", q->Option_2);
    printf("%s\n", q->Option_3);
    printf("%s\n", q->Option_4);
    printf("\nEnter 5 for Lifeline.\n\n");
    // Storing User's Answer
    printf("Enter the answer (in number): \n");
    while (1)
    {
        if (scanf("%d", &Guess) != 1 || Guess > 5 || Guess < 1)
        {
            printf("Error: Invalid input. Please enter your answer.\n");
            while (getchar() != '\n')
            {
            }
            continue;
        }
        break;
    }

    int choice;
    while (Guess == 5)
    {
        if (Life1 == 2 && Life2 == 2)
        {
            printf("NO MORE LIFELINES REMAINING!\n");
            printf("Enter the answer (in number): \n");
            while (1)
            {
                if (scanf("%d", &Guess) != 1 || Guess == 5)
                {
                    printf("NO MORE LIFELINES REMAINING!\n");
                    printf("Enter the answer (number): \n");
                    while (getchar() != '\n')
                    {
                    }
                    continue;
                }
                break;
            }
            break;
        }
        printf("\nWhich LIFELINE do you want to use?\n");
        printf("1. Expert Advice\n");
        printf("2. 50-50\n\n");
        printf("Enter your choice(in number): ");
        scanf("%d", &choice);

    basic:

        if (choice == 1 && Life1 < 2)
        {
            printf("EXPERT ADVICE IS NOW ACTIVATED AND THIS IS YOUR HINT.\n");
            printf("%s", q->Hint);
            printf("\n");
            Life1 = Life1 + 1;
        }
        else if (choice == 1)
            printf("EXPERT ADVICE IS EXHAUSTED! ");
        else if (choice == 2 && Life2 < 2)
        {
            printf("\n50-50 IS ACTIVATED AND THE TWO OPTIONS REMAINING ARE-\n");
            if (q->show1 == 1 || q->show2 == 1)
                printf("%s\n", q->Option_1);
            if (q->show1 == 2 || q->show2 == 2)
                printf("%s\n", q->Option_2);
            if (q->show1 == 3 || q->show2 == 3)
                printf("%s\n", q->Option_3);
            if (q->show1 == 4 || q->show2 == 4)
                printf("%s\n", q->Option_4);
            Life2 = Life2 + 1;
        }
        else if (choice == 2)
            printf("50-50 IS EXHAUSTED!\n");
        printf("What is your answer?(in number)\n");
        while (1)
        {
            if (scanf("%d", &Guess) != 1 || Guess > 5 || Guess < 1)
            {
                printf("Error: Invalid input.\nPlease enter your answer.\n");
                while (getchar() != '\n')
                {
                }
                continue;
            }
            break;
        }
    }

    if (Guess == q->Correct_Answer)
    {
        printf("\nCorrect !\n");
        Total = Total + q->Question_Score;
        printf("Score = %d out of %d\n", q->Question_Score, q->Question_Score);
        printf("\bPress Enter to Continue.");
        getchar();
        getchar();
        return 1;
    }
    else
    {
        printf("\nWrong Answer !\n");
        printf("The Correct Answer was:%d\n", q->Correct_Answer);
        printf("Score = 0 out of %d\n", q->Question_Score);
        printf("\bPress Enter to Continue.");
        getchar();
        getchar();
        return 0;
    }
}

void random_Qnumber()
{
    srand(time(NULL));
    questions[0] = rand() % 24;
    int i = 1, flag = 1;
    while (i < 10)
    {
        flag = 1;
        questions[i] = rand() % 24;
        for (int j = 0; j < i; j++)
        {
            if (questions[j] == questions[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            i++;
        else
            continue;
    }
}

void setScore(FILE *file, int score, char name[])
{
    if (file == NULL)
        printf("Error opening the file.");

    fprintf(file, "%s %d\n", name, score);
    fclose(file);

    printf("Score saved successfully!\n");
}