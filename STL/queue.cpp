#include <iostream>
#include <queue>
using namespace std;
//* FIFO
void explainQueue(){
    queue<int> q;
    q.push(1);    // 1
    q.push(2);    // 1 2
    q.push(3);    // 1 2 3
    q.pop();      // 2 3
    q.front();    // 2
    q.back();     // 3
}

void explainPriorityQueue(){
    // Define a priority queue that stores integers
    std::priority_queue<int> pq; //Data is stored in tree form internallly

    // Add some elements to the priority queue
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);

    // Access the top element
    std::cout << "Top element: " << pq.top() << std::endl;

    // Remove the top element
    pq.pop();

    // Access the new top element
    std::cout << "New top element: " << pq.top() << std::endl;

    //priority queue to store minimum heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Add some elements to the priority queue
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(15);

    // Access the top element
    std::cout << "Top element: " << minHeap.top() << std::endl;

    // Remove the top element
    minHeap.pop();

    // Access the new top element
    std::cout << "New top element: " << minHeap.top() << std::endl;

    //priority queue to store maximum heap
    std::priority_queue<int, std::vector<int>, std::less<int>> maxHeap;

    // Add some elements to the priority queue
    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);
    maxHeap.push(15);

    // Access the top element
    std::cout << "Top element: " << maxHeap.top() << std::endl;

    // Remove the top element
    maxHeap.pop();

    // Access the new top element
    std::cout << "New top element: " << maxHeap.top() << std::endl;

    // Check if the priority queue is empty
    if (pq.empty()) {
        std::cout << "Priority queue is empty" << std::endl;
    } else {
        std::cout << "Priority queue is not empty" << std::endl;
    }
}
int main() {
    return 0;
}
