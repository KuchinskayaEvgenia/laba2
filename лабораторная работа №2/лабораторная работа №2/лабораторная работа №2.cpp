#include "stdafx.h"
#include "exam.h"
#include "final_exam.h"
#include "question.h"
#include "Test.h"
#include "checkout.h"
#include "locale"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
setlocale(LC_ALL,"rus");
Exam a;
a.setname("������� ����");
a.getname();
a.setfor_age("�������� ���������");
a.getfor_age();
a.setball(4);
a.getball();
a.setkol_vo("20");
a.getkol_vo();

cout<<endl;

Final_exam b;
b.setlesson("��������");
b.getlesson();
b.setname("��������");
b.getname();
b.setfor_age(" ���������� ������ � ����������");
b.getfor_age();
b.setball(4);
b.getball();
b.setkol_vo("20");
b.getkol_vo();
cout<<endl;

Question c;
c.setkol_vo("20");
c.getkol_vo();

cout<<endl;

Test d;
d.setball(4);
d.getball();
cout<<endl;
return 0;

Checkout f;
f.setfor_age("�������� ���������");
f.getfor_age();
cout<<endl;

}