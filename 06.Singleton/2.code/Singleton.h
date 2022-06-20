/**
 * @File Name: Singleton.h
 * @Brief : ����ģʽ
 * ��֤һ�������һ��ʵ�������ṩһ����ʵ����ȫ�ַ��ʵ㡣 ���������ģʽ��GoF
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2022-04-19
 * @finished Date : 2022-06-18
 * @Statement : finished
 *
 */

#ifndef __SINGLETON_HW_
#define __SINGLETON_HW_

#include <iostream>
#include <string.h>
#include <mutex>

#define Version_0_0 0
#define Version_0_1 0
#define Version_1 0
#define Version_2 0
#define Version_3 1
#define Version_4 1
#define Version_5 1
#define Version_6 1

using namespace std;

#if Version_0_0
// ����ģʽ
class Singleton_Lazy
{
public:
    static Singleton_Lazy *getInstance()
    {
        printf("This is Singleton Lazy mode...\n");
        if (instance == NULL)
        {
            m_mutex.lock();
            if (instance == NULL)
            {
                printf("�����µ�ʵ��\n");
                instance = new Singleton_Lazy();
            }
            m_mutex.unlock();
        }
        return instance;
    }

private:
    Singleton_Lazy() {}

    static Singleton_Lazy *instance;
    static std::mutex m_mutex;
};

Singleton_Lazy *Singleton_Lazy::instance = NULL;
std::mutex Singleton_Lazy::m_mutex;

#elif Version_0_1

// ����ģʽ
class Singleton_Hungry
{
public:
    static Singleton_Hungry *getInstance()
    {
        printf("This Singleton Hungry mode...\n");
        return instance;
    }

private:
    Singleton_Hungry() {}
    static Singleton_Hungry *instance;
};

Singleton_Hungry *Singleton_Hungry::instance = new Singleton_Hungry;

#elif Version_1

class Singleton
{
public:
    static Singleton *Getinstance()
    {
        if (_instance == nullptr)
            _instance == new Singleton();
        return _instance;
    }

private:
    // ��Ҫ��Ĭ�����ɵĺ�����������
    Singleton() {}                             // ����
    ~Singleton() {}                            // ��������
    Singleton(const Singleton &clone) {}       // �������캯��
    Singleton &operator=(const Singleton &) {} // ��ֵ
    static Singleton *_instance;               // static ʵ��
};
// ��̬��Ա��Ҫ��ʼ��
Singleton *Singleton::_instance = nullptr;

#elif Version_2
// �����֮�� ��Ԫ
class Singleton
{
public:
    static Singleton *Getinstance()
    {
        if (_instance == nullptr)
        {
            _instance == new Singleton();
            atexit(Destructor);
        }

        return _instance;
    }

private:
    // ��Ҫ��Ĭ�����ɵĺ�����������
    static void Destructor()
    {
        if (nullptr != _instance)
        {
            delete _instance;
            _instance = nullptr;
        }
    }
    Singleton() {}                             // ����
    ~Singleton() {}                            // ��������
    Singleton(const Singleton &clone) {}       // �������캯��
    Singleton &operator=(const Singleton &) {} // ��ֵ
    static Singleton *_instance;               // static ʵ��
};
// ��̬��Ա��Ҫ��ʼ��
// ������ʹ?�ڲ��࣬����ָ��������� ��ʱ�����̰߳�ȫ����
Singleton *Singleton::_instance = nullptr;

#elif Version_3
// �����֮�� ��Ԫ
class Singleton // ����ģʽ lazy load
{
public:
    static Singleton *GetInstance()
    {
        // std::lock_guard<std::mutex> lock(_mutex); // 3.1 �л��߳�
        if (_instance == nullptr)
        {
            lock_guard<mutex> lock(_mutex); // 3.2
            if (_instance == nullptr)
            {
                _instance = new Singleton();
                // 1. �����ڴ�
                // 2. ���ù��캯��
                // 3. ����ָ��
                // ���̻߳����� cpu reorder����
                atexit(Destructor);
            }
        }
        return _instance;
    }

private:
    static void Destructor()
    {
        if (nullptr != _instance)
        {
            delete _instance;
            _instance = nullptr;
        }
    }
    Singleton() {}                     //����
    Singleton(const Singleton &cpy) {} //��?����
    Singleton &operator=(const Singleton &) {}
    static Singleton *_instance;
    static mutex _mutex;
};
Singleton *Singleton::_instance = nullptr; //��̬��Ա��Ҫ��ʼ��
mutex Singleton::_mutex;                   //��������ʼ��

#elif Version_4

#elif Version_5

#elif Version_6

#endif

#endif