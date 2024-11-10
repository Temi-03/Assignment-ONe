#include <iostream>
using namespace std;
int pow(int a, int b)
{
    
  if (b==0)//base case to reursce back
    {
        return 1;//
    }
    // If b is even number
    if (b % 2 == 0)
    {
        int split = pow(a, b / 2); // split the power  and it will run until it hit one and recusily call back up
        return split * split;       //when done multiply the two halves to make it the full power inputed 
    }
    else // If b is odd an odd number
    {
      return a*pow(a,b-1);//return statemnt decreasing the value of b which is ow many time you have to multiply the number by itsekf
    }
}
int main()
{
 
   int num; //hold the first numder
   int  power;// whart the power is going to be 
    cout<< "enter a first nimber  "<<'\n';//ask user to enter number
    cin>>num;//reading input
    cout<<"enter power"<<'\n';//ask for a power
    cin>>power;//reading input
   int result = pow(num,power);//store anser for method in the result
    //promtp to ask for the number and its power 
   
   cout<<num<<" to the power of "<<power<<" is "<<result; //nswer printed out 

}