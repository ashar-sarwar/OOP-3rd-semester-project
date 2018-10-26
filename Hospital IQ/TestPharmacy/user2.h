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

struct sEntry
   {
	   string first_name;
	   string last_name;
	   string time;
   };
class user
{

private:
	string first_name;
	string last_name;
	int id;
	string ph;
	string address;
	float amount;
	int age;
	int bookhist;
	sEntry docs[4];
	string doc_name;
	string doc_time;
	string password;
	idds idd[20];
	string user_name;
	

public:
	user()
	{
	this->user_name="ashar11";
	this->first_name="ashar";
	this->last_name="sarwar";
	this->ph="890800";
	this->amount=0;
	this->bookhist=0;
	this->address="hsdhsadja";
	this->age=66;
	this->password="";
	this->doc_name=="";
	this->doc_time="";
	this->id=0;

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
	fflush(stdin);
    
   }

   void setlast_name()
   {
	 cout<<"Enter your last name"<<endl;
	cin>>this->last_name;
    
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

   void setCredentials()
	{ 
		string lognam;
		int count=0;
	 	L3: cout<<"Enter Your Username"<<endl;
	     cin>>lognam;
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
			ads.open("user.txt");
			
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
			 
			  if(idd[nb_entries].password==Password && idd[nb_entries].user_name==lognam)
			 
		      {
				 cout<<"Login Successful"<<endl;
		         count++;
		         break;
		      }
		      nb_entries++;

		    }
			 if(idd[nb_entries].user_name!=lognam&&count==0)
			{
			 cout<<"Wrong Username"<<endl;
		     goto L3;
			}
			 else if(idd[nb_entries].password!=Password&&count==0)
			 {
			  cout<<"Wrong password"<<endl;
			  goto L2;
			 }
 }
	void setuser_name()
   {  
	   string UN;
	   cout<<"Enter User Name"<<endl;
	   cin>>UN;
	   this->user_name=UN;
	}

   void setpassword()
	{
		string Password;
	L2:	cout<<"Enter Your password.Length should not be less then 5 and greater then 13"<<endl;
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
			while(!pass.eof())
			{int nb_entries=0;
              pass>>idd[nb_entries].id;
		      pass>>idd[nb_entries].first_name;
		      pass>>idd[nb_entries].last_name;
		      pass>>idd[nb_entries].age;
		      pass>>idd[nb_entries].address;
		      pass>>idd[nb_entries].ph;
		      pass>>idd[nb_entries].password;
		     if(idd[nb_entries].password==Password)
		      {
				 cout<<"This password is already taken"<<endl;
		        goto L2;
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
   setuser_name();
   setfirst_name();
   setlast_name();
   setage();
   setaddress();
   set_ph();
   setpassword();
	
string line;
    ifstream myfile("user.txt");
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
  

   void showdata_docs(int count)
   {  
	   
	   cout<<"Dr."<<this->docs[count].first_name<<" "<<this->docs[count].last_name<<endl<<"Timing: "<<this->docs[count].time<<endl<<endl;//" Age:"<<this->age<<" Ph:"<<this->ph;
       
   }

   void makebooking()
   {
	  int nb_entries;

	   ifstream fin;
       fin.open("docs.txt");
	  
	   for(nb_entries =0; fin.good(); nb_entries++)
	   {
		   fin>>docs[nb_entries].first_name;
		   fin>>docs[nb_entries].last_name;
		   fin>>docs[nb_entries].time;
		   showdata_docs(nb_entries);
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
	    
		   if(user_input==docs[index].first_name)
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
	   this->doc_name.append(this->docs[count].first_name);
	   
	   this->doc_name.append(" ");

	   this->doc_name.append(this->docs[count].last_name);

	   this->doc_time.append(this->docs[count].time);

	   cout<<this->doc_name<<endl<<this->doc_time<<endl;
	   
	   fin.close();
	   }

	   else
	   {goto L1;}
	   
	   string filename;
	   filename.append(this->docs[count].first_name);
	   filename.append(".txt");
	   ifstream fini;
	   fini.open(filename);
	   int var=0;
	   int temp;
	   string word;
	   int num=0;
	   

    string line;


                ifstream myfile;
  
	
			while(!fini.eof())
		{
			 
			 fini>>idd[var].id;
			 fini>>idd[var].user_name;
		     fini>>idd[var].first_name;
		     fini>>idd[var].last_name;
			 fini>>idd[var].doc_firstname;
			 fini>>idd[var].doc_lastname;
			 fini>>idd[var].time;
			 //num=idd[var].id;
			 
			 var++;
						
		    if(fini==NULL)
               {
                this->id=0;
				goto Label;
				 
                   
			}
			else{
				fini.close();       
	 	        string line;
                ifstream myfile;
		        myfile.open("Ashar.txt");
                int lineee=0;
				while (getline(myfile, line))
                     ++lineee;
                this->id=lineee;
	            num=lineee;
				myfile.close();
	            goto Label; 
     			}
	   	  
			}

Label:			
			
			//if(this->id==num)
             // { num++;
              // this->id=num;
		    //	}

         if(var==4)
		 {
			 cout<<"This doctor is not available"<<endl;
		 goto L1;
		 }

		  
	 else
		 {
			 
			 ofstream fout;
			 fout.open(filename,ios::app);
			 fout<<this->id<<" "<<this->user_name<<" "<<getfirst_name()<<" "<<getlast_name()<<" "<< getdoc_name()<<" "<<getdoc_time()<<endl;
		
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
   int flag=0;

        string filename;
	   filename.append(doc_naam);
	   filename.append(".txt");
   
	 ofstream fout;
    ifstream fin;
	fin.open(filename);
	fout.open("tempfile.txt",ios::out);
 //  fout<<"ID Name Age Phone Doctor's Name Timing"<<endl;
  for(var=0;fin.good();var++)
		{
			 fin>>idd[var].id;
			 fin>>idd[var].user_name;
		     fin>>idd[var].first_name;
		     fin>>idd[var].last_name;
			  
			 fin>>idd[var].doc_firstname;
			    fin>>idd[var].doc_lastname;
			  fin>>idd[var].time;
  }

  while(flag>var)
  {
	 if(k!=idd[flag].id)
	      fout<<idd[flag].id<<" "<< idd[flag].user_name<<" "<<idd[flag].first_name<<" "<<idd[flag].last_name<<" "<<idd[flag].doc_firstname<<" "<<idd[flag].doc_lastname<<" "<<idd[flag].time<<endl;

	 cout<<idd[flag].id<<endl;
	 flag++;
   }

   
  
     // clear eof and fail bits
    //f_ashar.seekg(0, ios::beg);
   fin.close();
   fout.close();
   remove(filename.c_str());
   rename("tempfile.txt",filename.c_str());
   }
  };
   
  /*  
   else if(doc_naam=="Ashir")
   {
	   	 ofstream fout;
    ifstream f_ashir;
	f_ashir.open("appointment_ashir.txt",ios::in);
	ifstream f_ashar;
	f_ashir.open("appointment_ashar.txt",ios::in);
	 fout.open("tempfile.txt",ios::out);
   fout<<"ID Name Age Phone Doctor's Name Timing"<<endl;
   f_ashir.read((char*)this,sizeof(*this));
   
   while (!EOF)
		{
			 if(k==this->id)
   {
    fout.write((char*)this,sizeof(*this));
   }
	f_ashir.read((char*)this,sizeof(*this));
      
   }
  

   f_ashir.close();
   fout.close();
   remove("appointment_ashir.txt");
   rename("tempfile.txt","appointment_ashir.txt");
   }

   
   else if(doc_naam=="Mubashir")
   {
	   	 ofstream fout;
    ifstream f_mobi;
	f_mobi.open("appointment_mobi.txt",ios::in);
	 fout.open("tempfile.txt",ios::out);
   fout<<"ID Name Age Phone Doctor's Name Timing"<<endl;
   f_mobi.read((char*)this,sizeof(*this));
   
   while (!EOF)
		{
			 if(k==this->id)
   {
    fout.write((char*)this,sizeof(*this));
   }
	f_mobi.read((char*)this,sizeof(*this));

   }
  

   f_mobi.close();
   fout.close();
   remove("appointment_mobi.txt");
   rename("tempfile.txt","appointment_mobi.txt");
   }

   }*/

   