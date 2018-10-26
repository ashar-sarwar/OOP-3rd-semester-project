

class admin:public Employee
{
	
private:
    
public:
	admin():Employee()
	{}

   void signup()
   {
   this->id=0;
     
   setSignUpCredential();
   setfirst_name();
   setlast_name();
   setage();
   setaddress();

   set_ph();
   
    string line;
    ifstream myfile;
	
	myfile.open("admins.txt");
	int lineee=0;
    while (getline(myfile, line))
        ++lineee;

	this->id=lineee;
	myfile.close();

	
	
	 ofstream fout;

	fout.open("admins.txt",ios::app);
	fout<<this->id<<" "<<this->user_name<<" "<<this->first_name<<" "<<this->last_name<<" "<<this->age<<" "<<this->address<<" "<<this->ph<<" "<<this->password<<endl;
    fout.close();

}

	void login()
	{
	 //setLoginName();
	 setCredentials();

	}
	string getLoginName()
	{
		return this->LoginName;
	}

   void setLoginName()
	{
	 cout<<"Enter Your Username"<<endl;
	 cin>>lognam;
	 this->LoginName=lognam;
	}
	string getLoginPassword()
	{
		return this->LoginPassword;
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
			ads.open("Admins.txt");
			
			int nb_entries=0;
			//for(nb_entries=0;nb_entries<10;nb_entries++)
			while(!ads.eof())
			{
              ads>>idd[nb_entries].id;
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
	}
	
	
	void deque(int n, string words )
	{
	  
    
	
	
	
    int var=0;
 
    string word;

	filename.append(words);
	 ofstream fout;
    ifstream fin;
	fin.open(filename.c_str());
	fout.open("tempfile.txt",ios::out);
 fout<<"ID userID Pateint's name Doctor's Name Timing"<<endl;
  while(getline(fin,word))
		{
	
			  fin>>idd[var].id;
			  fin>>idd[var].user_name;
		      fin>>idd[var].first_name;
		      fin>>idd[var].last_name;
			  fin>>idd[var].doc_firstname;
			  fin>>idd[var].doc_lastname;
		      fin>>idd[var].time;
		  

	if(n==idd[var].id)
	    {
		 continue;
		  }

	 else 
	 {
		     if(idd[var].id>=0) 
		       fout<<idd[var].id<<" "<< idd[var].user_name<<" "<<idd[var].first_name<<" "<<idd[var].last_name<<" "<<idd[var].doc_firstname<<" "<<idd[var].doc_lastname<<" "<<idd[var].time<<endl;
	 }

	var++;
  }
   
   
  
     // clear eof and fail bits
    //f_ashar.seekg(0, ios::beg);
   fin.close();
   fout.close();
   remove(filename.c_str());
   rename("tempfile.txt",filename.c_str());
   }
    
	
    
  	
	void search_patient()
	{
	 setDocName();
	 setPatientUserName();
     setid();
	 ifstream istr;
	 istr.open("Docs.txt");
	
	 int n_entries=0;
	 int count=0;
	 while(istr.good())
		{
		   istr>>idd[n_entries].first_name;
		   istr>>idd[n_entries].last_name;
		   istr>>idd[n_entries].time;
		   if(idd[n_entries].first_name==this->docname)
		   {
			   this->flag++;
			   break;
		   } 
	   n_entries++; 

	 }
	 
	 istr.close();
	 
	 if(this->flag==0)
	 {
	  cout<<"No such doctor available"<<endl;
	 }
	  	   
	  
	
	 if(this->flag==1)
		 {ifstream ins;
			this->filename=this->docname.append(".txt");
			ins.open(this->filename);
			 int count=0;
			while(ins.good())
			{
			  
			  ins>>idd[count].ID;
			  ins>>idd[count].user_name;
			  ins>>idd[count].first_name;
			  ins>>idd[count].last_name;
			  ins>>idd[count].doc_firstname;
			  ins>>idd[count].doc_lastname;
			  ins>>idd[count].time;
			  //cout<<"NAme: "<<idd[count].user_name<<" "<<"ID: "<<idd[count].id;
			  if(idd[count].ID==this->Id&&idd[count].user_name==this->user_name)
			  {
				  cout<<idd[count].first_name<<" "<<idd[count].last_name<<" "<<"has appointment of "<<"Dr. "<<idd[count].doc_firstname<<idd[count].doc_lastname<<" at "<<idd[count].time<<endl;
			   this->flag2++;
			   break;
			  }
			  count++;
			}
			if(this->flag2==0)
			{
			 cout<<"No such appointment"<<endl;
			}
			ins.close();
	 }   
		

	 
	}
	void view_appointment()
	{
			 ifstream ifo;
			 cout<<"Enter the first name of doctor you want to see the list of appointments"<<endl;
			 cin>>filename;
			 this->filename.append(".txt");
			 ifo.open(filename);
			 int nb_entries=0;
			 while(!ifo.eof())
			 {
			  ifo>>idd[nb_entries].ID;
              ifo>>idd[nb_entries].user_name;
			  ifo>>idd[nb_entries].first_name;
			  ifo>>idd[nb_entries].last_name;
			  ifo>>idd[nb_entries].doc_firstname;
			  ifo>>idd[nb_entries].doc_lastname;
			  ifo>>idd[nb_entries].time;
			 
			  cout<<idd[nb_entries].ID<<" "<<idd[nb_entries].user_name<<" "<<idd[nb_entries].first_name<<" "<<idd[nb_entries].last_name<<" "<<idd[nb_entries].doc_firstname<<" "<<idd[nb_entries].doc_lastname<<" "<<idd[nb_entries].time<<endl;
			  nb_entries++; 
			 }

	
	}
	 
	 


   void add_doc()
	{
     	 
	 ifstream doc;
	 cout<<"Enter Doctor first Name to Add"<<endl;
	 cin>>this->doc_first_name;
	 cout<<"Enter Doctor last Name to Add"<<endl;
	 cin>>this->doc_last_name;
	 cout<<"Enter the timings of this Doctor"<<endl;
	 cin>>this->doctime;
	 
	 doc.open("Docs.txt");
	 int n_entries=0;
	 int count=0;
	  for(n_entries =0; doc.good(); n_entries++)
	   {   count=0;
		   doc>>idd[n_entries].doc_firstname;
		   doc>>idd[n_entries].doc_lastname;
		   doc>>idd[n_entries].time;
		   
	   
		   if(idd[n_entries].doc_firstname==doc_first_name&&idd[n_entries].doc_lastname==doc_last_name)
		   {
			   count++;
			  			   
			   break;
			   
		   }
	  }
	  
		if(count==1)
		{
		 cout<<"This Doctor is already available in record"<<endl;
		 add_doc();
		 exit(0);
		}
        else if(count==0)
		   {
			   ofstream adddocs;
			   ofstream newdoc;
			   filename=this->doc_first_name;
			   filename.append(".txt");
			   newdoc.open(filename,ios::app);
			   adddocs.open("Docs.txt",ios::app);
			   newdoc<<"ID"<<" "<<"userID"<<" "<<"Pateint's name"<<" "<<"Doctor's Name"<<" "<<"Timing"<<endl;
			   adddocs<<this->doc_first_name<<" "<<this->doc_last_name<<" "<<this->doctime;
			   cout<<"Doctor Successfully Added"<<endl;
		       adddocs.close();
			   newdoc.close();
			   
		   }
	   
	   doc.close(); 
	 }


	void DeleteAppointment()
   {
	   
	string doc_naam;
	int k=0;
	
	cout<<"Enter the Doctor's first name you want to cancel the Patient's appointment "<<endl;
    cin>>doc_naam;
    cout<<"Enter Patient's id"<<endl;
    cin>>k;
    int var=0;
    int flag=0;
    string word;
    string filename;
	filename.append(doc_naam);
	filename.append(".txt");
    ofstream fout;
    ifstream fin;
	fin.open(filename.c_str());
	fout.open("tempfile.txt",ios::out);
    fout<<"ID userID Pateint's name Doctor's Name Timing"<<endl;
    while(getline(fin,word))
	{
	
			 fin>>idd[var].id;
			  fin>>idd[var].user_name;
		     fin>>idd[var].first_name;
		     fin>>idd[var].last_name;
			  fin>>idd[var].doc_firstname;
			    fin>>idd[var].doc_lastname;
		  fin>>idd[var].time;
		  
      if(k==idd[var].id)
	    {
		 continue;
		  }

	 else 
	 {
		 if(idd[var].id>=0) 
		  fout<<idd[var].id<<" "<< idd[var].user_name<<" "<<idd[var].first_name<<" "<<idd[var].last_name<<" "<<idd[var].doc_firstname<<" "<<idd[var].doc_lastname<<" "<<idd[var].time<<endl;
	 }

	var++;
  }
   
  fin.close();
   fout.close();
   remove(filename.c_str());
   rename("tempfile.txt",filename.c_str());
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
			pass.open("admins.txt");
			
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

	~admin()
	{
	
	}
	
};