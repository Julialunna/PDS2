#ifndef HEAPINT_H
#define HEAPINT_H
#include <iostream>

class HeapInt{
    private:
    int *number;
    public:
    HeapInt();
    HeapInt(int number_received);
    HeapInt(const HeapInt &heap_int_received);
    ~HeapInt();
    void operator=(int number_received);
    void operator=(const HeapInt& heap_int_received);
    HeapInt operator+(const HeapInt& heap_int_received);
    HeapInt operator-(const HeapInt& heap_int_received);
    bool operator==(const HeapInt& heap_int_received);
    friend std::ostream& operator<<(std::ostream &os, HeapInt &p);
    friend std::istream& operator>>(std::istream& is, HeapInt& p);
};
#endif