#include <iostream>
#include <thread>

using namespace std;

void countingUp() {
    int counter = 0;

    for (int i = 0; i < 21; i++) {
        std::cout << counter << "\n";
        counter++;
    }
}

void countingDown() {
    int counter = 20;

    for (int i = 20; i > 0; i--) {
        std::cout << counter << "\n";
        counter--;
    }
}

int main() {

    //calling a new thread function to count up
    thread newThread(countingUp);

    //calling a new thread function to count down
    thread newThread2(countingDown);

    //synchronizing threads
    newThread.join();
    newThread2.join();

    return 0;
}
