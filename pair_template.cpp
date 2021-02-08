//
// Created by Purohit on 08-02-2021.
//
#include "pair_template.h"

template <typename T>

class Pair_T{
    T x;
    T y;
public:
    void setX(T x){
        this -> x = x;
    }
    T getX(){
        return x;
    }
    void setY(T x){
        this -> y = y;
    }
    T getY(){
        return y;
    }
};