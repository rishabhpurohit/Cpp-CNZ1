#include <iostream>
using namespace std;

class StackUsingArray {
    int *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArray(int totalSize = 100){
        data = new int[totalSize];
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
    void push(int integerToPush){
        if(nextIndex==capacity){
            int* newData = new int[2*capacity];
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
    int top(){
        if(isEmpty()){
            cout<<"Stack EMPTY!"<<endl;
            return -1;
        }
        return data[nextIndex-1];
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack EMPTY";
            return -1;
        }
        nextIndex--;
        return data[nextIndex];
    }
};