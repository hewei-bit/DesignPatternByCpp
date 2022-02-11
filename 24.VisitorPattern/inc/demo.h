#ifndef DEMO_H
#define DEMO_H

#endif // DEMO_H
class Element;
class ConcreteElementA;
class ConcreteElementB;

class Visitor;
class ConcreteVisitor;

//抽象类访问者 Visitor
class Visitor
{
public:
    Visitor() {}
    virtual ~Visitor() {}
    virtual void visit(ConcreteElementA *) = 0;
    virtual void visit(ConcreteElementB *) = 0;
};

//具体访问者
class ConcreteVisitor : public Visitor
{
public:
    ConcreteVisitor() {}

public:
    //实现一种针对特定元素的访问操作
    void visit(ConcreteElementA *)
    {
        //元素A的访问操作代码
    }
    void visit(ConcreteElementB *)
    {
        //元素B的访问操作代码
    }
};

//抽象元素
class Element
{
public:
    Element() {}
    virtual ~Element() {}
    //声明抽象方法，以一个抽象访问者的指针作为函数参数
    virtual void accept(Visitor *) = 0;
};

//具体元素
class ConcreteElementA : public Element
{
public:
    ConcreteElementA() {}
    virtual ~ConcreteElementA(){};
    void accept(Visitor *visitor)
    {
        visitor->visit(this);
    }
};

class ConcreteElementB : public Element
{
public:
    ConcreteElementB() {}
    virtual ~ConcreteElementB(){};
    void accept(Visitor *visitor)
    {
        visitor->visit(this);
    }
};
