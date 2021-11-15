#include "hanoi.h"

hanoi::hanoi(){}
int count=0;

void hanoi::hanoiSort(int n,char Source, char Auxilary,char Destination)
{ 
	if(n==1)
	{
		//cout<<"Move Disk "<<n<<" from "<<Source<<" to "<<Destination<<endl;
		return;
	}
	hanoiSort(n-1,Source,Auxilary,Destination);
	hanoiSort(n-1,Auxilary,Source,Destination);
}
