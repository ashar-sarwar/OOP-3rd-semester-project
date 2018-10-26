class user
{

private:
	struct idds
{
	int id;
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

};



	string user_name;
	string first_name;
	string last_name;
	int id;
	string ph;
	int ID;
	string address;
	float amount;
	int age;
	int bookhist;
	//sEntry docs[6];
	string doc_name;
	string doc_time;
	string password;
	idds idd[20];
	idds is[20];
	int flag;

public:
	user()
	{
	this->user_name="";
	this->first_name="";
	this->last_name="";
	this->flag=0;
	this->id=0;
	this->ID=0;
	this->ph="";
	this->amount=0;
	this->bookhist=0;
	this->address="";
	this->age=0;
	this->password="";
	this->doc_name=="";
	this->doc_time="";


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

   string getdoc_name()
   {
	   return this->doc_name;
   }

      string getdoc_time()
   {
	   return this->doc_time;
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


     void setSignUpCredential()
	{
		string Password;
L2:	    setUsername();
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
			pass.open("user.txt");
			
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
				  if(idd[nb_entries].user_name==this->user_name)
				  {cout<<"Either user name or password is taken"<<endl;
		           goto L2;
				  
				  }
				  else
				  {
				   cout<<"Either user name or password is taken"<<endl;
				   goto L2;
				  }
		      }
		      nb_entries++;
		    } 
		
	    pass.close();	
	
		this->password=Password;
	}

   float get_amount()
   {
	   this->amount;
   }
   void set_amount(float Amount)
   {
    this->amount=Amount;
   }

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
	myfile.open("user.txt");
	int lineee=0;
    while (getline(myfile, line))
        ++lineee;

	this->id=lineee;
	myfile.close();

	ofstream fout;
	fout.open("user.txt",ios::app);


	fout<<this->id<<" "<<this->user_name<<" "<<this->first_name<<" "<<this->last_name<<" "<<this->age<<" "<<this->address<<" "<<this->ph<<" "<<this->password<<endl;
    fout.close();

}

   void setUsername()
   { 
	   string UN;
	   cout<<"Enter User Name"<<endl;
	   cin>>UN;
	   this->user_name=UN;

   }		
   void login()
	{
	 //setLoginName();
	 setCredentials();

	}


		void setCredentials()
	{ 
		int count=0;
L3: 
		setUsername();
	        
         string Password;
L2: 
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
			ifstream ads;
			ads.open("user.txt");
			
			int nb_entries=0;
			//for(nb_entries=0;nb_entries<10;nb_entries++)
			while(!ads.eof())
			{
              
		      //ads>>idd[nb_entries].name;
		      ads>>is[nb_entries].id;
			  ads>>is[nb_entries].user_name;
			  ads>>is[nb_entries].first_name;
			  ads>>is[nb_entries].last_name;
			  ads>>is[nb_entries].age;
		      ads>>is[nb_entries].address;
			  ads>>is[nb_entries].ph;
			  ads>>is[nb_entries].password;
			  

			  if(is[nb_entries].password==Password&&is[nb_entries].user_name==this->user_name)
			 
		      {
				 cout<<"Login Successfull"<<endl;
				 count++;
		         break;
		      }
		      nb_entries++;
		    }
			if(is[nb_entries].user_name!=this->user_name)
			{
			 cout<<"Wrong Credentials"<<endl;
		     goto L3;
			}
			else if(is[nb_entries].password!=Password)
			 {
			  cout<<"Wrong Credentials"<<endl;
			  goto L2;
			 }
			ads.close();
	}
		
   void showdata_docs()
   {   
	   ifstream fin;
       fin.open("docs.txt");
	  int count=0;
	   for(count =0; fin.good(); count++)
	   {
		   fin>>idd[count].doc_firstname;
		   fin>>idd[count].doc_lastname;
		   fin>>idd[count].time;
           cout<<"Dr."<<this->idd[count].doc_firstname<<" "<<this->idd[count].doc_lastname<<endl<<"Timing: "<<this->idd[count].time<<endl<<endl;

        }

   }
  
  
  void makebooking()
   {
	  int nb_entries;

	   ifstream fin;
       fin.open("docs.txt");
	  
	   for(nb_entries =0; fin.good(); nb_entries++)
	   {
		   fin>>idd[nb_entries].doc_firstname;
		   fin>>idd[nb_entries].doc_lastname;
		   fin>>idd[nb_entries].time;
		   cout<<"Dr."<<this->idd[nb_entries].doc_firstname<<" "<<this->idd[nb_entries].doc_lastname<<endl<<"Timing: "<<this->idd[nb_entries].time<<endl<<endl;
	   }

   L1:
	   
	   string user_input;
	   int flag=0;
	   cout<<"Enter the first name of Doctor you want to fix your appointment"<<endl;
	   cin>>user_input;
	      int count=0;
          int index;
	   for(index =0; index < 4; index++)
	   {
	    
		   if(user_input==idd[index].doc_firstname)
		   {
			 flag;
			 break;
		   }


		   count++;
	   }
	   if(flag==0)
	   {
	   this->doc_name="";
	   this->doc_time="";
	   this->doc_name.append(this->idd[count].doc_firstname);
	 
	   this->doc_name.append(" ");

	   this->doc_name.append(this->idd[count].doc_lastname);

	   this->doc_time.append(this->idd[count].time);

	   cout<<this->doc_name<<endl<<this->doc_time<<endl;
	   
	   fin.close();
	   }

	   else
	   {goto L1;}
	   
	   string filename;
	   filename.append(this->idd[count].doc_firstname);
	   filename.append(".txt");
	   ifstream fini;
	   fini.open(filename.c_str());
	    int turn=0;
	    int run=0;
	    int var=0;
	    string word;
		while(getline(fini,word))
		{
	  if(fini>>run)
	  {
		 // cout<<run<<endl;
	      turn++;
	  }
	  var++;
		}

	    if(turn==0)
			 {
                this->id=0;
	            goto L2;
			 }
		else 
		{
		run++;
		this->id=run;
		goto L2;
		}

		


L2:
			if(var==6)
		 {
			 cout<<"This doctor is not available"<<endl;
		 goto L1;
		 }

		  
		 else
		 {
			 
		 ofstream fout;
			 fout.open(filename,ios::app);
			 fout<<this->id<<" "<<getUsername()<<" "<<getfirst_name()<<" "<<getlast_name()<<" "<< getdoc_name()<<" "<<getdoc_time()<<endl;
		
		  fout.close();
		}

	 }

  void deletebooking()
   {
	   
	string doc_naam;
	int k=0;
	
	cout<<"Enter the Doctor's first name you want to cancel your appointment "<<endl;
   cin>>doc_naam;
   cout<<"Enter your id"<<endl;
   cin>>k;
   int var=0;
   string word;

        string filename;
	   filename.append(doc_naam);
	   filename.append(".txt");
   
	 ofstream fout;
    ifstream fin;
	fin.open(filename.c_str());
	fout.open("tempfile.txt",ios::out);
    fout<<"ID userID Pateint's name Doctor's Name Timing"<<endl;
 int flag=0; 
  while(getline(fin,word))
		{
	        
			 fin>>idd[var].id;
			  fin>>idd[var].user_name;
		     fin>>idd[var].first_name;
		     fin>>idd[var].last_name;
			  fin>>idd[var].doc_firstname;
			    fin>>idd[var].doc_lastname;
		       fin>>idd[var].time;
		  

		  if(k==idd[var].id && this->user_name==idd[var].user_name)
	    {
        flag++;
		 continue;
		  }

	 else 
	 {
		     if(idd[var].id>=0) 
		         fout<<idd[var].id<<" "<< idd[var].user_name<<" "<<idd[var].first_name<<" "<<idd[var].last_name<<" "<<idd[var].doc_firstname<<" "<<idd[var].doc_lastname<<" "<<idd[var].time<<endl;

    }


	var++;
  }

  if(flag==0)
  {
  cout<<"Wrong ID"<<endl;
  }

  else
  {
  cout<<"Appointment Deleted"<<endl;
  }

   
   
     // clear eof and fail bit
    //f_ashar.seekg(0, ios::beg);
   fin.close();
   fout.close();
   remove(filename.c_str());
   rename("tempfile.txt",filename.c_str());
 } 

 



 
 };