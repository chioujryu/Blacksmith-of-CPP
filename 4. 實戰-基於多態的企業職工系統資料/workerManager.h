#pragma once    //�����Y��󭫽ƥ]�t
#include <iostream> //�]�t��J��X�y���Y���
#include "worker.h"
using namespace std;    //�ϥμзǪ��R�W�Ŷ�

class WorkManager
{
public:
    //�c�y���
    WorkManager();

    //�i�ܵ��
    void ShowMenu();

    //�h�X�t��
    void exitSystem();

    //��ܵ��
    void SelectionMenuOption(int op);

    //�W�[���u
    void AddEmployee();

    //������󤤪��H��
    int m_employee_number_;

    //���u�}�C�����w
    Worker ** m_employee_array_;  //�o�O���w�����w

    //�R�c���
    ~WorkManager();
};