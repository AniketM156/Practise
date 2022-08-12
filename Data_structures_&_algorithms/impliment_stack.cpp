#include<iostream>
using namespace std;
class stack{
    int *data;
    int nextindex;
    int capacity;
    stack(int totalsize){
        data = new int[totalsize];
        nextindex = 0;
        capacity = totalsize;
    } 
public:
    int size(){ 
        return nextindex;
    }

    bool isempty(){
        return nextindex==0;
    }
    void push(int num){
        if(nextindex == capacity){ 
            cout<<"stack is full"<<endl;
            return;
        }
        data[nextindex] = num;
        nextindex++;
    }
    int pop(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        nextindex--;
        return data[nextindex];
    }
    int top(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return data[nextindex-1];
    }

};
int main(){
    stack s;
    s.push(9);
    cout<<s.size();
    return 0;
}