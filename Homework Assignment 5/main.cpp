//
//  main.cpp
//  Homework Assignment 5
//
//  Created by AJ Cendejas on 6/11/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include <iostream>
#include <string>
#include "Ex_05_01.h"
#include "Ex_05_02.h"
#include "Ex_05_03.h"
#include "Ex_05_04.h"
#include "Ex_05_05.h"

int main()
{
    //Ex_05_01
    int listi[] = {1, 4, 4, 2, 5, -3, 6, 2};
    string lists[] = {"Bear", "AJ", "Ty", "Daniel"};
    double listd[] = {1.2, 3.4, 5.6, 7.8, 9.0};
    string s = "AJ";
    cout << "2 is index: " << linearSearch(listi, 2, 8) << " in \"listi.\"\n";
    cout << "\"AJ\" is index: " << linearSearch(lists, s, 4) << " in \"lists.\"\n";
    cout << "5.6 is index: " << linearSearch(listd, 5.6, 5) << " in \"listd.\"\n";

    //Ex_05_02
    cout << endl << boolalpha;
    cout << "\"listi\" sorted: " << isSorted(listi, 8) << endl;
    cout << "\"lists\" sorted: " << isSorted(lists, 4) << endl;
    cout << "\"listd\" sorted: " << isSorted(listd, 5) << endl << endl;
    
    //Ex_05_03
    Vector<int> v1(8);
    for(int i = 0; i < 8; i++)
        v1.push_back(listi[i]);
    for(int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " ";
    Vector<string> v2(4);
    for(int i = 0; i < 4; i++)
        v2.push_back(lists[i]);
    Vector<string> v3(4);
    v3.swap(v2);
    v3.pop_back();
    cout << endl << endl;
    for(int i = 0; i < v2.size(); i++)
        cout << v2.at(i) << " ";
    cout << endl << endl;
    for(int i = 0; i < v3.size(); i++)
        cout << v3.at(i) << " ";
    cout << endl << endl;

    //Ex_05_04
    vector<int> v(10);
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    shuffle(v);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    
    //Ex_05_05
    Account a1("George", 1122, 1000);
    a1.setAnnualInterestRate(1.5);
    a1.deposit(30);
    a1.deposit(40);
    a1.deposit(50);
    a1.withdraw(5);
    a1.withdraw(4);
    a1.withdraw(2);
    cout << endl << "\nAccount Summary:\n";
    cout << "Name: " << a1.getName() << "    Annual Interest Rate: " << a1.getAnnualInterestRate() << endl;
    cout << "Balance: " << a1.getBalance() << endl;
    cout << "\nTransactions:\n";
    for (int i = 0; i < a1.getTransactions().size(); i++) {
        cout << "\nNumber: " << i+1 << endl;
        cout << "Type: " << a1.getTransactions().at(i).getType() << endl;
        cout << "Amount: " << a1.getTransactions().at(i).getAmount() << endl;
        cout << "Balance: " << a1.getTransactions().at(i).getBalance() << endl;
    }
}