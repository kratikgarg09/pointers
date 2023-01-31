#include <iostream>
using namespace std;

int main()
{
    // ***** FIRST POINT *****//
    /*
    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;
    cout << "it prints the size of first element of array : " << sizeof(*temp) << endl;

    cout << "it prints the size of address of array : " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << "it prints the size of pointer : " << sizeof(ptr) << endl;

    cout << "it prints the size of first element of pointer : " << sizeof(*ptr) << endl;

    cout << "it prints the size of address of pointer : " << sizeof(&ptr) << endl;
*/

    // ***** SECOND POINT ***** //
    /*
        int arr[10] = {2, 3, 45, 32};
        int *ptr = &arr[0];
        cout << "adress of arr[0] is : " << &arr << endl;
        cout<< "adress of ptr is : " << &ptr << endl;
    */

    // **** THIRD POINT **** //

    // THROWS AN ERROR BECAUSE WE cannot change the element of symbolic table
    /*
    int arr[10];
    arr++;
*/

    // **** FOURTH POINT *****//
    /*
    int arr[10] = {0};
    int *ptr = &arr[0];
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr++;
    cout << ptr << endl;
    cout << *ptr << endl;
*/

    /*

    ***** SUMMARY ****

    1.  From point 1 ->
                        we observe that the size of an array is depends on how much elements presents in this and multiply by sizeof(data_type).

                        while in pointer -> he size of pointer is fixed and the size of it is 8.

    2. for second point ->
                        the adress of array and the addres of pointer is always diffrent

    3. from 3rd point -> 
                        assignment array variable cannot be assigned address of another variable but pointer can take it.
    4. from fourth point -> 
                        address of array is not reassignable
    */

    return 0;
}