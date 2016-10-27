#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;
int main(){
	ifstream f("input.txt");
	int a,b,d;
	int n,greatest;
	greatest=0;
	f>>a>>b;
	int count;
	for(count=a;count<b;count++){
		d=count;
		n=1;
		while(d>1){
			if ((d%2)==0){
				d=(d/2);
				n++;
			}
			else if ((d%2)!=0){
				d=((3*d)+1);
				n++;
			}
		if (n>greatest) 
		greatest=n;
		}
	}
	cout<<a<<" "<<b<<" "<<greatest;
	return 0;
}
