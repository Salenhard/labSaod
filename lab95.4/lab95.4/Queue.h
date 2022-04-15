#pragma once
#include<iostream>

const int MAXSIZE = 50;
template <typename T>
class Queue
{

	T* _queue;					// массив
	int _front;					// поз первого элемента
	int _count;					// кол-во элементов
	int _rear;					// поз последнего элемента

public:

	Queue() {
		this->_queue = new T[MAXSIZE];
		this->_front = 0;
		this->_count = 0;
		this->_rear = 0;
	}

	int lenght() const {
		return this->_count;
	}

	bool empty() const {
		if (this->_count == 0)
			return true;
		else
			return false;
	}

	T del() {
		T tmp;
		if (empty() == false)
		{
			tmp = this->_queue[this->_front];
			this->_front = (_front + 1) % MAXSIZE;
			_count--;
			return tmp;
		}
		else
			std::cerr << "Queue is empty!" << std::endl;
	}

	void insert(const T item) {
		if (_count == MAXSIZE) {
			std::cerr << "Queue if full!" << std::endl;
			exit;
		}
		this->_queue[this->_rear] = item;
		this->_rear = (_rear + 1) % MAXSIZE;
		this->_count++;
	}

	T front() const {
		return this->_queue[this->_front];
	}

	void clear() {
		std::memset(&(this->_queue[0]), 0, 50);
		this->_front = 0;
		this->_count = 0;
		this->_rear = 0;
	}

	~Queue() {
		delete[]this->_queue;
	}
};

