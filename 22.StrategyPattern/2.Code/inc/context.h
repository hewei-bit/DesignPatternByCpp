/**
 * @File Name: context.h
 * @Brief :
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 2022-03-24
 *
 */

#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "strategy.h"
#include <stdio.h>
// ��������
class Context
{
public:
    Context()
    {
        arr = nullptr;
        N = 0;
        sortStrategy = nullptr;
    }
    Context(int iArr[], int iN)
    {
        this->arr = iArr;
        this->N = iN;
        sortStrategy = nullptr;
    }
    // 1.��ֹʹ�ñ�����Ĭ�����ɵĺ���
    // 2. delete �ؼ��ֿ������κκ�������������������ĳ�Ա����
    Context(const Context &context) = delete;
    Context &operator=(const Context &) = delete;
    ~Context()
    {
        if (sortStrategy)
        {
            delete sortStrategy;
            sortStrategy = nullptr;
        }
    }

    void setSortStrategy(Strategy *iSortStrategy)
    {
        if (sortStrategy)
        {
            delete sortStrategy;
            sortStrategy = nullptr;
        }
        this->sortStrategy = iSortStrategy;
    }

    void sort()
    {
        this->sortStrategy->sort(arr, N);
        printf("����� ");
        this->print();
    }

    void setInput(int iArr[], int iN)
    {
        this->arr = iArr;
        this->N = iN;
    }

    void print()
    {
        for (int i = 0; i < N; i++)
        {
            printf("%3d ", arr[i]);
        }
        printf("\n");
    }

private:
    Strategy *sortStrategy;
    int *arr;
    int N;
};
#endif