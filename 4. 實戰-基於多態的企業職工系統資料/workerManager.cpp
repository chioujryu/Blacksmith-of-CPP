#include"workerManager.h"
#include <iostream> //�]�t��J��X�y���Y���
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;    //�ϥμзǪ��R�W�Ŷ�

WorkManager::WorkManager(){
	this->m_employee_number_ = 0;
	this->m_employee_array_ = nullptr;
};

//�i�ܵ��
void  WorkManager::ShowMenu(){
	cout << "********************************************" << endl;
	cout << "*********  �w��ϥ�¾�u�޲z�t�ΡI **********" << endl;
	cout << "*************  0.�h�X�޲z�{��  *************" << endl;
	cout << "*************  1.�W�[¾�u�H��  *************" << endl;
	cout << "*************  2.���¾�u�H��  *************" << endl;
	cout << "*************  3.�R����¾¾�u  *************" << endl;
	cout << "*************  4.�ק�¾�u�H��  *************" << endl;
	cout << "*************  5.�d��¾�u�H��  *************" << endl;
	cout << "*************  6.���y�s���Ƨ�  *************" << endl;
	cout << "*************  7.�M�ũҦ�����  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
};

void WorkManager::exitSystem(){
	cout<<"�w��U���A���ϥ�"<<endl;
	system("pause");
	exit(0);
}

//��ܵ��
void WorkManager::SelectionMenuOption(int op){
	

};

void WorkManager::AddEmployee(){
	
	//�]�w�n�W�[�����u�ƶq
	cout<<"�п�J�Q�W�[�����u�ƶq"<<endl;
	int add_employee_number = 0;	
	cin>>add_employee_number;


	// �p�G�A��J�����u�ƶq�j�� 0 ���ܡA
	if(add_employee_number > 0){
		//�K�[
		//�p��s�Ŷ��j�p
		int new_employee_number = this->m_employee_number_ + add_employee_number;	// �s�Ŷ��j�p = ��Ӫ������H�� + �s�W�H��

		//�}�P�s�Ŷ�
		//�o�Ӱ}�C���C�Ӥ������O�@�ӫ��V Worker ���O������
		//�`���ӻ��A�o�q�{���X�ЫؤF�@�ӥi�H�s��h�� Worker ��H���Ъ��}�C�A�ñN��}�C�j�p���w�� new_employee_number�C
		//��²��ӬO�@���إߤF�n�X�� Worker ��H����
		Worker ** new_employee_array = new Worker*[new_employee_number];		

		//�N��Ŷ��U���e������s�Ŷ��U
		//�N���ۦp�G m_employee_array_ �w�g�����u�F
		//���s�W�����u�|�A�q�᭱�[�W�h
		if (this->m_employee_array_ != nullptr){
			for(int i = 0; i < this->m_employee_number_; i++){
				new_employee_array[i] = this->m_employee_array_[i];
			}
		}

		//��q�K�[�s�ƾ�
		for(int i = 0; i < add_employee_number; i++){
			int id ; //���u�s��
			string name; //���u�m�W
			int positionSelection; //���¾��

			cout<<"�п�J���uID"<<endl;
			cin>>id;

			cout<<"�п�J���u�m�W"<<endl;
			cin>>name;

			cout<<"�п��¾��"<<endl;
			cout<<"1. ���q���u"<<endl;
			cout<<"2. �g�z"<<endl;
			cout<<"3. ����"<<endl;
            cin>>positionSelection;


			Worker * worker = nullptr;
			switch (positionSelection)
			{
			case 1:  //���q���u
			    worker = new Employee(id,name,1);
				break;
			case 2:  //�g�z
			    worker = new Manager(id,name,2);
			    break;
			case 3:  //����
			    worker = new Boss(id,name,3);
				break;
			default:
                break;
			}

			//�N�Ыح��u�A�O�s��Ʋդ�
			new_employee_array[this->m_employee_number_ + i] = worker;
		};

		//����즳�Ŷ�
		//delete[]�Χ@��O��}�C
		delete[] this->m_employee_array_;

		//���s�}�C�����V
		this->m_employee_array_ = new_employee_array;

		//��s�s�����u�H��
		this->m_employee_number_ = new_employee_number;

		//���\�K�[��A�O�s����


		//��ܲK�[���\
		cout<<"�w�g���\�K�["<<add_employee_number<<"�W�s���u�I�I"<<endl;


	}
	else
	{
		cout<<"��J���~�A�Э��s��J"<<endl;
	}
	//�����N���A�M�z�ù�
	system("pause");
	system("cls");


};



WorkManager::~WorkManager(){
    
};

