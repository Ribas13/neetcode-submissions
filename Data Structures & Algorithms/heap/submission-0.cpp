class MinHeap {
public:

    // I'm thinking maybe it makes sense to use a vector as the ds to hold the content

    MinHeap() {}

    void push(int val) {
        heap.push_back(val);
        sort(heap.begin(), heap.end());
    }

    int pop() {
        if (heap.empty()) return -1;
        int res = heap[0];
        heap.erase(heap.begin());
        return res;
    }

    int top() {
        if (heap.empty()) return -1;
        return heap[0];
    }

    void heapify(const vector<int>& arr) {
        if (arr.empty()) return;
        heap = arr;
        sort(heap.begin(), heap.end());
    }

private:
    vector<int> heap;
};
