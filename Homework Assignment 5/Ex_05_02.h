//
//  Ex_05_02.h
//  Homework Assignment 5
//
//  Created by AJ Cendejas on 6/11/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef Homework_Assignment_5_Ex_05_02_h
#define Homework_Assignment_5_Ex_05_02_h

#include <iostream>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
    for (int i = 0; i < size-1; i++) //Stops 1 before the final item so last isn't compared to nothing.
    {
        if (list[i] > list[i+1]) //Compares each item to the next to see if it is out of order.
            return false;
    }
    return true; //If none of the items are out of order, the function returns true.
}

#endif
