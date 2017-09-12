#include<iostream>
using namespace std;
int forec(int a,int x=0){
	if(x==a) return 0;//caso base
	cout<<x<<" ";
	return forec(a,x+1);//parte recursiva
}
int main(){
	int a;
	cin>>a;
	forec(a);
	cout<<endl;
	return 0;
}
