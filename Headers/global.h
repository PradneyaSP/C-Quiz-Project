#ifndef GLOBAL_H
#define GLOBAL_H

extern int Guess;
extern int Total;
extern int Life1;
extern int Life2;
extern int questions[10];
extern double elapsed;
extern double time_taken;
extern char Name[20];

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
} C_Programming;

typedef struct
{
    Question e_q[100];
} Engineering_Visualisation;

typedef struct
{
    Question d_q[100];
} Data_Structure;

typedef struct
{
    Question c_q[100];
} Computer_Systems;

typedef struct
{
    Question s_q[100];
} System_Programming;

typedef struct
{
    Question g_q[100];
} General;

typedef struct
{
    char name[20];
    int score;
    float time;
} Player;

extern Question q;
extern System_Programming s1;
extern Computer_Systems c1;
extern Data_Structure d1;
extern Engineering_Visualisation e1;
extern General g1;
extern C_Programming p1;
extern Player currentPlayer;
extern Player topPlayer;

#endif