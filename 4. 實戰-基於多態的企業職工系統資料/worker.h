#pragma once //�����Y��󭫽ƥ]�t
#include<iostream>
using namespace std;

class Worker{
public:
    //����ӤH�H��
    virtual void showInfo() = 0;

    //��������W��
    virtual string getDepartmentName()=0;
    
public:
    int m_ID;
    string m_Name;
    int position;
};










