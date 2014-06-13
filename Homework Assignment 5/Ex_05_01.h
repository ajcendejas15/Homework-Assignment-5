//
//  Ex_05_01.h
//  Homework Assignment 5
//
//  Created by AJ Cendejas on 6/11/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef Homework_Assignment_5_Ex_05_01_h
#define Homework_Assignment_5_Ex_05_01_h

#include <iostream>
#include <string>
using namespace std;

template<typename T>
int linearSearch(const T list[], T key, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (key == list[i])
            return i;
    }
    return -1;
}

#endif
