/*WAP a menu driven program to do following task in queue 
1. for make empty queue
2. for enqueue
3. for dequeue
4. fro queue traversal
*/

#include<iostream>
#include<conio.h>
#define max 10
using namespace std;

int main(){
	int front,rear,i,queue[max],choice;
	char ch;
	cout<<"Menu\n";
	cout<<"Press 1 for make empty queue.\n";
	cout<<"Press 2 for enqueue.\n";
	cout<<"Press 3 for dequeue.\n";
	cout<<"Press 4 for queue traversal.\n";
	front=0;
	rear=-1;
	do{
	cout<<"\nEnter your choice: ";
	cin>>choice;
	switch(choice){
		case 1:
			front=0;
			rear=-1;
			cout<<"The queue is now empty.\n";
			break;
		case 2:
			if(rear>=max-1){
				cout<<"\nqueue is full";
			}else{
				int item;
				cout<<"\nEnter item you want to insert in queue:";
				cin>>item;
				rear++;
				queue[rear]=item;
			}
			break;
		case 3:
			int temp;
			if(front==0&&rear==-1){
				cout<<"Queue is empty.\n";
			}else{
				temp=queue[front++];
				cout<<"\nDeleted item: "<<temp;
//				front--;
//				rear--;
			}
			break;
		case 4:
			cout<<"front ="<<front<<endl;
			cout<<"Rear ="<<rear<<endl;
			for(i=front;i<=rear;i++){
				
				cout<<queue[i]<<"\t";
				
			}
			break;
		default:
			cout<<"\nInvalid number!!!!\n";
			break;
	}
	cout<<"\ndo you want to continue?(y/n): ";
	cin>>ch;
}while(ch=='y');
getch();
return 0;
}
