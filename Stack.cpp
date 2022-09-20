//
// Created by Anh on 9/20/2022.
//
#include "Stack.h"

Stack::Stack(int size) {
    array = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack() {
    delete[] array;
}

void Stack::push(int value) {
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting " << value << endl;
    array[++top] = value;
}

int Stack::pop() {
    // check for stack underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Removing " << peek() << endl;

    // decrease stack size by 1 and (optionally) return the popped element
    return array[top--];
}

int Stack::peek() {
    if (!isEmpty()) {
        return array[top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}

int Stack::size() const {
    return top + 1;
}

bool Stack::isEmpty() const {
    return top == -1;
}

bool Stack::isFull() const {
    return top == capacity - 1;
}

void Stack::Print(){
    if(!isEmpty()){
        cout<<"My stack :) :"<<endl;
        for(int i=top; i>=0; i--){
            cout<<"|"<<array[i]<<"|"<<endl;
        }
    }else{
        exit(EXIT_FAILURE);
    }
}