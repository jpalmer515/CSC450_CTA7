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

void countingDown() {}

int main() {

    thread newThread(countingUp);

}
