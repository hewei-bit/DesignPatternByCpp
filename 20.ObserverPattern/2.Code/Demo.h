#ifndef __DEMO_H_
#define __DEMO_H_

using namespace std;
#include <list>

// ����۲���
class Observer
{
public:
    virtual ~Observer() {}
    // ������Ӧ���·���
    virtual void update() = 0;
};

// ����۲���
class ConcreteObserver : public Observer
{
public:
    // ��Ӧ��������
    void update()
    {
        // �������
    }
}

#endif
