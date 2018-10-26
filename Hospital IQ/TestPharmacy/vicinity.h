class vicinity
{
private:
	string Location;
public:
	vicinity()
	{
		this->Location="";
	}
	string getlocation()
	{
		return this->Location;
	}
	void setlocation(string Loc)
	{
		this->Location=Loc;
	}
	void FindVicinity()
	{
	 cout<<"MalirDistrict"<<endl<<endl;
     cout<<"KorangiDistrict"<<endl<<endl;
	 cout<<"EastDistrict"<<endl<<endl;
	 cout<<"SouthDistrict"<<endl<<endl;
	 cout<<"NorthDistrict"<<endl<<endl;

L1:	 cout<<"Choose your location"<<endl;
	 cin>>Location;
	 if(Location=="MalirDistrict")
	 {
      string srg;  
  ifstream filestream("MalirDistrict.txt");  
  if (filestream.is_open())  
  {  
    while ( getline (filestream,srg) )  
    {  
      cout << srg <<endl;  
    }  
    filestream.close();  
  }  
  else {  
      cout << "File opening is fail."<<endl;   
    }  
    
	 }
	 else if(Location=="KorangiDistrict")
	 {
	  string srg;
	  ifstream filestream("KorangiDistrict.txt");  
  if (filestream.is_open())  
  {  
    while ( getline (filestream,srg) )  
    {  
      cout << srg <<endl;  
    }  
    filestream.close();  
  }  
  else {  
      cout << "File opening is fail."<<endl;   
    }  

	 }
	 else if(Location=="SouthDistrict")
	 {
	    string srg;
	  ifstream filestream("SouthDistrict.txt");  
  if (filestream.is_open())  
  {  
    while ( getline (filestream,srg) )  
    {  
      cout << srg <<endl;  
    }  
    filestream.close();  
  }  
  else {  
      cout << "File opening is fail."<<endl;   
    }  

	 }
	 else if(Location=="EastDistrict")
	 {
	  string srg;
	  ifstream filestream("EastDistrict.txt");  
  if (filestream.is_open())  
  {  
    while ( getline (filestream,srg) )  
    {  
      cout << srg <<endl;  
    }  
    filestream.close();  
  }  
  else {  
      cout << "File opening is fail."<<endl;   
    }  

	 }
	 else if(Location=="NorthDistrict")
	 {
	  string srg;
	  ifstream filestream("NorthDistrict.txt");  
  if (filestream.is_open())  
  {  
    while ( getline (filestream,srg) )  
    {  
      cout << srg <<endl;  
    }  
    filestream.close();  
  }  
  else {  
      cout << "File opening is failed."<<endl;   
    }  

	 }
	else
	{
	 cout<<"Wrong District Name"<<endl;
	 goto L1;
	}
	}
};