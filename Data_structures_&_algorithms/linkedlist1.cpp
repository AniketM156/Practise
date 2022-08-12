#include<iostream>
using namespace std;

class Node {
public : 
    int data ; 
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* takeinput(){
    int data;
    cin>>data;
    Node *head = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp->next = NULL){
                temp = temp->next;  
            }
            temp->next = newNode;
        }
        cin>>data;
    }
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    //statically
    /*
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);
    Node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
    */
    Node *head = takeinput();
    print(head);

    return 0;
}