
#include<iostream>
using namespace std;

void TOH(int n, char src, char dest, char aux)
{
	if (n == 1)
	{
		cout << "Move disk " << n << " from rod " << src <<" to rod " << dest << endl;
	}else{
	
	TOH(n - 1, src, aux, dest);
	cout << "Move disk " << n << " from rod " << src <<" to rod " << dest << endl;
	TOH(n - 1, aux, dest, src);
}
}


int main()
{
	int n;
	cout<<"enter number of disks: ";
	cin>>n;
	TOH(n, 'S', 'D', 'T'); 
	return 0;
}



