#include<iostream> 
using namespace std; 

void print(int *ptr){
    cout<<*ptr<<endl;
}

void update(int *p) {
    (*p)++;
}

int getsum(int *arr,int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    return sum;
}

int main() 
{ 
    int val = 9;
    int *ptr = &val;
    cout<<"before p"<<endl;
    print(ptr);
    cout<< "after p"<<endl;
    update(ptr);
    print(ptr);

    int arr[10] = {1,2,3,4,5,4,5,6,7,7};
    int k = 5;
    cout<<"the sum is : "<<getsum(arr+k,5)<<endl;
    return 0;
}