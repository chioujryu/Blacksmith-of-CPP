// ���ҪO�����s�g

# include <iostream>
#include <typeinfo> 
using namespace std;

// ============�Ĥ@�ظѨM�覡============
// �ѨM�覡:�����]�t����
// �sĶ�覡: g++ -o main 1.3.7_���ҪO�����s�g.cpp person.cpp
#include "person.cpp"


// ============�ĤG�ظѨM�覡============
// �ѨM�覡:�N .h �M .cpp�������e�g��@�_�A�N���W�אּ .hpp���
// �sĶ�覡: g++ -o main 1.3.7_���ҪO�����s�g.cpp
#include "person.hpp"


void test01()
{
    Person<string, int> p("���h�f", 24);
    p.showPerson();
}


// ============main���============
int main()
{
    test01();
	return 0;
}