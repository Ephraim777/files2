#pragma once
#include <iostream>
class Counter {
    int count;
public:
    Counter();
    Counter(int& count);
    int CounterUp();
   
    int CounterDown();
    
    void PrintCounter();
     




};
void Helper(Counter& temp1);
    
