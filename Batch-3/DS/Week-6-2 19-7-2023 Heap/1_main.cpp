/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int> v;
    MaxHeap(){

    }

    void up_heapify(int idx){
        while(0<idx && v[idx]>v[(idx-1)/2]){
            swap(v[idx],v[(idx-1)/2]);
            idx = (idx-1)/2;
        }

    }

    //O(logn)
    void push(int val){
        v.push_back(val);
        up_heapify(v.size()-1);        
    }

    void printHeap(){
        for(int val:v){
            cout<<val<<" ";
        }
        cout<<'\n';
    }

    void down_heapify(int idx){
        while(true){
            int largest = idx;
            int l = 2*idx+1;
            int r = 2*idx+2;

            if(l<v.size() && v[largest]<v[l]){
                largest = l;
            }
            if(r<v.size() && v[largest]<v[r]){
                largest = r;
            }
            if(largest==idx) break;

            swap(v[idx],v[largest]);
            idx = largest;
        }

    }

    //O(logn)
    void pop(int idx){
        swap(v[idx],v[v.size()-1]);
        v.pop_back();
        down_heapify(idx);
    }

    //O(1)
    int getMax(){
        return v[0];
    }

    //O(n)
    void buildHeapFromArray(vector<int>&arr){
        v = arr;
        int n = v.size();
        int lastNonLeafNode = n/2-1;

        for(int i = lastNonLeafNode;i>=0;i--){
            down_heapify(i);
        }
    }


};

int main(){
    MaxHeap mx;

    mx.push(1);
    mx.push(2);
    mx.push(3);
    mx.push(4);
    mx.push(5);

    mx.printHeap();

    mx.pop(0);
    mx.printHeap();

    cout<<mx.getMax()<<endl;

    vector<int> arr = {1,2,3,4,5};
    mx.buildHeapFromArray(arr);
    mx.printHeap();         
              
    return 0;
}
