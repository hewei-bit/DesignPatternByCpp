/**
 * @File Name: Singleton.h
 * @Brief : 单例模式
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2022-04-19
 *
 */

#ifndef __SINGLETON_HW_
#define __SINGLETON_HW_

#include <iostream>
#include <string.h>
#include <mutex>

#define Version_0 0
#define Version_1 1
#define Version_2 1
#define Version_3 1
#define Version_4 1
#define Version_5 1
#define Version_6 1

using namespace std;

#if Version_0
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
                printf("创建新的实例\n");
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

#elif Version_2

#elif Version_3

#elif Version_4

#elif Version_5

#elif Version_6

#endif

#endif