#include<iostream>
using namespace std;
/**
 * A function to print a character a number of times
 * The function will accept two parameters
 * @char - The character the user will enter.
 * @number - The number of times to print thhe character
 * @return - The function will return nothing.
 * void print_char - Function name.
*/
void print_char(char ch, int number); //Function declartion
int main()
{
    int N_times;
    char character;
    cout<<"Enter a charater: ";
    cin>>character;
    //cout<<"How many times do you want the character "<<character<< " to repeat ?"<<endl;
    //cin>>N_times;
    while(character != 'q')
    {
         cout<<"How many times do you want the character '"<<character<< "' to repeat ? ";
        cin>>N_times;
        print_char(character, N_times);
        cout<<"\nPress 'q' to quit"<<"\nOr Enter another character: ";
        cin>>character;    
    }
    cout<<"\nThank you for ending the program\n\n"<<endl;
    return 0;
}
void print_char(char ch, int number)
{
    for(int i = 0; i < number; i++)
    cout<<ch<<"\t";
}
