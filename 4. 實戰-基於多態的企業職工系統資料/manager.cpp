#include "manager.h"

Manager::Manager(int m_ID, string m_Name, int position){
    this->m_ID = m_ID;
    this->m_Name = m_Name;
    this->position = position;
};

//����ӤH�H��
void Manager::showInfo(){
    cout << "���u�s���G" << m_ID 
            << "\t���u�m�W�G" << m_Name
            << "\t���u����ID�G" << position << endl;
};   

//��������W��
string Manager::getDepartmentName(){
    cout<<"�g�z"<<endl;
};  