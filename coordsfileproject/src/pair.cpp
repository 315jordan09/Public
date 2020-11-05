#include <iostream>
#include "pair.h"

template <typename T>
BTPair<T>::BTPair(T first, T second){
    setFirst(first);
    setSecond(second);
}
template <typename T>
void BTPair<T>::setFirst(T new_val){
    first = new_val;
}
template <typename T>
void BTPair<T>::setSecond(T new_val){
    second = new_val;
}
template <typename T>
T BTPair<T>::getFirst(){
    return first;
}
template <typename T>
T BTPair<T>::getSecond(){
    return second;
}
template <typename T>
void BTPair<T>::print(){
    std::cout << "The first is: " << first << std::endl << "The second is: " << second << std::endl;
}
template class BTPair<long>;
template class BTPair<char>;
template class BTPair<double>;
template class BTPair<int>;
template class BTPair<unsigned int>;
template class BTPair<float>;
