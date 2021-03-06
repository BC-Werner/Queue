#include "../include/Queue.h"
#include <iostream>

using namespace std;

void Queue::enQueue(int value) {
    if (this->isFull()) {
        cout << "{- Queue is Full -}" << endl;
        return;
    }

    myQueue.emplace_back(value);
}


int Queue::deQueue() {
    int value;
    if (this->isEmpty()) {
        cout << "{- Queue is empty -}" << endl;
        return -1;
    }

    value = *myQueue.begin();

    myQueue.erase(myQueue.begin());
    
    return value;
}


bool Queue::isEmpty() {
    return (myQueue.size() <= 0);
}


bool Queue::isFull() {
    return (myQueue.size() >= max());
}


int Queue::peek() {
    if (this->isEmpty()) return -1;

    return *myQueue.begin();
}

int Queue::size() {
    return myQueue.size();
}

int Queue::max() {
    return myQueue.capacity();
}



void Queue::printQueue() {
    if (this->isEmpty()) {
        cout << endl << "{- Queue is empty -}" << endl;
        return;
    }

    cout << "{- ";

    for (const auto &i : myQueue) 
        cout << i << " ";
    

    cout << "-}" << endl;

}
