#include <string>
#include<iostream>
#pragma once
template<typename T> class Stack {
    T* pStack;
    int top;
public:
    Stack() {
        this->pStack = new T [50];
        this->top = 0;
    }
    void push(const T &item)
    {
        if (top + 1 != 50) {
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
            this->pStack[this->top - 1] = NULL;
            this->top--;
            return tmp;
        }
        else throw std::invalid_argument("Stack is empty!");
    }
    void clearStack(){
        std::memset(&(pStack[0]), 0, 50);
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
