#include"workerManager.h"
#include <iostream> 	//�ɤJ��J��X�y�Y���
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;    //�ϥμзǪ��R�W�Ŷ�

//�c�y��� ��l��
WorkManager::WorkManager(){

	//1. ��󤣦s�b
	ifstream ifs;
	ifs.open(all_employees_detail_file_txt,ios::in);

	if (!ifs.is_open()){
		cout<<"���u��Ƥ��s�b"<<endl;

		//��l���ݩ�
		//��l�ƭ��u�H��
		this->m_worker_number_ = 0;
		//��l�ư}�C���w
		this->m_worker_array_ptr_ = nullptr;
		//�N m_file_is_empty_ �令 true
		this->m_file_is_empty_ = true;
		//�������
		ifs.close();
		return;
	}

	//2. ���s�b�A���̭����ťժ�
	char ch;
	ifs>>ch;
	if(ifs.eof())
	{
		cout<<"�w�����u��� txt ���A���̭����ťժ�"<<endl;
		//��l���ݩ�
		//��l�ƭ��u�H��
		this->m_worker_number_ = 0;
		//��l�ư}�C���w
		this->m_worker_array_ptr_ = nullptr;
		//�N m_file_is_empty_ �令 true
		this->m_file_is_empty_ = true;
		//�������
		ifs.close();
		return;
	}

	//3. ���s�b�A�̭��]�����u���
	char ch_2;
	ifs>>ch_2;
	if(!ifs.eof())
	{
		//�N m_file_is_empty_ �令 false
		this->m_file_is_empty_ = false;

		cout<<"�w�����u��� txt ���"<<endl;

		int employee_number_in_txt = this->GetEmployeeNumberFromTXT();
		cout<<"�ثe���u��Ƹ̭����G"<<employee_number_in_txt<<"�ӭ��u"<<endl;

		//��l���ݩ�
		//��l�ƭ��u�H��
		this->m_worker_number_ = employee_number_in_txt;

		//�}�P�Ŷ�
		this->m_worker_array_ptr_ = new Worker * [this->m_worker_number_];
		
		//�N��󤤪��ƾڦs��}�C��
		this->InitEmployee();

        //���եΪ��{���X�A�i�H�������A�A�]�i�H�N�����}
		// for(int i=0;i<this->m_worker_number_;i++){
		// 	cout<<"���u�s���G"<<this->m_worker_array_ptr_[i]->m_ID
		// 		<<"\t���u�m�W"<<this->m_worker_array_ptr_[i]->m_Name
		// 		<<"\t���u¾��"<<this->m_worker_array_ptr_[i]->position<<endl;
		// }
	}

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

//���}�t��
void WorkManager::exitSystem(){
	cout<<"�w��U���A���ϥ�"<<endl;
	system("pause");
	exit(0);
}

//��ܵ��
void WorkManager::SelectionMenuOption(int op){
	

};

//�W�[���u
void WorkManager::AddEmployee(){
	
	//�]�w�n�W�[�����u�ƶq
	cout<<"�п�J�Q�W�[�����u�ƶq"<<endl;
	int add_employee_number = 0;	
	cin>>add_employee_number;


	// �p�G�A��J�����u�ƶq�j�� 0 ���ܡA
	if(add_employee_number > 0){
		//�K�[
		//�p��s�Ŷ��j�p
		// �s�Ŷ��j�p = ��Ӫ������H�� + �s�W�H��
		int new_employee_number = this->m_worker_number_ + add_employee_number;	

		//�}�P�s�Ŷ�
		//�o�Ӱ}�C���C�Ӥ������O�@�ӫ��V Worker ���O������
		//�`���ӻ��A�o�q�{���X�ЫؤF�@�ӥi�H�s��h�� Worker ��H���Ъ��}�C�A�ñN��}�C�j�p���w�� new_employee_number�C
		//��²��ӬO�@���إߤF�n�X�� Worker ��H����
		Worker ** new_employee_array = new Worker*[new_employee_number];		

		//�N��Ŷ��U���e������s�Ŷ��U
		//�N���ۦp�G m_worker_array_ptr_ �w�g�����u�F
		//���s�W�����u�|�A�q�᭱�[�W�h
		if (this->m_worker_array_ptr_ != nullptr){
			for(int i = 0; i < this->m_worker_number_; i++){
				new_employee_array[i] = this->m_worker_array_ptr_[i];
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
			new_employee_array[this->m_worker_number_ + i] = worker;
		};

		//����즳�Ŷ�
		//delete[]�Χ@��O��}�C
		delete[] this->m_worker_array_ptr_;

		//���s�}�C�����V
		this->m_worker_array_ptr_ = new_employee_array;

		//��s�s�����u�H��
		this->m_worker_number_ = new_employee_number;

		//�P�_���u��� csv �{�b�̭�������
		this->m_file_is_empty_ = false;

		//�O�s���u��ƨ���
		this->SaveEmployeeDetail();


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

//�O�s���
void WorkManager::SaveEmployeeDetail(){
	ofstream ofs;
	ofs.open(all_employees_detail_file_txt,ios::out);

	//�N�C�ӤH���ƾڼg�J����
	for(int i = 0; i < this->m_worker_number_; i++)
	{
		ofs<<this->m_worker_array_ptr_[i]->m_ID<<" "
        	<<this->m_worker_array_ptr_[i]->m_Name<<" "
        	<<this->m_worker_array_ptr_[i]->position<<endl;
	}
	//�������
	ofs.close();
}

//����{�b�b txt �ɸ̭������u�H��
int WorkManager::GetEmployeeNumberFromTXT(){

	ifstream ifs;
	ifs.open(all_employees_detail_file_txt,ios::in);

	int id;
	string name;
	int position;

	//���� csv �̭����H�ƥΪ��ܼ�
	int employee_number = 0;

	while(ifs>>id && ifs>>name && ifs>>position){
		employee_number++;
	};

	ifs.close();
	return employee_number;
}

//��l�ƭ��u�C�q�~���ɮ׾ɤJ��{���̭��A��l�Ƶ{���̭������u���
void WorkManager::InitEmployee(){
	ifstream ifs;	//�Ыؿ�X�J�y��H
	ifs.open(all_employees_detail_file_txt,ios::in);	//Ū���ƾ�

    int m_ID;
    string m_Name;
    int position;

	int index = 0;
	//�z�ݭn�b�`�����e�w�q���̪��@�ΰ�C�o�N���۱z�ݭn�b�`�����e�n���o�ǫ��w�A
	//�ñN���̪�l�Ƭ�nullptr�C�M��b�`�������t���s���o�ǫ��w�èϥΥ��̡A����`�������C
	Worker * worker = nullptr;

	while(ifs >> m_ID && ifs >> m_Name && ifs >> position){
		if(position == 1){	//���q���u
			worker = new Employee(m_ID,m_Name,position);
		}
		else if(position == 2){	//�g�z
			worker = new Manager(m_ID,m_Name,position);
		}
		else if(position == 3){	//����
			worker = new Boss(m_ID,m_Name,position);
		}

		this->m_worker_array_ptr_[index] = worker;
		index++;
	};

	ifs.close();	//�������
};

//��ܭ��u�����
void WorkManager::Show_Workers(){
	//�P�_���O�_����
	if(this->m_file_is_empty_){
        cout<<"���u��� csv �ثe�̭�����"<<endl;
    }
	else{
		for(int i = 0 ; i < m_worker_number_ ; i++){
			//�Q�Φh�A�եε{�Ǳ��f
			this->m_worker_array_ptr_[i]->showInfo();
		}
	}
	//�����N��M�z�̹�
	system("pause");
	system("cls");
};

//�R�����u�����
void WorkManager::Delete_Workers(){
	if(this->m_file_is_empty_)
	{
		cout<<"���u��� csv �̭����šA�ҥH�S�F��i�H�R��"<<endl;
	}
	else
	{
		cout<<"�п�J�Q�n�R�������u�s��"<<endl;
		int id;
		cin>>id;

		// Check_Exist_Worker()��ƥΪk
		// �p�G��id���H�A�N�|��^id�C�p�G�S���H�A�N�|��^-1
		int index = this->Check_Exist_Worker(id);
		if(index != -1)	// �������u�s�b�A�åB�R���� index ��m�W�����u
		{
			
			//�ƾګe��
			for(int i = 0; i < this->m_worker_number_ - 1; i++)
            {
                this->m_worker_array_ptr_[i] = this->m_worker_array_ptr_[i + 1];
            };

			//�ѩ�R���F�@�ӤH�A�ҥH���u�`�H�ƭn�� 1
			this->m_worker_number_--;	

			//�ƾڦP�B����
			this->SaveEmployeeDetail();
		}
		
		else
		{
			cout<<"�R������,�S����id"<<endl;
		}
	}

	//�����N��M�z�̹�
	system("pause");
    system("cls");

};

//�P�_���u�O�_�s�b�A�p�G�s�b�N��^���ӭ��u�b�}�C������m�A�p�G���s�b�N��^-1
int WorkManager::Check_Exist_Worker(int worker_id){

	int index = -1;
	for(int i = 0 ; i < m_worker_number_ ; i++){
		if (this->m_worker_array_ptr_[i]->m_ID == worker_id){
			//�����u
			index = i;
            break;
		}
	}
	return index;
};

// �ק���u�����
void WorkManager::ModifyWorkerDetail(){
	if(this->m_file_is_empty_)
	{
		cout<<"���u��� csv �̭����šA�ҥH�S������u��T�i�H�ק�"<<endl;
	}
	else
	{
		cout<<"�A�Q�n�ק諸���u�O�֡A�п�J�L��ID"<<endl;
		int id;
		cin>>id;
		// �p�G��ID���H���ܡA�N�|��^���� ID ���}�C index
		// �p�G����ID�S���H���ܡA�N�|��^ -1
		int index = this->Check_Exist_Worker(id);	
		delete this->m_worker_array_ptr_[index];

		if(index != -1)    // ����즹���u
        {

            cout<<"����즹���u�A�п�J"<<endl;

			cout<<"�A�n�s�W���s ID ��"<<endl;
            int new_id;
			cin>>new_id;

			cout<<"�A�n�s�W���s�W�r��"<<endl;
            string new_name;
			cin>>new_name;

			cout<<"�A�n�s�W���s¾�쬰"<<endl;
			cout<<"1. ���q���u"<<endl;
			cout<<"2. �g�z"<<endl;
			cout<<"3. ����"<<endl;
            int position;
			cin>>position;

			Worker * worker = nullptr;

			switch (position)
			{
			case 1:
				worker = new Employee(new_id,new_name,position);
				break;
			case 2:
				worker = new Manager(new_id,new_name,position);
				break;
			case 3:
				worker = new Boss(new_id,new_name,position);
				break;
			default:
				break;
			}

			this->m_worker_array_ptr_[index] = worker;	// ?Nworker??H??????R?????????

			cout<<"success"<<endl;

			// �N�Ҧ����u��T�s�iTXT�ɮ׸̭�
			this->SaveEmployeeDetail();

		}
		else
		{
			cout<<"�d�L�����u"<<endl;
		}
	}
	//�M�z�ù�����T
	system("pause");
	system("cls");
};

void WorkManager::SearchWorker(){
	if (this->m_file_is_empty_)
	{
		cout<<"���u��� csv �̭����šA�ҥH�S������u��T�i�H�d��"<<endl;
	}
	else
	{
		cout<<"�п�J�n�d�ߪ��覡"<<endl;
		cout<<"1. ��ID�d��"<<endl;
		cout<<"2. �Ωm�W�d��"<<endl;

		int selection;
		cin>>selection;

		if (selection == 1)
		{
			cout<<"�п�J�n�d�䪺ID��"<<endl;
			int id;
			cin>>id;
			int index = Check_Exist_Worker(id);
			if(index != -1)
			{
				this->m_worker_array_ptr_[index]->showInfo();
			}
			else
			{
				cout<<"�d�L���H"<<endl;
			}
		}
		else if (selection == 2)
		{
			cout<<"�п�J�A�n�d�䪺�m�W"<<endl;
			string name;
			cin >> name;
			bool flag = false;	// �p�G flag �� false �N��S�����H
			for (int i = 0 ; i <  m_worker_number_ ; i++)
			{
				if (this->m_worker_array_ptr_[i]->m_Name == name)
				{
					this->m_worker_array_ptr_[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "�d�L���H" << endl;
			}
		}
		else
		{
			cout<<"��J���~"<<endl;
		}
	}
};


WorkManager::~WorkManager(){
	if(this->m_worker_array_ptr_!= nullptr){
		delete[] this->m_worker_array_ptr_;
	}
};

