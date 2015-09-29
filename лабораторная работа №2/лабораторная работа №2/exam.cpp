#include "StdAfx.h"
#include "exam.h"
#include <iostream>
using namespace std;

Exam::Exam(void)
{

}
void Exam::setname(char *name)
{
this->name=name;

}
void Exam::getname()
{
cout<<"название предмета: "<<this->name<<endl;
}
Exam::~Exam(void)
{

}
