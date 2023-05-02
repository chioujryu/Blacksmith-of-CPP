#pragma once    //�����Y��󭫽ƥ]�t
#include <iostream> //�]�t��J��X�y���Y���
#include "worker.h"
using namespace std;    //�ϥμзǪ��R�W�Ŷ�

#include<fstream>
#define all_employees_detail_file_txt "all_employees_detail.txt"

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

    //�O�s���
    void SaveEmployeeDetail();

    //������󤤪��H��
    int m_worker_number_;

    //���u�}�C�����w�A�̭�������worker��H���w
    Worker ** m_worker_array_ptr_;  //�o�O���w�����w

    //�P�_���O�_����
    bool m_file_is_empty_;

    //����������csv�����H��
    int GetEmployeeNumberFromTXT();

    //��l�ƭ��u�C�q�~���ɮ׾ɤJ��{���̭��A��l�Ƶ{���̭������u���
    void InitEmployee();

    //��ܭ��u�����
    void Show_Workers();

    //�R�����u�����
    void Delete_Workers();

    //�P�_���u�O�_�s�b�A�p�G�s�b�N��^���ӭ��u�b�}�C������m�A�p�G���s�b�N��^-1
    int Check_Exist_Worker(int worker_id);

    //�ק���u����T
    void ModifyWorkerDetail();

    //�d����u�A�i�H���y(id, �m�W, ¾��)�A�Ӭd��
    void SearchWorker();

    //�R�c���
    ~WorkManager();
};