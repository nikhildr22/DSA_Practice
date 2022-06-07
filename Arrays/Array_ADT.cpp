#include<iostream>
using namespace std;
struct myArray
{
    int tSize;
    int uSize;
    int *arr;
};

int main(){
    myArray arr;
    cout<<arr.tSize;
    return 0;
}