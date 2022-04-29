#include <string>
#include<iostream>
#pragma once
const int MAXSIZE = 50;
template<typename T> class Stack {
    T* pStack;
    int top;
public:
    Stack() {
        this->pStack = new T [MAXSIZE];
        this->top = 0;
    }
    void push(const T &item)
    {
        if (top + 1 != MAXSIZE) {
            this->pStack[this->top] = item;
            this->top++;
        }
        else
            throw std::invalid_argument("Stack is full!");
    }
    T pop(){
        if (top != 0)
        {
            T tmp = pStack[this->top - 1];
            this->top--;
            return tmp;
        }
        else throw std::invalid_argument("Stack is empty!");
    }
    void clearStack(){
        std::memset(&(pStack[0]), 0, MAXSIZE);
        top = 0;
    }
    T peek() {
        if (top != 0)
            return pStack[top - 1];
        else throw std::invalid_argument("Stack is empty!");
    }
    bool stackEmpty() const {
        if (this->top == 0)
            return true;
        else
            return false;
    }
    ~Stack() {
        delete[]pStack;
    }
};
