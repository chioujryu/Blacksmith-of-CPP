#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;

int main(){

//     //���յ{���X
//     Worker * worker = nullptr;
//     worker = new Boss(1,"�j�ӭ�",5);
//     worker->showInfo();
//     cout<<worker<<endl;
//     delete worker;
    
//     Worker * worker1 = nullptr;
//     worker1 = new Boss(2,"�j���k",5);
//     worker->showInfo();
//     cout<<worker<<endl;
//     delete worker;
// }


    
    //��Ҥƺ޲z��H
    WorkManager workerManager;

    int choice = 0; //�ΨӦs�x�Τ᪺�ﶵ
    while(true){

        //�i�ܵ��
        workerManager.ShowMenu();
        cout<<"�п�J�A�����"<<endl;
        cin>>choice;    //�����Τ᪺�ﶵ
        switch (choice)
        {
        case 0: //�h�X�޲z�{��
            workerManager.exitSystem();
            break;
        case 1: //�W�[¾�u�H��
            workerManager.AddEmployee();
            break;
        case 2: //���¾�u�H��
            workerManager.Show_Workers();
            break;
        case 3: //�R����¾¾�u
        {
            //���եΪ��{���X�A�����ñ��A�A�]�i�H�A���}��
            // int result = workerManager.Check_Exist_Worker(1);
            // if (result == -1)
            // {
            //     cout << "���u���s�b" << endl;
            // }
            // else
            // {
            //     cout << "���u�s�b" << endl;    
            // }

            workerManager.Delete_Workers();
            break;
        }
        case 4: //�ק�¾�u�H��
            workerManager.ModifyWorkerDetail();
            break;
        case 5: //�d��¾�u�H��
            workerManager.SearchWorker();
            break;
        case 6: //���y�s���Ƨ�
            workerManager.SortWorker();
            break;
        case 7: //�M�ũҦ�����
            workerManager.CleanFile();
            break;
        default:
            cout<<"��J���~�A�Э��s��J"<<endl;
            system("cls");
            break;
        }

    }

    

    system("pause");
}
