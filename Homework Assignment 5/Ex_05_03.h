//
//  Ex_05_03.h
//  Homework Assignment 5
//
//  Created by AJ Cendejas on 6/11/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef Homework_Assignment_5_Ex_05_03_h
#define Homework_Assignment_5_Ex_05_03_h

#include <iostream>
using namespace std;

template<typename T>
class Vector
{
private:
    T* list;
    int items;
    int capacity;
public:
    Vector<T>()
    {}
    
    Vector<T>(int size)
    {
        capacity = size;
        list = new T[capacity];
    }
    
    Vector<T>(int size, T defaultValue)
    {
        capacity = size;
        list = new T[capacity];
        for (int i = 0; i < capacity; i++)
        {
            list[i] = defaultValue;
            items++;
        }
    }
    
    void push_back(T element)
    {
        ensureCapacity();
        list[items++] = element;
    }
    
    void pop_back()
    {
        items--;
    }
    
    const unsigned size()
    {
        return items;
    }
    
    const T at(int index)
    {
        return list[index];
    }
    
    const bool empty()
    {
        if (items == 0)
            return true;
        else
            return false;
    }
    
    void clear()
    {
        items = 0;
    }
    
    void swap(Vector v2)
    {
        for(int i = 0; i < v2.size(); i++)
        {
            push_back(v2.at(i));
        }
        for(int j = 0; j < items; j++)
        {
            for(int k = j; k < items; k++)
            {
                T temp = list[j];
                list[j] = list[k];
                list[k] = temp;
            }
        }
    }
    
    void ensureCapacity()
    {
        if(items >= capacity)
        {
            T* old = list;
            capacity = 2*items;
            list = new T[capacity];
            for (int i = 0; i < items; i++)
            {
                list[i] = old[i];
            }
            delete[] old;
        }
    }
};

#endif
