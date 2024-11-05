

#include <iostream>
using namespace std;
struct Client {
    string name;
    int priority;

    Client(string n = "", int p = 0) : name(n), priority(p) {}
};

class Queue {
private:
    Client queue[100]; 
    Client lastPrintedClient; 
    string lastPrintTime; 
    int size; 
  
public:
    Queue() : size(0),  lastPrintedClient() {}

    void addClient(const string& name, int priority) {
        if (size < 100) { 
            queue[size] = Client(name, priority);
            size++;
            cout << "client " << name << " prority " << priority << "added" << endl;
        }
        else {
            cout << "Queue is full" << name <<  endl;
        }
    }

  

            


    void show() const {
        if (!lastPrintedClient.name.empty()) {
            cout << "last client " << lastPrintedClient.name
                << "Time " << lastPrintTime;
        }
        else {
            cout << "client is not print" <<endl;
        }
    }
};

int main() {
    Queue printerQueue;

    
    printerQueue.addClient("Клієнт 1", 1);
    printerQueue.addClient("Клієнт 2", 3);
    printerQueue.addClient("Клієнт 3", 2);

  
  
    printerQueue.show();


