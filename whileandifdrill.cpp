#include "C:\Users\arkar\Desktop\burmesesuperman.h"
int main()
{
string previous="";
string current,a;
cin>>current;

while(cin>>current){
    if(previous==current)
cout<<"repeated word: "<<current<<'\n';
previous=current;
}
}
