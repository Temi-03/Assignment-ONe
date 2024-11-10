#include <iostream>
using namespace std;
int gcd(int a ,int b)//method called to find gretest common divisor 
{
    if(a>b)//if a is greater than b we will carry out the algorithm this way
    {
        if(a%b==0)
        {
            return b;//reutn b as the gcd
        }
        return gcd(a%b,b);//if not recusivly call it again replacing a with the modulus of a
    }
    else if  (b>a)// if b is greater than a we will carry out the algorithm thus way 
    {
        if(b%a==0)
        {
            return a;//reutn b as the gcd
        }
       return  gcd(b%a,a);//if not recusivly call it again replacing b with the modulus of b
    }
    
    
        return a;
    
}
int main()
    {
        
        cout<<"please enter two numbers"<<'\n';//asking the user to enter  numbers
    int a;//first int
    int b;//second int
    cin>>a;//reading first input
    cin>>b;//reading second inout
    int result = gcd(a,b); //store the answer from method called in result
   cout<<"this is the greatest commom divisor "<<result;//printing the result 
    }