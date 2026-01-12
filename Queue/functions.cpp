#include<iostream>
using namespace std;
int arrQ[50], SIZE=50, front=-1, rear=-1;
void enqueue() {
	if(front==-1) front=0;int n;
	cout << "Insert element in queue: ";cin >> n;
	rear++;
	arrQ[rear]=n;
}
void dequeue() {
	if(front==-1 || front > rear) {
		cout << "Queue Underflow/Empty" << endl;
	}
	for(int i=front;i<=rear;i++) {
		arrQ[i]=arrQ[i+1];
	}
	rear--;
	SIZE--;
}

void display() {
	if(front==-1 || front > rear) {
		cout << "Queue Underflow/Empty" << endl;
	}
	else {
		cout << "Queue elements are: " << endl;
		for(int i=front;i<=rear;i++) {
			cout << arrQ[i] << " ";
		}
		cout << endl;
	}
}
void readFront() {
	if(front==-1 || front > rear) {
		cout << "Queue Underflow/Empty" << endl;
	}
	cout << "Element at front is: " << arrQ[front] << endl;
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Read first element from the queue"<<endl;
   cout<<"5) Exit"<<endl;
   do {
    cout<<"Enter your choice : ";
    cin>>ch;
    switch (ch) {
	 case 1: enqueue();
	 break;
	 case 2: dequeue();
	 break;
	 case 3: display();
	 break;
	 case 4:readFront();
	 break;
	 case 5: cout<<"Exited The Queue"<<endl;
	 break;
	 default: cout<<"Invalid Operation"<<endl;
      }
   } while(ch>0 && ch<5);
   return 0;
}
