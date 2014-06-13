//
//  Ex_05_05.h
//  Homework Assignment 5
//
//  Created by AJ Cendejas on 6/11/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef Homework_Assignment_5_Ex_05_05_h
#define Homework_Assignment_5_Ex_05_05_h

#include <iostream>
#include <vector>
using namespace std;

class Date
{
private:
    int year, month, day;
public:
    Date()
    {
        int totalsecs = time(0);
        int totaldays = totalsecs/86400;
        int totalyears = totaldays/365.25;
        year = totalyears+1970;
        int currentday = totaldays % 365;
        int leapdays = totalyears / 4 - 1;
        if (currentday < 31){
            month = 1;
            day = currentday-leapdays;}
        else if(currentday < 59){
            month = 2;
            day = currentday - 31 - leapdays;}
        else if (currentday < 90){
            month = 3;
            day = currentday - 59 - leapdays;}
        else if (currentday < 120){
            month = 4;
            day = currentday - 90 - leapdays;}
        else if (currentday < 151){
            month = 5;
            day = currentday - 120 - leapdays;}
        else if (currentday < 181){
            month = 6;
            day = currentday - 151 - leapdays;}
        else if (currentday < 212){
            month = 7;
            day = currentday - 181 - leapdays;}
        else if (currentday < 243){
            month = 8;
            day = currentday - 212 - leapdays;}
        else if (currentday < 273){
            month = 9;
            day = currentday - 243 - leapdays;}
        else if (currentday < 304){
            month = 10;
            day = currentday - 273 - leapdays;}
        else if (currentday < 334){
            month = 11;
            day = currentday - 304 - leapdays;}
        else{
            month = 12;
            day = currentday - 334 - leapdays;}
    }

    
    Date(int elapsed)
    {
        int totalsecs = elapsed;
        int totaldays = totalsecs/86400;
        int totalyears = totaldays/365.25;
        year = totalyears+1970;
        int currentday = totaldays % 365;
        int leapdays = totalyears / 4;
        if (currentday < 31){
            month = 1;
            day = currentday-leapdays;}
        else if(currentday < 59){
            month = 2;
            day = currentday - 31 - leapdays;}
        else if (currentday < 90){
            month = 3;
            day = currentday - 59 - leapdays;}
        else if (currentday < 120){
            month = 4;
            day = currentday - 90 - leapdays;}
        else if (currentday < 151){
            month = 5;
            day = currentday - 120 - leapdays;}
        else if (currentday < 181){
            month = 6;
            day = currentday - 151 - leapdays;}
        else if (currentday < 212){
            month = 7;
            day = currentday - 181 - leapdays;}
        else if (currentday < 243){
            month = 8;
            day = currentday - 212 - leapdays;}
        else if (currentday < 273){
            month = 9;
            day = currentday - 243 - leapdays;}
        else if (currentday < 304){
            month = 10;
            day = currentday - 273 - leapdays;}
        else if (currentday < 334){
            month = 11;
            day = currentday - 304 - leapdays;}
        else{
            month = 12;
            day = currentday - 334 - leapdays;}
    }

    
    Date(int Day, int Month, int Year)
    {
        day = Day;
        month = Month;
        year = Year;
    }
    
    int getDay() {return day;}
    int getMonth() {return month;}
    int getYear() {return year;}
    
    void setDate(int elapseTime)
    {
        int totalsecs = elapseTime;
        int totaldays = totalsecs/86400;
        int totalyears = totaldays/365.25;
        year = totalyears+1970;
        int currentday = totaldays % 365;
        int leapdays = totalyears / 4;
        if (currentday < 31){
            month = 1;
            day = currentday-leapdays;}
        else if(currentday < 59){
            month = 2;
            day = currentday - 31 - leapdays;}
        else if (currentday < 90){
            month = 3;
            day = currentday - 59 - leapdays;}
        else if (currentday < 120){
            month = 4;
            day = currentday - 90 - leapdays;}
        else if (currentday < 151){
            month = 5;
            day = currentday - 120 - leapdays;}
        else if (currentday < 181){
            month = 6;
            day = currentday - 151 - leapdays;}
        else if (currentday < 212){
            month = 7;
            day = currentday - 181 - leapdays;}
        else if (currentday < 243){
            month = 8;
            day = currentday - 212 - leapdays;}
        else if (currentday < 273){
            month = 9;
            day = currentday - 243 - leapdays;}
        else if (currentday < 304){
            month = 10;
            day = currentday - 273 - leapdays;}
        else if (currentday < 334){
            month = 11;
            day = currentday - 304 - leapdays;}
        else{
            month = 12;
            day = currentday - 334 - leapdays;}
    }
};

class Transaction
{
private:
    Date date;
    char type;
    double amount;
    double balance;
    string description;
    
public:
    Transaction(char Type, double Amount, double Balance, string Description)
    {
        type = Type;
        amount = Amount;
        balance = Balance;
        description = Description;
    }
    
    const char getType() {return type;}
    const double getAmount() {return amount;}
    const double getBalance() {return balance;}
    const string getDescription() {return description;}
};

class Account
{
private:
    int ID;
    double balance;
    double annualInterestRate;
    string name;
    vector<Transaction> transactions;
    
public:
    Account()
    {
        ID = 0;
        balance = 0;
        annualInterestRate = 0;
    }
    
    Account (string Name, int newID, double newBalance)
    {
        name = Name;
        ID = newID;
        balance = newBalance;
    }
    
    int getID() {return ID;}
    void setID(int newID) {ID = newID;}
    double getBalance() {return balance;}
    void setBalance(double newBalance) {balance = newBalance;}
    double getAnnualInterestRate() {return annualInterestRate;}
    void setAnnualInterestRate(double newRate) {annualInterestRate = newRate;}
    double getMonthlyInterestRate() {return annualInterestRate/12.0;}
    string getName() {return name;}
    vector<Transaction> getTransactions() {return transactions;}
    void withdraw(double amount)
    {
        balance -= amount;
        transactions.push_back(Transaction('W', amount, balance, "Withdrawal"));
    }
    
    void deposit (double amount)
    {
        balance += amount;
        transactions.push_back(Transaction('D', amount, balance, "Deposit"));
    }
    
};

#endif
