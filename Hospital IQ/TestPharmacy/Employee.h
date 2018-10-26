class Employee
{
protected:
	struct idds
{
	int id;
	string ID;
	string name;
	string user_name;
	string first_name;
	string last_name;
	int age;
	string address;
	int ph;
	string password;
	string doc_firstname;
	string doc_lastname;
	string time;
	string lognam;
	string logpass;
	string LoginName;
    string LoginPassword;

};
	string lognam;
	string logpass;
	string LoginName;
    string LoginPassword;
	string docname;
	string doc_first_name;
	string doc_last_name;
	string user_name;
	string first_name;
	string last_name;
	string doctime;
	int id;
	string ph;
	string address;
	int age;
    string password;
	idds idd[20];
	int flag2;
	string filename;
	int flag;
	string Id;
public:
	Employee()
	{
        this->Id="";
		this->flag2=0;
	this->flag=0;
	this->user_name="";
	this->first_name="";
	this->last_name="";
	this->id=0;
	this->ph="";
	this->address="";
	this->age=0;
	this->password="";
	this->filename="";  
	this->doctime="";
	    this->LoginName="";
        this->LoginPassword="";
	    this->doc_first_name="";
	    this->doc_last_name="";
	}
	void setid()
	{
     string ID;
	 cout<<"Enter Patient's Unique id"<<endl;
	 cin>>ID;
	 this->Id=ID;
	}

	string getDocName()
	{
	 return this->docname; 
	}
	void setDocName()
	{
	 string DOC;
	 cout<<"Enter the first name of consulted Doctor"<<endl;
	 cin>>DOC;
	 this->docname=DOC;
	 
	}

	 string getfirst_name()
   {
       return this->first_name;
	   
   }

     string getlast_name()
   {
	   return this->last_name;
   }

   int getage()
   {
	   return this->age;
   }

   void setage()
   {
	   int Age;
	cout<<"Enter your Age"<<endl;
	cin>>Age;
	this->age=Age;
   }

   void setfirst_name()
   {string FNAAM;
	 cout<<"Enter your first name"<<endl;
	 cin>>FNAAM;
	 this->first_name=FNAAM;
   }

   void setlast_name()
   {
     string LNAAM;
	 cout<<"Enter your last name"<<endl;
	cin>>LNAAM;
	this->last_name=LNAAM;

   }

  void setUsername()
   {string NAAM;
   cout<<"Enter user name"<<endl;
   cin>>NAAM;
   this->user_name=NAAM;
   
   } 
  void setPatientUserName()
	{string USER;
	 cout<<"Enter Patient's Unique UserName"<<endl;
	 cin>>USER;
	 this->user_name=USER;

	}
  
	 string getUsername()
   {
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
    return this->ph;
   }

   void set_ph()
   {
    cout<<"Enter your Phone Number"<<endl;
    cin>>this->ph;
   }
string getpassword()
	{
		return this->password;
	}
	
   

     virtual void setSignUpCredential()
	{

	}

	 virtual void setCredentials()
	{ 
		
	}


	 virtual void signup()
    {
  

    }

	 virtual void login()
	 {
	 
	 }
	virtual void search_patient()
	{
	
	}
	virtual void view_appointment()
	{
	
	}
	virtual void add_doc()
	{
	
	}
	virtual void DeleteAppointment()
	{
	
	}
	virtual void callpatient()
	{
	
	}
	virtual ~Employee()
	{}
	
};

