#pragma once
#include<iostream>
#include"worker.h"

//������
class Boss: public Worker{
public:
    //�c�y���
    Boss(int m_ID, string m_Name, int position);
    //����ӤH�H��
    virtual void showInfo(); 
    //��������W��
    virtual string getDepartmentName(); 
};

