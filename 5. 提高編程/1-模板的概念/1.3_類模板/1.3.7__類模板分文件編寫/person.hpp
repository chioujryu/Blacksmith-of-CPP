#pragma once
#include <iostream>
using namespace std;

// ============���ҪO============
template<typename T1, typename T2>
class Person
{
private:

public:
    Person(T1 name, T2 age);
    void showPerson();

    T1 m_name;
    T2 m_age;
};

// ============��{���============
//�c�y��� ���~��{
template<typename T1, typename T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    this->m_name = name;
    this->m_age = age;
};

// ============��{���============
//������� ���~��{
template<typename T1, typename T2>
void Person<T1, T2>::showPerson()
{
    cout<<"�m�W:"<<m_name<<"\t"<<"�~��:"<<m_age<<endl;
};