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
    WorkManager WM;

    int choice = 0; //�ΨӦs�x�Τ᪺�ﶵ
    while(true){

        //�i�ܵ��
        WM.ShowMenu();
        cout<<"�п�J�A�����"<<endl;
        cin>>choice;    //�����Τ᪺�ﶵ
        switch (choice)
        {
        case 0: //�h�X�޲z�{��
            WM.exitSystem();
            break;
        case 1: //�W�[¾�u�H��
            WM.AddEmployee();
            break;
        case 2: //���¾�u�H��
            break;
        case 3: //�R����¾¾�u
            break;
        case 4: //�ק�¾�u�H��
            break;
        case 5: //�d��¾�u�H��
            break;
        case 6: //���y�s���Ƨ�
            break;
        case 7: //�M�ũҦ�����
            break;
        default:
            cout<<"��J���~�A�Э��s��J"<<endl;
            system("cls");
            break;
        }

    }

    

    system("pause");
}
