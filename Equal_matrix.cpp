#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns, isEqual;
	
	cout << "\nPlease Enter the rows and Columns a Equal Matrix =  ";
	cin >> i >> j;
	
	int a[i][j], b[i][j];
	
	cout << "\nPlease Enter the First Matrix Items =  ";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> a[rows][columns];
		}		
	}	
	cout << "\nPlease Enter the Second Matrix Items =  ";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> b[rows][columns];
		}		
	}
	
	isEqual = 1; 	
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		if(a[rows][columns] != b[rows][columns])
			{
			  	isEqual = 0;
			  	break;
			}    
   	 	}
  	}
 	if(isEqual == 1)
 	{
 		cout << "\nMatrix a is Equal to Matrix b";		
	}
	else
	{
		cout << "\nMatrix a is Not Equal to Matrix b";
	}	

 	return 0;
}
