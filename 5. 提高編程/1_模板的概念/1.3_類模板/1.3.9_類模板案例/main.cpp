# include <iostream>
using namespace std;
#include <typeinfo> 

#include "myarray.hpp"

void test01()
{
    int capacity = 5;

    // 1. �d�ݺc�y��ƬO�_�ҥ�
    MyArray<int>arr01(capacity);
    // 2. �d�ݫ����c�y��ƬO�_�ҥ�
    MyArray<int>arr02(arr01);
    // 3. �d�� operator= �O�_�ҥ�
    MyArray<int>arr03(100);
    arr03 = arr01;

    // 4. �Q�Χ����k�V�Ʋդ����J�ƾ�
    for (int i = 0; i < capacity ; i++)
    {
        arr01.PuahBack(i);
    }
    
    arr01.PrintArray();
    cout<<"GetCapacity = "<<arr01.GetCapacity()<<endl;  
    cout<<"GetSize = "<<arr01.GetSize()<<endl;


    // 5. �Q�Χ��R�k�V�Ʋդ��R���ƾ�
    arr01.PopBack();
    cout<<"���R��"<<endl; 
    cout<<"GetCapacity = "<<arr01.GetCapacity()<<endl;  
    cout<<"GetSize = "<<arr01.GetSize()<<endl;
};

// 6. ���զۭq�ƾ�����
class Person
{
public:
    Person(){} // �q�{�c�y
    Person(string name, int age) // ���Ѻc�y���
    {
        this->m_age = age;
        this->m_name = name;
    }
    string m_name;
    int m_age;
};

// 7. �]�p�@�ӥ��L Person �ƾ����������
void PrintPersonArray(MyArray<Person> & person_array)
{
    for (int i = 0 ; i < person_array.GetSize() ; i++ )
    {
        cout << "�m�W�G" << person_array[i].m_name << " �~�֡G " << person_array[i].m_age << endl;
    }
}

void test02()
{
    // 8. �Ыؤ@�� person �� array
    MyArray<Person> person_arr(10);
    Person p1("�]����", 999);
    Person p2("���H", 20);
    Person p3("�y�t��", 16);
    Person p4("���δf", 24);
    Person p5("����", 30);

    // 9. �N�ƾڴ��J��Ʋդ�
    person_arr.PuahBack(p1);
    person_arr.PuahBack(p2);
    person_arr.PuahBack(p3);
    person_arr.PuahBack(p4);
    person_arr.PuahBack(p5);

    // 10. ���L Person �ƾ�����
    PrintPersonArray(person_arr);

	cout << "pArray���j�p�G" << person_arr.GetSize() << endl;
	cout << "pArray���e�q�G" << person_arr.GetCapacity() << endl;
}

int main()
{
    test01();
}