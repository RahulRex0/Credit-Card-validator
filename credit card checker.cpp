#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

bool checker(string n)
{
    int len = n.length();
    int sum = 0;
    bool boolean=true;
    for(int i = 0; i<=len-1; i++)
    {   
        int value=n[i]-'0';
        if (boolean==true )
        {
            value=value*2;
            if(value>9)
            {
                value = value%10 + value/10;
                n[i] = value;
            }

        }
        boolean=!boolean;
        
        sum=sum+value;
    }

    cout<<sum<<endl;
    if(sum%10==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    string n;
    cout << "Enter a credit card number: ";
    cin>>n;
    if(checker(n))
    {
        cout << "This is a Valid credit card";
    }
    else
    {
        cout << "This is not a Valid credit card";
    }
}