#include <vector>

class Queue {
    private:
        // Linked List ? Array ?
        std::vector <int> myQueue;


    public:
        Queue() {};

        void enQueue(int value);
        int deQueue();
        bool isEmpty();
        bool isFull();
        int peek();
        
        void printQueue();
};
