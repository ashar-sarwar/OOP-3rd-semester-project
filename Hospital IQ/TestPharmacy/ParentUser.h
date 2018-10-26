class ParentUser
{
protected:
	int id;
	string user_name;
	string first_name;
	string last_name;
	string ph;
	string address;
	int age;
public:
	ParentUser()
	{
	this->user_name="";
	this->first_name="";
	this->last_name="";
	this->id=0;
	this->address="";
	this->age=0;
	this->ph="";
	}
	string getfirst_name()
   {
       cout<<"Enter your first name"<<endl;
	   cin>>this->first_name;
	   return this->first_name;
   }
	 string getlast_name()
   {
       cout<<"Enter your last name"<<endl;
	   cin>>this->last_name;
	   return this->last_name;
   }
   int getage()
   {
	   cout<<"Enter your Age"<<endl;
	   cin>>this->age;
	   return this->age;
   }
    void setage()
   {

	cout<<"Enter your Age"<<endl;
	cin>>this->age;

   }
	 void setfirst_name()
   {
	 cout<<"Enter your first name"<<endl;
	 cin>>this->first_name;


   }

   void setlast_name()
   {
	 cout<<"Enter your last name"<<endl;
	cin>>this->last_name;

   }
   string getUsername()
   {
	   cout<<"Enter User Name"<<endl;
	   cin>>this->user_name;
	   return this->user_name;
   }

   string getaddress()
   {
	   return this->address;
   }


   void setaddress()
   {
	cout<<"Enter your address: "<<endl;
    cin>>this->address;
   }
   string get_ph()
   {
    cout<<"Enter your Phone Number"<<endl;
    cin>>this->ph;
    return this->ph;
   }
   void set_ph()
   {
    cout<<"Enter your Phone Number"<<endl;
    cin>>this->ph;
   }


};