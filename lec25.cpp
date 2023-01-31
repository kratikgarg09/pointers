#include<iostream> 
using namespace std; 

int main() 
{ /*

case -> 1
    int num = 5;
    int *ptr = &num;
    //it prints the value of num
    cout<<num<<" "<< endl;
    // it also prints the value of num
    cout<<*ptr << " "<< endl; 
    
    // LINE NO. 8 and 9 are giving same output because of the value of num is 
    //present in address of num and the address of num is stored in ptr that 
    //is why the line no. 8 and 9 is giving same output... 
    
    //it prints the address of num
    cout<<ptr << " "<< endl; \
    
    // beco=ause of the above reason line no. 12 and 13 is aklso same
    
    // it also prints the addess of num
    cout<<&num << " "<< endl;

    cout<< "the size of num is : " <<sizeof(num) << endl;
    cout<< "the size of pointer or ptr is :  " <<sizeof(ptr) << endl;
*/
//case -> 2

    int num = 5;
    int a = num;
    a++;

    cout<<"n before:"<<num << endl;  
    cout<<"Num after:"<<num << endl;
    
    int *ptr = &num;
    cout<<"n before:"<<num << endl;
    (*ptr)++; // this increments the value of num
    cout<<"N after:"<<num << endl;
   
//copying pointer

    int *ptr2 = ptr;
    cout<<"n before befor second increment : "<<num << endl;
    (*ptr2)++; // this increments the value of num
    cout<<"N after second increment : "<<num << endl;

    return 0;
}