


/*  Program To Find Identical Elements In Array
	Dynamics Arrays
 */

# include <iostream> 
# include <cstdlib>

using namespace std;

void unique(int[], int[], int&,int); // function prototype

int main()
{

	srand(time(0));
	int sizeOfArrays;
	cout << " Size Of Array ? :"; cin >> sizeOfArrays;  // dynamic arrays // user determines size of the arrays
	int *array1 = new int[sizeOfArrays]; 
	int *repo= new int[sizeOfArrays];  // this array  keeps the same numbers in random numbers array
	int counter = 0;  
	unique(array1,repo,counter,sizeOfArrays);
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

void unique(int array1[], int repo[],int & counter,int sizeOfArrays)   // function definition
{

	cout << " Create And Show array1 : [ ";
	int rndm = 0;
	for (int j = 0; j < sizeOfArrays; j++)  // array of random numbers
	{
		rndm = rand() % 10;
		array1[j] = rndm;
		repo[j] = 0;             // repo array of zeros
		cout << array1[j] << " ";       
	}
	cout << "]";

	
	for (int q = 0; q < sizeOfArrays; q++)
	{
		for (int s = 0; s < q; s++)
		{
			if (array1[q] == array1[s])  // if element is detected twice
			{
				repo[counter] = array1[s]; // add to repo
				counter++; // if there is more than 1 of the same element, increment the counter
			}	
		}
	}
	if (counter >= 1)
	{
		cout << endl;
		cout << " Detected Element : ";
		for (int i = 0; i <counter; i++)
		{
			cout << repo[i] << " ";  // show detected element
		}
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << " Element Not  Detected  ! \n ";
		cout << endl;
	}
}
/// -------- FINISH --------- \\\