#include"boss.h"

Boss::Boss(int m_ID, string m_Name, int position){
    this->m_ID = m_ID;
    this->m_Name = m_Name;
    this->position = position;
};

//����ӤH�H��
void Boss::showInfo(){
    cout << "���u�s���G" << m_ID 
            << "\t���u�m�W�G" << m_Name
            << "\t���u����ID�G" << position 
            <<"\t�u�@�d���G"<<"��manager�u�@�ư�"<< endl;
};  

//��������W��
string Boss::getDepartmentName(){
    cout<<"5465465"<<endl;

};  