#include <iostream>

class Queue {
    int arr[5];
    int front;
    int rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }

        void enqueue (int value) {
            if (rear == 4) {
                std::cout << "Queue is full" << std::endl;
                return;
            }
            if (front == -1) {
                front = 0;
            }

            rear++;
            arr[rear] = value;
            std::cout << value << " added to queue " << std::endl;
        }

        void dequeue() {
            if (front == -1 || front > rear) {
                std::cout << "Queue is empty! Nothing to remove. " << std::endl;
                return;
            }

            std::cout << arr[front] << " removed from queue " << std::endl;
            front++;
        }
        
};


int main () {
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);

    std::cout << "=====================" << std::endl;

    q1.dequeue();
    q1.dequeue();


    return 0;
}