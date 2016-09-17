//abad
#include <iostream>
using namespace std;

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
		int price;
};
struct Order{
		Date date;
		Item item;
		int quantity;
		
};

struct Customer{
       Name name;
       int contact;
	   Order order;       
};

void newLine();

int main(){
    Customer cust;
    cout << "Enter 3 Customer Records: \n";
    for(int i=1; i<4; i++){
    cout << "Customer Information " << i << endl;
    cout << "First Name: ";
    cin.getline(cust.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(cust.name.lastName, 29);
    cout << "Contact No#: ";
    cin >> cust.contact;
    cout << "Order Date: " << endl;
    cout << "Day: ";
    cin >> cust.order.date.day;
    cout << "Month: ";
    cin >> cust.order.date.month;
    cout << "Year: ";
    cin >> cust.order.date.year;
    cout << "Enter the items ordered: \n";
    for(int i=1; i<4; i++){
            cout << "ID "<< i << ": ";
            cin >> cust.order.item.id;
            cout<<"Name: ";
            cin>>cust.order.item.itemname;
            cout<<"Price: ";
            cin>>cust.order.item.price;
            cout<<"Quantity: ";
            cin>>cust.order.quantity;
    	}
    	cin.ignore(0);
}
    
    
    cout << "\n\n";
    cout << "Summary Report\n";
    cout << setw(10) << "#"
    	 << setw(15) << "Customer Name"
    	 << setw(20) << "Order Date"
    	 << setw(25) << "Items"
    	 << setw(30) << "Price"
    	 << setw(35) << "Quantity";
    	 
    	 cout.setf(ios::fixed);
    	 cout.setf(ios::showpoint);
    	 cout.precision(2);
    	 
   /* for(i=0;i<5;i++){
    	cout<<endl;
    	cout<<setw(10)<<i+1
    		<<setw(15)<<cust.name.firstName<<","<<cust.name.lastName
    		<<setw(20)<<cust.order.date.day<<"/"<<cust.order.date.month<<"/"<<cust.order.date.year;
    		//<<setw(25)<<
	}
    	 
    
   /* cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    for(int i=0; i<3; i++){
            cout << "Grade "<< i << ": " << stud.grade[i] << endl;        
    }*/
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
