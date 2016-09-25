//abad
#include <iostream>
#include <iomanip>
using namespace std;

int a,b,c,p;
float grad;
int i,j;
void NewLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}

void prob2(){

struct Student{
	int ID;
	char studname[30];
	struct Quizzes{
		float quiz;
	};
	Quizzes quizzes[3];
};

	Student stud[5];
	for(i=0;i<5;i++){
		cout<<"Student "<<i+1<<endl;
		cout<<"ID: ";
		cin>>stud[i].ID;
		NewLine();
		cout<<"Name: ";
		cin.getline(stud[i].studname,29);
		cout<<"Enter 3 quizzes: ";
		for(j=0;j<3;j++){	
			cin>>stud[i].quizzes[j].quiz;	
		}
	}
	
	cout<<setw(5)<<"No."<<setw(20)<<"Student No."<<setw(30)<<"Name"<<setw(15)<<"Grade"<<setw(20)<<"Remark"<<endl;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			grad+=stud[i].quizzes[j].quiz;
		}
		cout<<setw(5)<<i+1<<setw(20)<<stud[i].ID<<setw(30)<<stud[i].studname<<setw(15)<<setprecision(4)<<grad/3<<setw(20);
			if( grad>=75 ){
				cout<<"Passed"<<endl;
			}
			else{
				cout<<"Failed"<<endl;
			}		
	}

	
}
struct Name{
       char lastName[30];
       char firstName[30];
};
struct Date{
		int day;
		int month;
		int year;
};
struct Item{
		int id;
		char itemname[30];
		double price;
};
struct Order{
		Date date;
		Item item[3];
		int quantity[3];
		
};

struct Customer{
       Name name;
       int contact;
	   Order order;
};


Item item[3];
void prob3(){
    Customer cust[3];
    
    cout << "Enter 3 Customer Records: \n";
    for(a=1; a<4; a++){
    cout << "Customer Information " << a << endl;
    cout << "First Name: ";
    cin.getline(cust[a].name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(cust[a].name.lastName, 29);
    cout << "Contact No#: ";
    cin >> cust[a].contact;
    cout << "Order Date: " << endl;
    cout << "Day: ";
    cin >> cust[a].order.date.day;
    cout << "Month: ";
    cin >> cust[a].order.date.month;
    cout << "Year: ";
    cin >> cust[a].order.date.year;
    cout << "Enter the items ordered: \n";
    for(b=0; b<3; b++){
            cout << "ID: ";
            cin >> cust[a].order.item[b].id;
            NewLine();
            cout<<"Name: ";
            cin>>cust[a].order.item[b].itemname;
            cout<<"Price: ";
            cin>>cust[a].order.item[b].price;
            cout<<"Quantity: ";
            cin>>cust[a].order.quantity[c];
    	}
    	cin.ignore();
}
    b=0;
    p=0;
    cout << "\n\n";
    cout << "Summary Report\n";
    cout << "#"
		 << setw(30) << "Customer Name"
		 << setw(20) << "Order Date"
		 << setw(15) << "Items"
		 << setw(15) << "Price"
		 << setw(15) << "Quantity"
		 << endl;	 
    for(a=0;a<3;a++){
    	cout<<" ";
    	cout<<a+1
    		<<setw(23)<<cust[a].name.lastName<<","
			<<setw(6)<<cust[a].name.firstName
    		<<setw(11)<<cust[a].order.date.day<<"/"<<cust[a].order.date.month<<"/"<<cust[a].order.date.year<<endl;
    	for (b=0;b<3;b++){
    		cout<<setw(67)<<cust[a].order.item[b].itemname
				<<setw(15)<<cust[a].order.item[b].price
				<<setw(15)<<cust[a].order.quantity[c]<<endl;
    		p += cust[a].order.item[b].price*cust[a].order.quantity[c];
		}
		cout<<setw(96)<<"TOTAL PRICE: "<<p<<endl;
		
}
}
int main(){
	int i;
	
	cout<<"Select Problem #: "<<endl<<"Problem 2"<<endl<<"Problem 3"<<endl;
	cin>>i;
	
	switch(i){
		case 2:
			prob2();
		break;
		case 3:
			prob3();
			break;
	}
	
	return 0;
}

