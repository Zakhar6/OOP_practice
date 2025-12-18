#pragma once

template <typename T>
class Vector {
private:
    T* array;
    int size;
    int capacity;
public:
    Vector() {
        capacity = 10;
        size = 0;
        array = new T[capacity];
    }
    ~Vector() {
        delete[] array;
    }
    int getSize() {
        return size;
    }
    int getCapacity() {
        return capacity;
    }
    void push_back(T element) {
        if (size >= capacity) {
            capacity *= 2;
            T* newArray = new T[capacity];
            for (int i = 0; i < size; i++)
                newArray[i] = array[i];
            delete[] array;
            array = newArray;
        }
        array[size++] = element;
    }
    void pop_back() {
        if (size > 0) size--;
    }
    T at(int index) {
        return array[index];
    }
    T operator[](int index) {
        return array[index];
    }
};