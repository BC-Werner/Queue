#include <vector>

class Queue {
    private:
        std::vector <int> myQueue;


    public:
        Queue(int max) {
            myQueue.reserve(max); 
        };

        void enQueue(int value);
        int deQueue();
        bool isEmpty();
        bool isFull();
        int peek();
        int size();
        int max();
        
        void printQueue();
};
