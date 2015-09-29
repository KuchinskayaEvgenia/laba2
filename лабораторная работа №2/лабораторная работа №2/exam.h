#pragma once
#include "Test.h"
#include "question.h"
#include "checkout.h"
class Exam:
	public Test, public Question, public Checkout
{
char *name;
public:
Exam(void);
void setname(char *name);
void getname();
~Exam(void);
};



