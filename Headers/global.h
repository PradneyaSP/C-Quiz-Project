#ifndef GLOBAL_H
#define GLOBAL_H

extern int Guess;
extern int Total;
extern int Life1;
extern int Life2;
extern int questions[10];

typedef struct
{
    char Question_Text[200];
    char Option_1[50];
    char Option_2[50];
    char Option_3[50];
    char Option_4[50];
    int Correct_Answer;
    int Question_Score;
    int show1;
    int show2;
    char Hint[200];
} Question;

typedef struct 
{
    Question p_q[100];
    int Total_Score;
} C_Programming;

typedef struct 
{
    Question e_q[100];
    int Total_Score;
} Engineering_Visualisation;

typedef struct 
{
    Question d_q[100];
    int Total_Score;
} Data_Structure;

typedef struct 
{
    Question c_q[100];
    int Total_Score;
} Computer_Systems;

typedef struct 
{
    Question a_q[100];
    int Total_Score;
} Advanced_Calculus;

typedef struct 
{
    Question g_q[100];
    int Total_Score;
} General;

extern Question q;
extern C_Programming p1;
extern Engineering_Visualisation e1;
extern Data_Structure d1;
extern Computer_Systems c1;
extern Advanced_Calculus a1;
extern General g1;


#endif