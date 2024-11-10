#include <iostream>
using namespace std;
int main()
{
    cout<<"please enter a num to check if palindrome"<<'\n';//asking for input of a number
    int num;//int being tested to check if palindrom
    cin>>num;//reading in the int
    int yes= 1;//will be checked if zero to verify if not a palindroome
    string number = to_string(num);//converting int to a string 
    
        
        int start=0;//the point at the start of the tring
        int end = number.length()-1;//point at the end of the string
        while(start<end)//the code will meet in the middle so the loop will end when the end and start cross eachother
        {
            if(number[start]!=number[end])//checking wether the number do not match
            {
                yes =0;//if it does //yes set to zeor
                break;//end the loop 
            }
            else
            {
               //yes will remian the same if it continues to be a palindrome
            }
            start++;//move to the next index at the start of the string
            end--;//mve backwords at the end of the string
        }
    
    if(yes==1)//if yes is one the it will conclude it is a palindrome and xcarry out pritnstatment
    {
        cout<<"this is a palindrome";

    }
    else//not palindrome carry out the other print statemtn
    {
        cout<<"this is not a palindrome";
    }
    

}