/**
 * @File Name: Demo.h
 * @Brief : ģ�巽��demo�������ж��嶨���㷨��ܣ�
 *          ���������з�����������ʵ�ֵ����麯����
 *          ������ֻ��д�򸲸ǻ����л���������û����������
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2021-12-27
 *
 */
#ifndef __DEMO_H__
#define __DEMO_H__

//�����ࣨ���ࣩ
class AbstractClass
{
public:
    virtual ~AbstractClass() {}
    //��������1������������
    void method1() {}
    //��������2����������ʵ��
    virtual void method2() = 0;
    //��������3����Ĭ��ʵ��
    void method3() {}
    //ģ�巽��������һ���㷨�Ŀ������
    void templateMethod()
    {
        method1();
        method2();
        method3();
    }
};

//�����ࣨ�����ࣩ
class ConcreteClass : public AbstractClass
{
public:
    //ʵ�ֻ�������2
    void method2()
    {
    }
    //�ض����������3�����ǻ���ķ���3
    void method3()
    {
    }
};

#endif