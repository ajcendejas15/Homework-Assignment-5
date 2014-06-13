//
//  Ex_05_04.h
//  Homework Assignment 5
//
//  Created by AJ Cendejas on 6/11/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef Homework_Assignment_5_Ex_05_04_h
#define Homework_Assignment_5_Ex_05_04_h

#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
    srand (time(NULL));
    for (int i = v.size()-1; i > 0; i--)
    {
        int j = rand() % (i+1);
        T temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

#endif