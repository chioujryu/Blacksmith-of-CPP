// #pragma once 
using namespace std;
#include<iostream>
#include"worker.h"

class Employee: public Worker{
public:
    //�c�y���
    Employee(int m_ID,string m_Name,int position);

    //����ӤH�H��
    virtual void showInfo();  // �o�̤��i�H�ίµ��ơA�]���b�����w�g�O�µ��ƤF

    //��������W��
    virtual string getDepartmentName();     // �o�̤��i�H�ίµ��ơA�]���b�����w�g�O�µ��ƤF
};

