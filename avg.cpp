
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int mark[5],avg,total=0;
    string sub[5]={"MTT","EDC","CPPDS","SS","DCLD"};
    cout<<"Enter the marks of your respective subjects out of 100"<<endl;
    for(int i=0;i<5;i++)
    {   
        cout<<sub[i]<<" = ";
        cin>>mark[i];
        total=(total+mark[i]);
    }
    avg=total/5;
    if(avg<=100 || avg>=90)
    {
        cout<<"Your grade is  O";
    }   
    else if (avg<=89 || avg>=79)
    {
        cout<<"Your grade is  A+";
    }
    else if (avg<=89 || avg>=85)
    {
        cout<<"Your grade is  A";
    }
    else if (avg<=84 || avg>=75)
    {
        cout<<"Your grade is  B+";
    } 
    else if (avg<=74 || avg>=65)
    {
        cout<<"Your grade is  B";
    }  
    else if (avg<=65 || avg>=55)
    {
        cout<<"Just pass+";
    }  
    else 
    {
        cout<<"FAIL";
    }                                
    return 0;
}
