//abad
#include<iostream>
#include<string.h>
using namespace std;


void prob1(){
	char str1[50];
	char str2[50];
	int a;
	cout<<"**************"<<endl;
	cout<<"STRING COMPARE"<<endl;
	cout<<"**************"<<endl;
	cout<<"Enter the first word: ";
	gets(str1);
	cout<<"Enter the second word: ";
	gets(str2);
	
	a=strcmp(str1,str2);
	if(a<0)
	{
		cout<<"--Negative--";
		cout<<endl;
	}
	if(a>0)
	{
		cout<<"++Positive++";
		cout<<endl;
	}
	if(a==0)
	{
		cout<<"==Equal==";
		cout<<endl;
	}
}
void prob2(){
	char str1[50];
	char str2[50];
	char nstr[50];
	int x;
	cout<<"************"<<endl;
	cout<<"STRING COPY"<<endl;
	cout<<"************"<<endl;
	cout<<"Enter a first word: ";
	gets(str1);
	cout<<"Enter a second word: ";
	gets(str2);
	strcpy(nstr,str2);
	cout<<"New string value for the first word: ";
	puts(nstr);
	cout<<endl;
	
}
void prob3(){
	char str1[50];
	char str2[50];
	char str3[50] =" ";
	char c,a;
	cout<<"********************"<<endl;
	cout<<"STRING CONCATENATION"<<endl;
	cout<<"********************"<<endl;
	cout<<"Enter a first word: ";
	gets(str1);
	strcat(str1,str3);
	cout<<"Enter a second word: ";
	gets(str2);
	cout<<strcat(str1,str2);
	cout<<endl;
}
void prob4(){
	char str1[50];
	int a,b;
	cout<<"**********"<<endl;
	cout<<"PALINDROME"<<endl;
	cout<<"**********"<<endl;
	cout<<"Enter a word: ";
	gets(str1);
	a=strlen(str1);
	for(int i=0;i<a;i++){
		if(str1[i]!=str1[a-(i+1)]) b=0;
		else b=1;
    }
    if (b==1) cout<<"The word "<<str1<<" is a palindrome."<<endl;
    else if (b==0) cout<<"The word "<<str1<<" is NOT a palindrome."<<endl;
}
void prob5(){
	char str1[50];
	cout<<"***************************************"<<endl;
	cout<<"Capitalize certain letters in each word"<<endl;
	cout<<"***************************************"<<endl;
	cout<<"Enter some string: ";
	gets(str1);
	for(int x=0;x<strlen(str1);x++){
		str1[x]=tolower(str1[x]);
		str1[0]=toupper(str1[0]);
	}
	for(int y=0;y<strlen(str1);y++){
		if (str1[y]==' '){
			str1[y+1]=toupper(str1[y+1]);
		}
		
	}
	
	cout<<str1<<endl;
}
void prob6(){
	char str1[50];
	int a;
	cout<<"*********************************************"<<endl;
	cout<<"Enter a string to be spit into separate words"<<endl;
	cout<<"*********************************************"<<endl;
	cout<<"Enter a phrase: ";
	gets(str1);
	a=strlen(str1);
	for(int i=a;i>=0;i--){
		if (str1[i]==32){
			int j=i+1;
			while(str1[j]!=32&&j<a) {
				cout<<str1[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(str1[k]!=32) {
		cout<<str1[k];
		k++;
	}
}
int main()
{
	prob1();
	prob2();
	prob3();
	prob4();
	prob5();
	prob6();
}
