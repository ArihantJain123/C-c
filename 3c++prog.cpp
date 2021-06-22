#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int choice;
    float temp,countemp;
    cout<<"temperature conversion menu"<<"\n";
    cout<<"1.Fahrenheit to Celsius"<<"\n";
    cout<<"2. Celsius to Fahrenheit "<<"\n";
    cout<<"enter the choice";
    cin>>choice;
    if(choice == 1)
    {
        cout<<"\n"<<"enter temp in Fahrenheit :";
        cin>>temp;
        countemp = (temp-32)/18;
        cout<<"temp in Celsius"<<countemp<<"\n";


    }
    else
    {
        cout<<"\n"<<"enter temp in Celsius :";
        cin>>temp;
        countemp = 1.8*temp+32;
        cout<<"temp in Fahrenheit"<<countemp<<"\n";

    }
    return 0;
}
