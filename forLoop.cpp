#include<iostream> 
using namespace std; 

int main() 
{ 
    int arr[20] = {1,2,3,4,5,6,7,8,9,0,0,0,0,000,0};

    for (int i = 0; i < 17; i++)
    {
        int *ptr = &arr[i];
        cout<<ptr<<endl;
    }
    
    return 0;
}