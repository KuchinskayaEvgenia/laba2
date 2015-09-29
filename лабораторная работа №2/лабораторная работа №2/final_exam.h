#pragma once
#include "Test.h"
#include "question.h"
#include "checkout.h"
#include "exam.h"
class Final_exam :
	public Exam
{
char *lesson;
public:
Final_exam(void);
void setlesson(char *lesson);
void getlesson();
~Final_exam(void);
};