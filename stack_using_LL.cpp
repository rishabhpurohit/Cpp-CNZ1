
template <typename T>
class node{
public:
    T data;
    node<T> * next;

    node(T data){
        this-> data = data;
        next = NULL;
    }
};

template <typename T>
class StackUsingLL{
    node<T>*head;
    int size;
public:
    StackUsingLL(){
        head = nullptr;
        size=0;
    }

    void push(T x){
        node<T>* newNode = new node<T>(x);
        newNode->next = head;
        size++;
        head = newNode;
    }

    T top(){
        if(isEmpty()){
            std::cout<<"STACK IS EMPTY \n";
            return 0;
        }
        return head->data;
    }

    T pop(){
        if(isEmpty()){
            std::cout<<"STACK IS EMPTY \n";
            return 0;
        }
        T ans = head->data;
        size--;
        head = head->next;
        return ans;
    }

    int getsize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }
};