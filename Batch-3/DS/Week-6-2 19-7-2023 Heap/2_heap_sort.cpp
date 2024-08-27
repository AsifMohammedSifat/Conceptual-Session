Problem LinK: https://leetcode.com/problems/sort-an-array/


class MaxHeap
{
public:
    vector<int> nodes;
    MaxHeap()
    {
    }

    // O(logn)
    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    void push(int val)
    {
        nodes.push_back(val);
        up_heapify(nodes.size() - 1);
    }

    void down_heapify(int idx)
    {
        int largest = idx;
        while (1)
        {
            int l = idx * 2 + 1;
            int r = idx * 2 + 2;
            if (l < nodes.size() && nodes[l] > nodes[largest])
                largest = idx * 2 + 1;
            if (r < nodes.size() && nodes[r] > nodes[largest])
                largest = idx * 2 + 2;
            if (idx == largest)
                break;
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

    void pop(int idx)
    {
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    void buildHeapFromArray(vector<int> &arr)
    {
        nodes = arr;
        int lastLeafNode = arr.size() / 2 - 1;

        for (int i = lastLeafNode; i >= 0; i--)
        {
            down_heapify(i);
        }
    }

    int ExtractMax(){
        int max = nodes[0];
        pop(0);
        return max;
    }

    void print()
    {
        for (int node : nodes)
        {
            cout << node << " ";
        }
        cout << endl;
    }
};


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    MaxHeap heap;
    heap.buildHeapFromArray(nums);

    vector<int>result;
    int len = nums.size();
    for(int i=0;i<len;i++){
        result.push_back(heap.ExtractMax());
    }

    reverse(result.begin(),result.end());

    return result;
    
        
    }
};
