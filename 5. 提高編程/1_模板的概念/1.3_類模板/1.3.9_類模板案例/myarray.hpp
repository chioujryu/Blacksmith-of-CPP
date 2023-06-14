#pragma once
# include <iostream>
using namespace std;
#include <typeinfo> 

// 1. �Ы����ҪO
template<typename T>
class MyArray
{
private:
    T * p_address;  // ���w���V��϶}�P���u��Ʋ�
    int m_capacity; // �Ʋծe�q
    int m_size; // �Ʋդj�p
    
public:
    // 2. ���Ѻc�y��� 
    MyArray(int capacity) // �Ѽ� �e�q
    {
        cout<<"MyArray�����Ѻc�y��ƽե�"<<endl;
        this->m_capacity = capacity;  // �`�@��Array�e�q
        this->m_size = 0;  // Array �̭��{�b�����X�ӪŶ�
        this->p_address = new T[this->m_capacity];  // �}�P�s�����
    };

    // 3. �����c�y���
    MyArray(const MyArray & arr)
    {
        cout<<"MyArray�������c�y��ƽե�"<<endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;

        // ���q�����i�H���� = ���O���w�����ݭn�`����
        //this->p_address = arr.p_address; // ���w������ȵ����w

        // �`����
        this->p_address = new T[arr.m_capacity];

        // �Narr�����ƾڳ������L��
        for (int i = 0 ; i < this->m_size ; i++)
        {
            //�p�GT?��H�A�ӥB�٥]�t���w�A�����ݭn���� = �ާ@�šA�]?�o�ӵ������O �c�y �ӬO���
            this->p_address[i] = arr.p_address[i];
        }
    }

    // 4. operator= �ާ@�� ����L�������D 
    MyArray & operator=(const MyArray & arr)
    {
        cout<<"MyArray�� operator= �ե�"<<endl;
        // ���P�_��Ӱ�ϬO�_���ƾڡA�p�G���A������
        if(this->p_address != NULL)
        {
            delete[] this->p_address;
            this->p_address = NULL;
            this->m_capacity = 0;
            this->m_size = 0;
        }

        // �`����
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->p_address = new T[arr.m_capacity];
        for (int i = 0; i < this->m_size ; i++)
        {
            this->p_address[i] = arr.p_address[i];
        }
        return *this; // �]���o�Ө�ƬO MyArray �}�Y�A�ҥH�n��^�ۤv
    }

    // 5. �����k
    void PuahBack(const T & val) // �ϥ� const �O�]������ק�val
    {
        // �P�_�e�q�O�_����j�p
        if(this->m_capacity == this->m_size)
        {
            return;
        }
        this->p_address[this->m_size] = val; // �b�Ʋժ��������J�ƾ�
        this->m_size++; // ��s�Ʋդj�p
    }

    // 6. ���R�k
    void PopBack()
    {
        //���Τ�X�ݤ���̫�@�Ӥ����A�Y�����R�A�޿�R��
        if (this->m_size == 0)
        {
            return;
        }
        this->m_size--;
    }

    // 7. ���Τ�q�L�U�Ъ��覡�X�ݼƲդ������� arr[0] = 100
    T & operator[] (int index)
    {
        return this->p_address[index];
    }

    // 8. ��^�Ʋծe�q
    int GetCapacity()
    {
        return this->m_capacity;
    }

    // 9. ��^�Ʋդj�p
    int GetSize()
    {
        return this->m_size;
    }

    // 10. �]�pPrintArray���
    void PrintArray()
    {
        for (int i = 0 ; i < this->m_size ; i++ )
        {
            cout<<this->p_address[i]<<endl;
        }
    }

    // 11. �R�c���
    ~MyArray()
    {
        cout<<"MyArray���R�c��ƽե�"<<endl;
        if (this->p_address != NULL)
        {
            delete[] this->p_address;
            this->p_address = NULL;
        }
    }
};