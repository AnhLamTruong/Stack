//
// Created by Anh on 9/20/2022.
//

//Stack implementation using an array

#ifndef STACK_STACK_H
#define STACK_STACK_H
#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 10
// A class to represent a stack
class Stack
{
public:
    Stack(int size);         // constructor
    ~Stack();                       // destructor

    void push(int value);
    int pop();

    int peek();

    int size() const;
    bool isEmpty() const;
    bool isFull() const;

    void Print();
private:
    int *array;
    int top;
    int capacity;
};



#endif //STACK_STACK_H
