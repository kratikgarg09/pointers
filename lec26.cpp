#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // first way to find address
    cout << "the adress of first element or arr is : " << arr << endl;
    // second way to find the address
    cout << "the address of first element element of arr is : " << &arr[0] << endl;

    // third way to find address

    int *ptr = &arr[0];

    cout << "the address of first element element of arr is : " << ptr << endl;
    // if we want the address of any element in a array simply we have to print &arr[element index]

    // ways to print the element of array

    // first way to print the element
    cout << arr[0] << endl;
    // Second way
    cout << "4th" << *arr << endl; // it prints the first element of array because we give the address of
                                   // zeroth element of array

    cout << "5th" << *arr + 1 << endl; // Similarly this line prints the second element of array arr[0+1]

    cout << "6th " << *(arr + 1) << endl; // Similarly this line also prints the second element of array arr[0+1]

    cout << "7th" << *(arr) + 1 << endl; // Similarly this line also prints the second element of array arr[0+1]

    cout << "8th" << arr[2] << endl;     // Similarly this line prints the third element of array arr[2] = third element of array
    cout << "9th" << *(arr + 2) << endl; // Similarly this line prints the second element of array arr[0+2]

    int i = 3;
    cout << i[arr]; // this line is also valid because i[arr] = *(i+arr) = *(arr+i)

    return 0;
}