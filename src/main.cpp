#include "../include/Queue.h"
#include <iostream>

using namespace std;

int main() {

    Queue Q(25);

    cout << "--Inserting the numbers 1-10 into the Queue--" << endl;

    for (int i : { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ) {
        Q.enQueue(i);
        cout << "Inserting " << i << " into the Queue" << endl;
    } 

    cout << "\n--Printing the Queue--" << endl;
    Q.printQueue();

    cout << "\n--De-Queueing 4 times--\n" << endl;
    Q.deQueue();
    Q.deQueue();
    Q.deQueue();
    Q.deQueue();

    cout << "The first value in the Queue is now : {- " << Q.peek() << " -}" << endl;

    cout << "\n--Printing the Queue--" << endl;
    Q.printQueue();


    return 0;
}
