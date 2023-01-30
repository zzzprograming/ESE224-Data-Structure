#include<iostream>

using namespace std;

void bubbleSort(float a[], int size)
{
	int i,j;
	float temp;
	for ( i = 0; i <size ; i++)
	{
		for ( j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])  //changing < to > will change from min to max or max to min
			{
				 temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}


}
void maxtomin(float a[], int size)
{
	int i, j;
	float temp;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (a[j] < a[j + 1])  //changing < to > will change from min to max or max to min
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}


}



int main()
{
	int k=0;
	int size;

	cout << " how many array do you want to enter" << endl;
	cin >> size;
	float* myarray = new float[size];
	//float myarray[size];
	cout << "Enter the numbers in anyorder" << endl;
	for (k = 0; k < size; k++)
	{
		cin >> myarray[k];

	}
	
	bubbleSort(myarray, size);//sorting

	for (k = 0; k < size; k++)
	{
		cout << myarray[k] << " ";
	}
	
	cout << endl; 


	maxtomin(myarray, size);
	for (k = 0; k < 5; k++)
	{
		cout<< myarray[k] <<" ";
	}

	cout << endl;

	bubbleSort(myarray, size);//output min

	{
		cout << myarray[0] << "min ";
	}
	cout << endl;

	bubbleSort(myarray, size);//find max

	{
		cout << myarray[4] << "max ";
	}
	cout << endl;

	float sum = 0;	//finding sum of the array 
	for (k = 0; k < 5; k++)
	{
		sum += myarray[k];
	}
	{
		cout << "The array sum is " << sum;
	}
	cout << endl;


	float comp;
	cout << "Enter value you want to compare";
	cin >> comp;
		int check = 0;

		for (k = 0; k < 5; k++) {
			if (comp == myarray[k]) {
				check = 1; 
			}
		} 

		if (check == 1)
			cout << "value exist" << endl;
		else
			cout << "value dne" << endl; 

		check = 0; 

		for (k = 0; k < 5; k++) {
			if (myarray[k]>=0) {
				cout << myarray[k] << "Those are positive numbers " << endl;
			}
		}
		cout << endl; 
		


	



	return 0;

}

