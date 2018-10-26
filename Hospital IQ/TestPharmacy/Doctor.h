class doctor:public Employee
{
	
private:
			
public:

	doctor():Employee()
	{}
  
    
    void signup()
	{
   setfirst_name();
   setlast_name();
     int temp=0;
	 int flag=0;
	   string line;
	  ofstream fout;
   ifstream fin;
   fin.open("docs.txt");

   	while(fin.good())
	{
		fin>>idd[temp].doc_firstname;
		fin>>idd[temp].doc_lastname;
		fin>>idd[temp].time;

		if(idd[temp].doc_firstname==this->first_name&&idd[temp].doc_lastname==this->last_name)
		{
		  flag++;
		  break;
		}

	}

	if(flag==0)
	{
	cout<<"You are not a registered doctor!!!"<<endl;
	exit(0);
	}


   setage();
   setaddress();
   set_ph();
   setSignUpCredential();
   
	
	fin.open("Doctors.txt");
	int lineee=0;
    while (getline(fin, line))
        ++lineee;

	this->id=lineee;

	

	fout.open("Doctors.txt",ios::app);
	fout<<this->id<<" "<<this->user_name<<" "<<this->first_name<<" "<<this->last_name<<" "<<this->age<<" "<<this->address<<" "<<this->ph<<" "<<this->password<<endl;
    fout.close();
	fin.close();
}
  
void setSignUpCredential()
	{



		string Password;
L2:	    
	
		setUsername();
		cout<<"Enter Your password.Length should not be less then 5 and greater then 13"<<endl;
		cin>>Password;
		while(Password.length()<5||Password.length()>13)
		{
			if(Password.length()<5)
			{
			 cout<<"Password too short."<<endl;
			 cout<<"Enter Your Password."<<endl;
			 cin>>Password;
			}
			else if(Password.length()>13)
			{
			 cout<<"Password too Long."<<endl;
			 cout<<"Enter Your Password"<<endl;
			 cin>>Password;
			}
		}
			ifstream pass;
			pass.open("Doctors.txt");
			
			//for(nb_entries=0;nb_entries<pass.eof();nb_entries++)
			int nb_entries=0;
			while(!pass.eof())
			{
              pass>>idd[nb_entries].id;
			  pass>>idd[nb_entries].user_name;
			  pass>>idd[nb_entries].first_name;
		      pass>>idd[nb_entries].last_name;
		      pass>>idd[nb_entries].age;
		      pass>>idd[nb_entries].address;
		      pass>>idd[nb_entries].ph;
		      pass>>idd[nb_entries].password;

			  

			  if(idd[nb_entries].password==Password||idd[nb_entries].user_name==this->user_name)
		      {
				cout<<"Either username or password is taken"<<endl;
				goto L2;
		      }
		      nb_entries++;
		    } 
		
	    pass.close();	
	
		this->password=Password;
	}
	 void setCredentials()
	{ 
		int count=0;
	 	L3: setUsername();
	        
         string Password;
	 L2: cout<<"Enter Your password.Length should not be less then 5 and greater then 13"<<endl;
		 cin>>Password;
		 while(Password.length()<5||Password.length()>13)
		 {
			if(Password.length()<5)
			{
			 cout<<"Password too short."<<endl;
			 cout<<"Enter Your Password."<<endl;
			 cin>>Password;
			}
			else if(Password.length()>13)
			{
			 cout<<"Password too Long."<<endl;
			 cout<<"Enter Your Password"<<endl;
			 cin>>Password;
			}
		}
			ifstream ads;
			ads.open("Doctors.txt");
			
			int nb_entries=0;
			//for(nb_entries=0;nb_entries<10;nb_entries++)
			while(!ads.eof())
			{
              
		      //ads>>idd[nb_entries].name;
		      ads>>idd[nb_entries].ID;
			  ads>>idd[nb_entries].user_name;
			  ads>>idd[nb_entries].first_name;
			  ads>>idd[nb_entries].last_name;
			  ads>>idd[nb_entries].age;
		      ads>>idd[nb_entries].address;
			  ads>>idd[nb_entries].ph;
			  ads>>idd[nb_entries].password;
			  

			  if(idd[nb_entries].password==Password&&idd[nb_entries].user_name==this->user_name)
			 
		      {
				 cout<<"Login Successfull"<<endl;
				 count++;
		         break;
		      }
		      nb_entries++;

		    }
			if(idd[nb_entries].user_name!=this->user_name&&count==0)
			{
			 cout<<"Wrong Credentials"<<endl;
		     goto L3;
			}
			else if(idd[nb_entries].password!=Password&&count==0)
			 {
			  cout<<"Wrong Credentials"<<endl;
	          goto L2;		
			}

		    	this->first_name=idd[nb_entries].first_name;
				 cout<< this->first_name<<endl;
				 this->last_name=idd[nb_entries].last_name;
				 cout<< this->last_name<<endl;
			     ads.close();
	}

    void callpatient()
	{
		int temp=0;
		int run=0;
		string word;
		ifstream fin;
		string filename;
		filename.append( getfirst_name());
	    filename.append(".txt");
		fin.open(filename);
		admin *a1=new admin;
		while(getline(fin,word))
		{
	  if(fin>>run)
	  {
		 int temp=run;
		 fin.close();
		 a1->deque(temp,filename);
		 
		 break;
	     }

		}
		
	}

	void login()
	{
	setCredentials();
	}

	~doctor()
	{}



};