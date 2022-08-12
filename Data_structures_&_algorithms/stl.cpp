#include<bits/stdc++.h>
using namespace std;
int main(){
    
//PAIR ------------------>
    pair<int,pair<int,int>> p = {10,{2,5}};
    //cout<<p.first<<"  "<<p.second.first<<"  "<<p.second.second<<endl;

    pair<int,int> arr[] = {{1,2},{3,4}};
    //cout<<arr[1].second;
    
//VECTORS -------------->
    array<int,6> v = {1,2,3,4,5,6};
//IETRATERS ------------->
    cout<<v.begin()<<"  "<<v.end()<<endl;
    // for(auto it : v){
    //     cout<<" printing array "<<it<<endl;
    // }

    vector<int> g(3,100);
    // for(auto it : g){
    //     cout<<it<<endl;
    // }


        deque<int>dq;
        dq.push_back(10);    //10
        dq.emplace_back(20); //10,20
        dq.push_front(30);  //30,10,20
        dq.emplace_front(40);//40,30,10,20
        for(auto it : dq){
            cout<<it<<" ";
        }
        cout<<endl;

//STACK---------------------------------->
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout<<"top element is"<<st.top()<<endl;

    cout<<"size is "<<st.size()<<endl;
    // for(auto it : st){
    //     cout<<it<<"   ";
    // }

    cout<<"to empty stack"<<st.empty()<<endl;

    
return 0;

}


   




