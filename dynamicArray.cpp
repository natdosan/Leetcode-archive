//Program to demonstrate that an array variable is a kind of pointer variable
#include <iostream>
using namespace std;

//typedef int *IntPointer;

int arraysAndPointers()
{
    int *p; // or IntPointer = p;
    int a[10];
    int i;

    for (i = 0; i < 10; i++)
        a[i] = i;

    p = a;

    for (i = 0; i < 10; i++)
        cout << p[i] << " ";
    cout << endl;

    for (i = 0; i < 10; i++) // changes to p[] also changes a[]
        p[i] = p[i] + 1;

    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

/** 0 1 2 3 4 5 6 7 8 9
*   1 2 3 4 5 6 7 8 9 10
*/

#include <cstdlib>
#include <cstddef>

typedef int *IntArrayPtr;

// Dynamic Array ex
// A dynamic array is an array whose size is not specified when you write the program,
// but is determined while the program is running.

void fill_array(int a[], int size);
// Precondition: size is the size of a[]
// Postcondition: a[0] through a[size-1] have been filled with inputted values

void sort(int a[], int size);
// Preconditon: size is the size of a[]
//  The array elements a[0] thorugh a[size-1] havve values.
// Postconddition: The values of a[0] through a[size-1] have been rearranged
// so that a[0] <= a[1] <= _ <= a[size-1]

int main()
{
    cout << "This program sorts numbers from lowest to highest.\n";

    int array_size;
    cout << "How many nnumbers wil be sorted?\n";
    cin >> array_size;

    IntArrayPtr a;
    a = new int[array_size];

    fill_array(a, array_size); // calling fill function (takes values)
    sort(a, array_size);       // calling sort function (sorts them)

    cout << "In sorted ordder the numbers are:\n";
    for (int index = 0; index < array_size; index++)
        cout << a[index];
    cout << endl;

    delete[] a;

    return 0;
}

void fill_array(int a[], int size)
{
    cout << "Enter " << size << " integers.\n";
    for (int index = 0; index < size; index++)
        cin >> a[index];
}

void sort(int a[], int size)
