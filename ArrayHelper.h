#ifndef ARRAYHELPER_H
#define ARRAYHELPER_H

#pragma once
template< typename T >
class ArrayHelper
{
public:
    ArrayHelper();
    ~ArrayHelper();
    Display(T* array, int size, int numberOfElementsInOneLine, int oneElementLength);
    int MaxIndex(T*array, int size);
    T* Merge(t* firstArray, int firstArraySize , T*secondArray, int secondArraySize);
    int MinIndex(T* array, int size );
    void Sort(T*array , int size );
    void Swap(T&operan1 , T&operand2);

private:

};

#endif