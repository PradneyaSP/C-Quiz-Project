#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "global.h"
#include<stdio.h>

void setValues(Question *q, char qt[], char a1[], char a2[], char a3[], char a4[], int ca, int pa, int s1, int s2, char h[]);
void setQuestions(int n);
void askQuestion(Question *q);
void setScore(FILE *file, int score, char *name , float time);
void topScore(FILE *file);
void random_Qnumber();
void topPlayers(FILE *file);
int start();

#endif