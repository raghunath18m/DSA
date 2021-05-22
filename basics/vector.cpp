// vector is resizable array

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    
}

int main(){
    vector<int> vec1;
    int element,size;
    cout<<"required size";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter element";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    
    return 0;
}

