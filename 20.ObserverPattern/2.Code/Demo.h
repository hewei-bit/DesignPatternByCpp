#ifndef __DEMO_H_
#define __DEMO_H_

using namespace std;
#include <list>

// 抽象观察者
class Observer
{
public:
    virtual ~Observer() {}
    // 声明响应更新方法
    virtual void update() = 0;
};

// 具体观察者
class ConcreteObserver : public Observer
{
public:
    // 响应方法更新
    void update()
    {
        // 具体操作
    }
}

#endif
