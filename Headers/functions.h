#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "global.h"
#include<stdio.h>

void setValues(Question *q, char qt[], char a1[], char a2[], char a3[], char a4[], int ca, int pa, int s1, int s2, char h[]);
void setQuestions(int n);
int askQuestion(Question *q);
void setScore(FILE *, int score, char name[]);
void random_Qnumber();

#endif