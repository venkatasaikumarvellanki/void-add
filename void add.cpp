#include<iostream>
using namespace std;
void add()
{
static int a=2;    //do not initialize again and again
	a++;
	cout<<a;
};
main()
{
	add(); 
	add(); 
	add(); 
}
