#include <iostream>
using namespace std;

class Heap {
private:
    struct HeapElem {
        int data;
    };

    struct Priority_Queue {
        int count;
        HeapElem heaparr[100001]; 
    };

public:
    Priority_Queue* arr;

    Heap() {
        arr = HeapInit();
    }

    Priority_Queue* HeapInit() {
        Priority_Queue* newArr = new Priority_Queue;
        newArr->count = 0;
        return newArr;
    }

    bool HIsEmpty() {
        return arr->count == 0;
    }

    int GetParentIdx(int id) {
        return id / 2;
    }

    int GetLchild(int id) {
        return id * 2;
    }

    int GetRchild(int id) {
        return id * 2 + 1;
    }

    int GetHichild(int id) {
        int left = GetLchild(id);
        int right = GetRchild(id);

        if (left > arr->count) return 0;

        if (right > arr->count) return left;

        if (arr->heaparr[left].data < arr->heaparr[right].data)
            return left;
        else
            return right;
    }

    void HInsert(int data) {
        HeapElem newNode = { data };
        int idx = arr->count + 1;

        while (idx != 1) {
            if (newNode.data < arr->heaparr[GetParentIdx(idx)].data) {
                arr->heaparr[idx] = arr->heaparr[GetParentIdx(idx)];
                idx = GetParentIdx(idx);
            } else break;
        }

        arr->heaparr[idx] = newNode;
        arr->count++;
    }

    int HDelete() {
        int del = arr->heaparr[1].data;
        arr->heaparr[1] = arr->heaparr[arr->count];
        arr->count--;

        int parentidx = 1;

        while (true) {
            int child = GetHichild(parentidx);
            if (child == 0) break;

            if (arr->heaparr[parentidx].data > arr->heaparr[child].data) {
                swap(arr->heaparr[parentidx], arr->heaparr[child]);
                parentidx = child;
            } else break;
        }

        return del;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    Heap heap;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x == 0) {
            if (heap.HIsEmpty()) cout << 0 << '\n';
            else cout << heap.HDelete() << '\n';
        }
        else {
            heap.HInsert(x);
        }
    }

    return 0;
}