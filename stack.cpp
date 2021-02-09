#include <iostream>
using namespace std;
template <typename T>

class StackUsingArray {
    T *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArray(int totalSize = 100){
        data = new T[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    //SIZE
     int size(){
        return nextIndex;
    }
    //
    bool isEmpty(){
        return nextIndex == 0;
    }
    //
    void push(T integerToPush){
        if(nextIndex==capacity){
            T* newData = new T[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity = 2*capacity;
            //cout<<"Stack FULL"<<endl;
            //return;
        }
        data[nextIndex]=integerToPush;
        nextIndex++;
    }
    T top(){
        if(isEmpty()){
            cout<<"Stack EMPTY!"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
    T pop(){
        if(isEmpty()){
            cout<<"Stack EMPTY";
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
};