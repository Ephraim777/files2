#include "Counter.h"


   Counter:: Counter() : count(1) {}
    Counter::Counter(int& count) : count(count) {}
    int  Counter::CounterUp() {
        this->count++;
        return this->count;
    }
    int  Counter::CounterDown() {
        this->count--;
        return this->count;
    }
    void  Counter::PrintCounter() {
        std::cout << this->count;
    }





void Helper(Counter& temp1) {
    bool flag = false;
    while (flag == false) {
        std::cout << "\nEnter a command ('+', '-', '=' or 'x')\n";
        char symbol;
        std::cin >> symbol;
        switch (symbol) {
        case '+': temp1.CounterUp(); break;
        case '-': temp1.CounterDown(); break;
        case '=': temp1.PrintCounter(); break;
        case 'x': std::cout << "Program completed\n"; flag = true; return; break;
        default: std::cout << "There is no such command, let's try again\n"; flag = true; Helper(temp1);

        }

    }
}