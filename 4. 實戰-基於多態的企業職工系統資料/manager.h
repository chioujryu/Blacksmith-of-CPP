//#pragma once
#include<iostream>
#include "worker.h"
using namespace std;

class Manager: public Worker{
public:
    Manager(int m_ID, string m_name, int position);
    //����ӤH�H��
    virtual void showInfo();   
    //��������W��
    virtual string getDepartmentName();  
};
