// STL Nesting using vector of vectors
#include <bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> &v) {
    cout<< "size is "<< v.size()<< endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
    vector<vector<int> > v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        vector <int> temp;
        for (int j = 0; j < n; j++)
        {
            int m;
            cin>>m;
            temp.push_back(m);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++)
    {
        PrintVec(v[i]);
    }
    
    


    return 0;
}