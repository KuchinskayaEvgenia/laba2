#include "StdAfx.h"
#include "Test.h"
#include <iostream>
using namespace std;

Test::Test(void)
{

}
void Test::setball(int ball)
{
this->ball=ball;
}
void Test::getball()
{
cout<<"���������������� ������ � �����?: "<<this->ball<<endl;
}
Test::~Test(void)
{

}