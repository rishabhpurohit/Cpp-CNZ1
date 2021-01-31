
using namespace std;

class node{
public:
    int data;
    node * next;

    node(int data){
        this-> data = data;
        next = NULL;
    }
};

class pair{
public:
    node* head;
    node*tail;
};