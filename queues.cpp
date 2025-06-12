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
    void insert()
    {
        int num;
        cout << "Enter a number : ";
        cin >> num;
        cout << endl;

        // cek apakah antrian penuh

        if ((front == 0 && rear == max - 1) || (front == rear + 1))
        {
            cout << "\nQueues overflow\n";
            return;
