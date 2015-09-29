#include "StdAfx.h"
#include "final_exam.h"
#include <iostream>
using namespace std;

Final_exam::Final_exam(void)
{

}
void Final_exam::setlesson(char *lesson)
{
this->lesson=lesson;
}
void Final_exam::getlesson()
{
cout<<"какой экзамен (ГОС или школьный): "<<this->lesson<<endl;
}
Final_exam::~Final_exam(void)
{

}
