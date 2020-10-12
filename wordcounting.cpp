#include "C:\Users\arkar\Desktop\burmesesuperman.h"
#include<cstdio>


int main()
{
    cout << "Enter the name of the person that you want to write to\n";
string first_name;
    cin>>first_name;
    cout<<"Hello "<<first_name<<","<<"How are you ?"<<"I miss you.";
string friend_name;
string friend_sex;
cout<<"\nEnter friend name= ";
cin>>friend_name;
cout<<"Enter the friend's gender= ";
cin>>friend_sex;
if(friend_sex=="male")
cout<<"Have you seen the "<<friend_name<<" lately?"<<"\nhow has he been?";
if(friend_sex=="female")
cout<<"Have you seen the "<<friend_name<<" lately?"<<"\nhow has she been?";

    std::getchar();
}
