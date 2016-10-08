//abad
#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int main(){
    ifstream f("input.txt");
    int a,sum=0;
    while (f>>a){
		}
    	for(int i=0;i<a;i++){
    		if((i%3==0)||(i%5==0)){
    			sum+=i;
			}
		}
		cout<<sum<<endl;
	
    system("pause");
    return 0;
}

