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
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            if (rear == max - 1)
                rear = 0;
            else
                rear = rear + 1;
        }
        queues_array[rear] = num;
    }

    void remove()
    {
        if (front == -1)
        {
            cout << "queues underflow\n";
            return;
        }
        cout << "\nthe element terhapus " << queues_array[front] << "\n";

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front == max - 1)
                front = 0;
            else
                front = front + 1;
        }
    }

    void display()
    {
        int front_position = front;
        int rear_position = rear;

        if (front_position <= rear_position)
        {
            while (front_position <= rear_position)
            {
                cout << queues_array[front_position] << " ";
                front_position++;
            }
        }
        else
        {
            while (front_position <= max - 1)
            {
                cout << queues_array[front_position] << " ";
                front_position++;
            }

            front_position = 0;

            while (front_position <= rear_position){
                cout << queues_array[front_position] << " ";
                front_position++;
            }
            cout << endl;
        }
    }
};

int main(){
    Queues q;
    char ch;

    while (true){
        try {
            cout << "Menu" << endl;
            cout << "1. implement insert operation" << endl;
            cout << "2. implement delete operation" << endl;
            cout << "3. Display values" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice (1-4) :";
            cin >> ch;
            cout << endl;

            switch (ch){
                case '1' :{
                    q.insert();
                    break;
                }
                case '2' :{
                    q.remove();
                    break;
                }
                case '3' :{
                    q.display();
                    break;
                }
                case '4' :{
                    return 0;
                }
                default: {
                    cout << "invalid option!!" << endl;
                }
            }
        }
        catch (exception& e){
            cout << "check the values entered." << endl;
        }
    }
    return 0;
}