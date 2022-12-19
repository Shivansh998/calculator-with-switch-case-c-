#include<iostream>
using namespace std;
int main()
{
   int a,b,n;
   cin>>n>>a>>b;
   switch(n)
   {
        case 1:
    	cout<<"add"<<a+b;
    	break;
        case 2:
        cout<<"sub " <<a-b;
        break;
        case 3:
        cout<<"multi " <<a*b;
        break;
        case 4:
        cout<<"div " <<a/b;
        break;
        default:
        cout<<"wrong";
    }
    return 0;
}

  
