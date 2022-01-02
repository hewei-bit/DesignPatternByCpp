/**
 * @File Name: FingerPrintModule.h
 * @Brief : ��һ������ָ�ƽ����㷨��Ӧ��ʵ����ʵ��ģ�巽��
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2021-12-27
 *
 */
#ifndef __FingerPrintModule_H__
#define __FingerPrintModule_H__

#include <stdio.h>
#include <iostream>

using namespace std;
//����
class FingerPrintModule
{

public:
    FingerPrintModule() {}
    virtual ~FingerPrintModule() {}
    void getImage()
    {
        printf("�ɼ�ָ��ͼ��\n");
    }
    void output()
    {
        std::cout << "ָ��ͼ�������" << std::endl;
    }
    //��������ʵ��
    virtual bool isSafeMode() = 0;
    virtual void processImage() = 0;
    virtual void encrypt() = 0;
    virtual void decrypt() = 0;

    //ģ�巽�����㷨���
    void algorithm()
    {
        // 1.��ͼ
        getImage();

        // 2.��ȫģʽ�¼ӽ���
        if (isSafeMode())
        {
            // 2.1����
            encrypt();
            // 2.2����
            decrypt();
        }
        // 3.����Image
        processImage();
        // 4.������
        output();
    }
};

//������
class FingerPrintModuleA : public FingerPrintModule
{
public:
    FingerPrintModuleA() {}
    void processImage()
    {
        cout << "ʹ�õ�һ���㷨 ����ָ��ͼ��" << endl;
    }
    bool isSafeMode()
    {
        cout << "��ȫģʽ" << endl;
        return true;
    }
    void encrypt()
    {
        cout << "ʹ��RSA��Կ����" << endl;
    }
    void decrypt()
    {
        cout << "ʹ��RSA��Կ����" << endl;
    }
};

class FingerPrintModuleB : public FingerPrintModule
{
public:
    FingerPrintModuleB() {}
    void processImage()
    {
        cout << "ʹ�õڶ����㷨 ����ָ��ͼ��" << endl;
    }
    bool isSafeMode()
    {
        cout << "�ǰ�ȫģʽ" << endl;
        return true;
    }
    void encrypt()
    {
    }
    void decrypt() {}
};
class FingerPrintModuleC : public FingerPrintModule
{
public:
    FingerPrintModuleC() {}
    void processImage()
    {
        cout << "ʹ�õ������㷨 ����ָ��ͼ��" << endl;
    }
    bool isSafeMode()
    {
        cout << "��ȫģʽ" << endl;
        return true;
    }
    void encrypt()
    {
        cout << "ʹ��DH��Կ����" << endl;
    }
    void decrypt()
    {
        cout << "ʹ��DH��Կ����" << endl;
    }
};
#endif