#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<fstream>
using namespace std;
#include"user.h"
#include"Employee.h"
#include"Admin.h"
#include"doctor.h"
#include"vicinity.h"
#include"pharmacy.h"


void main()
{
	int n=0,k=0;
L1:
	cout<<"Welcome to Hospital IQ"<<endl<<endl;
	cout<<"Enter 1 to signup as admin"<<endl;
	cout<<"Enter 2 to signup as doctor"<<endl;
	cout<<"Enter 3 to signup as patient"<<endl<<endl;

	cout<<"Enter 4 to login as admin"<<endl;
	cout<<"Enter 5 to login as doctor"<<endl;
	cout<<"Enter 6 to login as patient"<<endl<<endl;
	cout<<"Enter 7 to exit"<<endl<<endl;
cin>>n;

switch(n)
{

case 1:
	{
	Employee *e1=new admin();
	e1->signup();
L2:
	cout<<"Enter 1 to delete appointment"<<endl;
	cout<<"Enter 2 to add doctor"<<endl;
	cout<<"Enter 3 to search patient"<<endl;
	cout<<"Enter 4 to view appointments"<<endl;
	cout<<"Enter 5 to logout"<<endl;

	cin>>k;
	switch(k)
	{
	case 1:
		e1->DeleteAppointment();
		goto L2;
		break;
	case 2:
		e1->add_doc();
		goto L2;
		break;

	case 3:
	   e1->search_patient();
		goto L2;
	   break;

	case 4:
		e1->view_appointment();
		goto L2;
		break;

	case 5:
		goto L1;
		break;

	 default:
	   cout<<"NO such choice available"<<endl;
	   goto L2;
	}
}
	break;
	
case 2:
	{
	Employee *e2=new doctor();
	e2->signup();
L3:
	
	cout<<"Enter 1 to call next patient"<<endl;
	cout<<"Enter 2 to logout"<<endl;

	cin>>k;
	switch(k)
	{
	case 1:
		 e2->callpatient();
		 goto L3;
		break;

	case 2:
		goto L1;
		break;

	default:
	   cout<<"NO such choice available"<<endl;
	   goto L3;
	}

	}
	break;

case 3:
	{
	user *u1=new user();
	u1->signup();
L4:
	cout<<"Enter 1 to view doctors list"<<endl;
    cout<<"Enter 2 to make booking"<<endl;
	cout<<"Enter 3 to delete booking"<<endl;
	cout<<"Enter 4 for Pharmacy"<<endl;
	cout<<"Enter 5 to logout"<<endl;

cin>>k;
   switch(k)
{
   case 1:
	   u1->showdata_docs();
	   goto L4;
	   break;

   case 2:
	   u1->makebooking();
	   goto L4;
	   break;

   case 3:
	   u1->deletebooking();
	   goto L4;
	   break;

   case 4:
	   {
	   pharmacy *p1=new pharmacy();
	   p1->TellMedicineType();
	   goto L4;
	   }
	   break;

   case 5:
	   goto L1;
	   break;

	default:
	   cout<<"NO such choice available"<<endl;
	   goto L4;
	   break;
}
	}
   break;

case 4:
	{
	Employee *e3=new admin();
	e3->login();
L5:
	cout<<"Enter 1 to delete appointment"<<endl;
	cout<<"Enter 2 to add doctor"<<endl;
	cout<<"Enter 3 to search patient"<<endl;
	cout<<"Enter 4 to view appointments"<<endl;
	cout<<"Enter 5 to logout"<<endl;

	cin>>k;
	switch(k)
	{
	case 1:
		e3->DeleteAppointment();
		goto L5;
		break;
	case 2:
		e3->add_doc();
		goto L5;
		break;

	case 3:
		e3->search_patient();
		goto L5;
		break;

	case 4:
		e3->view_appointment();
		goto L5;
		break;

	case 5:
		goto L1;
		break;

	default:
	   cout<<"NO such choice available"<<endl;
	   goto L5;
	}

	}
	break;



case 5:
	{
	Employee *e4=new doctor();
	e4->login();
L6:
	cout<<"Enter 1 to call next patient"<<endl;
	cout<<"Enter 2 to logout"<<endl;

	cin>>k;
	switch(k)
	{
	case 1:
		e4->callpatient();
		goto L6;
		break;

	case 2:
		goto L1;
		break;

	default:
	   cout<<"NO such choice available"<<endl;
	   goto L6;
	}
	}
	break;

case 6:
	{
	user *u2=new user();
	u2->login();
L7:	
	cout<<"Enter 1 to view doctors list"<<endl;
    cout<<"Enter 2 to make booking"<<endl;
	cout<<"Enter 3 to delete booking"<<endl;
	cout<<"Enter 4 for pharmacy"<<endl;
	cout<<"Enter 5 to logout"<<endl;
cin>>k;
   switch(k)
{
   case 1:
	   u2->showdata_docs();
	   goto L7;
	   break;

   case 2:
	   u2->makebooking();
	   goto L7;
	   break;

   case 3:
	   u2->deletebooking();
	   goto L7;
	   break;

   case 4:
	   {
	   pharmacy *p2=new pharmacy();
	   p2->TellMedicineType();
	   goto L4;
	   }
	   break;

   case 5:
	   goto L1;
	   break;

   default:
	   cout<<"NO such choice available"<<endl;
	   goto L7;
}
	}
   break;
case 7:
	exit(0);
default:
	cout<<"NO such choice available"<<endl;
	goto L1;
}

}