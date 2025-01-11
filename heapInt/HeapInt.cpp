#include "HeapInt.hpp"

HeapInt::HeapInt(){
    this->number = new int(0);
}

HeapInt::HeapInt(int number_received){
    this->number = new int(number_received);
}

HeapInt::HeapInt(const HeapInt &heap_int_received){
    this->number = new int (*heap_int_received.number);
}

HeapInt::~HeapInt(){
    delete this->number;
}

void HeapInt::operator=(int number_received){
    *(this->number) = number_received;
}

void HeapInt::operator=(const HeapInt& heap_int_received){
    *(this->number) = *(heap_int_received.number);
}
HeapInt HeapInt::operator+(const HeapInt& heap_int_received){
    return HeapInt(*(this->number) + *(heap_int_received.number));
}

HeapInt HeapInt::operator-(const HeapInt& heap_int_received){
    return HeapInt(*(this->number) - *(heap_int_received.number));
}
bool HeapInt::operator==(const HeapInt& heap_int_received){
    return *(this->number) == *(heap_int_received.number);
}
std::ostream& operator<<(std::ostream &os, HeapInt &p)
{
    return os<<*(p.number);
}

std::istream& operator>>(std::istream& is, HeapInt& p) {
    int temp;
    is >> temp; 
    *(p.number) = temp; 
    return is;
}

