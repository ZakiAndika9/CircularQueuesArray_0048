#include <iostream>
using namespace std;

class Queues
{
    int front, rear, max = 5;
    int queues_array[5];

public:
    Queues()
    {
        front = -1;
        rear = -1;
    }
