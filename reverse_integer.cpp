#include <iostream>
using namespace std;

int main()
//you could modulus to reverse it but im goin to convert it to string
{
   // 4.1
    cout<<"Enter a interger"<<'\n';
    int num ;//created the variabel to store num
    string reverseS;
    cin>>num; //taking in input
    string number = to_string(num); //convorted to string to make easier to revese
    if(number[0]=='-') // if there is a minnus add it at the start 
    {
        reverseS+="-";

        for(int i = number.length()-1;i>=1;i--)
        {
            reverseS+=number[i]; //concatinating the string in recese together
        }
    }
    else{//continue as normal if not 
        for(int i = number.length()-1;i>=0;i--)
         {
             reverseS+=number[i];
         }
    }
    num =stoi(reverseS);//convert back into int
    cout<<num; //print out */
    
}
