#include <iostream>
using namespace std;

void addIncome(int& inc){
	int i;
	cout<<"Enter Income: ";
	cin>>i;
	inc = inc+i;
	cout<<"Income Added Successfuly!"<<endl;
	cout<<" "<<endl;
}

void addExp(int& exp){
	int e;
	cout<<"Enter Expense: ";
	cin>>e;
	exp = exp+e;
	cout<<"Expense Added Successfuly!"<<endl;
	cout<<""<<endl;
}

void balInq(int inc, int exp, int bal){
	bal= inc - exp;
	if(bal < 0){
		cout<<"You are in Loss of "<<bal<<" $!"<<endl;
		cout<<" "<<endl;
	}
	else if(bal > 0){
		cout<<"You are in Profit of "<<bal<<" $!"<<endl;
		cout<<" "<<endl;
	}
}

int main(){
	int income=0, expense=0, balance=0;
	int choice;
	while(true){
		cout<<"Finance Management System"<<endl;
		cout<<"=========================="<<endl;
		cout<<"1.Add Income"<<endl;
		cout<<"2.Add Expense"<<endl;
		cout<<"3.Balance Inquery"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter Choice: ";
		cin>>choice;
		
		if(choice==1){
			//add income
			system("cls");
			addIncome(income);
		}
		else if(choice==2){
			//add expense
			system("cls");
			addExp(expense);
		}
		else if(choice==3){
			//calcuate Balance
			system("cls");
			balInq(income,expense,balance);
		}
		else if (choice==4){
			cout<<"Best of Luck!"<<endl;
			break;
		}
		
		else{
			cout<<"Error: Invalid Input!"<<endl;
		}
	}
}
