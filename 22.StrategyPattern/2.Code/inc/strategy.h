/**
 * @File Name: strategy.h
 * @Brief :  ����ģʽ--���ڶ����㷨���ļ�
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2022-01-02
 *
 */

#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <stdio.h>
#include <iostream>
using namespace std;

// ���������
class Strategy
{
public:
    Strategy() {}
    virtual ~Strategy() {}
    virtual void sort(int arr[], int N) = 0;
};

// ������ԣ�ð������
class BubbleSort : public Strategy public : BubbleSort()
{
    cout << "ð������" << endl;
} void sort(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
}
;

// ������ԣ�ѡ������
class SelectionSort : public Strategy
{
public:
    SelectionSort()
    {
        printf("ѡ������\n");
    }
    void sort(int arr[], int N)
    {
        int i, j, min;
        for (i = 0; i < N; i++)
        {
            min = i;
            for (j = i + 1; j < N; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
};

// ������ԣ���������
class InsertSort : public Strategy
{
public:
    InsertSort()
    {
        printf("��������\n");
    }
    void sort(int arr[], int N)
    {
        int i, j;
        for (i = 1; i < N; i++)
        {
            for (j = i - 1; j >= 0; j--)
            {
                if (arr[i] > arr[j])
                {
                    break;
                }
            }
            int temp = arr[i];
            for (int k = i - 1; k > j; k--)
            {
                arr[k + 1] = arr[k];
            }
            arr[j + 1] = temp;
        }
    }
};

#endif