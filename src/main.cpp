#include "../include/Queue.h"
#include <iostream>

using namespace std;

int main() {

    Queue Q(25);

    cout << "--Filling the Queue--" << endl;
    for ( int i = 0; i < Q.max(); i++) {
        if (Q.isFull()) break;
        Q.enQueue(i);
    }
    Q.printQueue();


    cout << "\n--Emptying the Queue--" << endl;
    while (!Q.isEmpty()) {
        Q.deQueue();
    }
    Q.printQueue();


    cout << "\n--Inserting the numbers 1-10 into the Queue--" << endl;
    for (int i = 0; i < 10; i++) {
        Q.enQueue(i);
    } 
    Q.printQueue();


    cout << "\n--De-Queueing 4 times--" << endl;
    Q.deQueue();
    Q.deQueue();
    Q.deQueue();
    Q.deQueue();

    Q.printQueue();
    cout << "\nThe size of the Queue is : " << Q.size() << endl;
    cout << "The max_size of the Queue is : " << Q.max() << endl;


    return 0;
}
