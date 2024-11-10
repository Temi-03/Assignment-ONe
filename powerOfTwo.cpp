#include <iostream>
using namespace std;
int main()
{
    cout<<"enter an intterger"<<'\n';//ask for an integer
    int num ;
    cin>>num;//taking in input of integer
    int check =0;//checking if num is pow of 2 or nit
     if(num==0)
     //0 is not a power of 2
         {
            cout<<"false";
            return 0;
        }
    while(num>1)//
    {
        if(num%2!=0)//if it is an odd number can be a power
        {
            check =1;//changing to one as it is false
            break;//leave the loop
        }
        num=num/2;//dividing it by two and continuing the check
    }
    if(check==0)//if check remained the same it is an integer
    {
        cout<<"true";
    }
    else//if not it is not an integer
    {
        cout<<"false";
    }
}