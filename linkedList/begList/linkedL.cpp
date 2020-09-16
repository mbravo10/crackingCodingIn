#include <iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
};

class linkedL{
    private: 
        Node * head;
        int size;
    public:
        linkedL(){ //Constructor 
            head = nullptr;
            size = 0;
        }

        void insertBeg(int value){
            Node* temp = new Node;
            if(head == nullptr){
                temp->data = value;
                temp->next = nullptr;
                head = temp;
                size++;
            }
            else {
                temp->next = head;
                temp->data = value;
                head = temp;
                size++;
            }
        }

        void printL(){
            Node* temp1;
            temp1 = head;
            while(temp1 != nullptr){
                cout << temp1->data << " ";
                temp1 = temp1->next;
            }
        }

        void deleteL(int value){
            Node *t, *q;
            t = head; 
            q = nullptr;
            if(t->data == value){
                head = head->next;
                delete t;
                size--;
            }
            else {
                while( t->data != value){
                q = t;
                t = t->next;
                }
                q->next = t->next;
                delete t;
                size--;
            }
            
        }

        void deleteDupl(){
            Node *curr = head;
            Node *q, *p;
            while(curr != nullptr){
                q = nullptr;
                p = curr;
                while(p != nullptr){
                    q = p;
                    p = p->next;
                    if(p == nullptr){
                        break;
                    }
                    if(p->data == curr->data){
                        q->next = p->next;
                        delete p;
                        p = q->next;
                        size--;
                    }
                }
                curr = curr->next;  
            } 
        }

        int getKthTerm(int k){
            Node *t = head;
            int i = 1, term = k;
            for(i; i < size-k; i++){
                t = t->next;
            }
            return t->data;
        }

};


int main(){
    linkedL ll;


    ll.insertBeg(6);
    ll.insertBeg(11);
    ll.insertBeg(5);
    ll.insertBeg(22);
    cout << ll.getKthTerm(2) << endl;
    cout << ll.getKthTerm(0) << endl;
    

    ll.printL();

    return 0;
}