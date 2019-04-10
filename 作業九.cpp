#include <iostream>


int main(int argc, char** argv) 
{
	int id,jt;
	for(id=1;id<=9;id++)
	{
	for(jt=1;jt<=9;jt++)
	{
		printf("%dX%d=%d\t",id,jt,id*jt);
	}
	printf("\n");
	}
	system("pause");
	return 0;
}
