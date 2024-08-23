#include<bits/stdc++.h>
using namespace std;
void printrecursively(stack<int>& st){
    if(st.size()==0) return;
     int x = st.top();
     st.pop();
     printrecursively(st);
     cout<<x<<" ";
     st.push(x);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int>helper;
    int k;
    cout<<"enter the value of k : ";
    cin>>k;
    int n = st.size();
    int i=0;
    while( st.size()>0 && i!=n-k){
        helper.push(st.top());
        st.pop();
        i++;
    }
    st.pop();
    while(helper.size()!=0){
        st.push(helper.top());
        helper.pop();
    }
    if(k>st.size()) cout<<"invalid Input"<<endl;
    else  printrecursively(st);
    
    return 0;
}