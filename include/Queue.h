#include <vector>

class Queue {
    private:
        int size;
        // Linked List ? Array ?
        std::vector <int> myQueue;



    public:
        Queue(int size) : size(size) {};

        void enQueue(int value);
        int deQueue();
        bool isEmpty();
        bool isFull();
        int peek();
        
        void printQueue();
};
