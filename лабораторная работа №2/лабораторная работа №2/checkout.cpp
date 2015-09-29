#include "StdAfx.h"
#include "checkout.h"
#include <iostream>
using namespace std;Checkout::Checkout(void)
{

}
void Checkout::setfor_age(char *for_age)
{
this->for_age=for_age;
}
void Checkout::getfor_age()
{
cout<<"испытание: "<<this->for_age<<endl;
}
Checkout::~Checkout(void)
{

}