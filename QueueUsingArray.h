//
// Created by Purohit on 05-03-2021.
//

#ifndef UNTITLED_QUEUEUSINGARRAY_H
#define UNTITLED_QUEUEUSINGARRAY_H
#include <iostream>
using namespace std;
template<typename T>
class QueueUsingArray{
    T* data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
public:
    QueueUsingArray(int s){
        data = new T[s];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=s;
    }

    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size ==0;
    }
    //inserting element
    void enqueue(T ele) {
        if (size == capacity) {
            T* newData = new T[2*capacity];
            int j=0;
            for(int i=firstIndex;i<capacity;i++){
                newData[j]=data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++){
                newData[j]=data[i];
                j++;
            }
            /*cout << "Queue is Full" << endl;
            return;*/
            delete [] data;
            data = newData;
            firstIndex=0;
            nextIndex=capacity;
            capacity*=2;

        }
        data[nextIndex] = ele;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1) {
            firstIndex = 0;
        }
        size++;
    }
    //getting the front element
    T front(){
        if(isEmpty()){
            cout<<"Queue is Empty !"<<endl;
            return 0;
        }
        return data[firstIndex];
    }
    //deleting element
    T dequeue(){
        if (isEmpty()){
            cout<<"Queue is Empty !"<<endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex+1) % capacity;
        size--;
        if (size==0){
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;
    }
};


#endif //UNTITLED_QUEUEUSINGARRAY_H
