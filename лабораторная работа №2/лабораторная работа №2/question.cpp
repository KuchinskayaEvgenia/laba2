#include "StdAfx.h"
#include "question.h"
#include <iostream>
using namespace std;

Question::Question(void)
{

}
void Question::setkol_vo(char *kol_vo)
{
this->kol_vo=kol_vo;
}
void Question::getkol_vo()
{
cout<<"���������� ��������: "<<this->kol_vo<<endl;
}

Question::~Question(void)
{

}