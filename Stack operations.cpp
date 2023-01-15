//wap menu driven program to perform tfollowing stack operations
#include<iostream>
#include<conio.h>
#define max 10
using namespace std;
int main(){
	cout<<"press 1 for makeEmpty stack.\n";
	cout<<"press 2 for push operation.\n";
	cout<<"press 3 for pop operation.\n";
	cout<<"press 4 for peek operation.\n";
	cout<<"press 5 for display item in stack.\n";
	int stack[max],i,choice,top=0,count=0;
	char ch;
	do{
	cout<<"Enter your choice: ";
	cin>>choice;
	switch(choice){
		case 1:
			top=-1;
			cout<<"Stack is made empty.\n";
			break;
		case 2:
			if(top==max-1){
				cout<<"Stack is overflow.\n"<<endl;
			}else{
				int ele;
				top++;
				cout<<"Enter element you want to push in stack: ";
				cin>>ele;
				stack[top]=ele;
			}
			break;
		case 3:
			if(top<0){
				cout<<"Stack is empty.\n"<<endl;
			}else{
				int temp;
				temp=stack[top];
				top--;
				cout<<"Deleted element is: "<<temp<<endl;
			}
			break;
		case 4:
			if(top<0){
				cout<<"Stack is empty.\n"<<endl;
			}else{
				cout<<stack[top];
			}
			break;
		case 5:
			if(top<0){
				cout<<"Stack is empty.\n"<<endl;
			}else{
				if(count==1){
					top=top+1;
					count--;
				}
				for(i=top;i>0;i--){
					cout<<stack[i]<<endl;
				}
			}
				
			
			break;
		default: 
			cout<<"Invalid number....\n"<<endl;
		}
		
		cout<<"\nDo you want to continue(y/n): ";
		cin>>ch;
		if(ch=='y'&&choice==1){
			count=1;
		}
	}while(ch!='n' && ch=='y');
}
