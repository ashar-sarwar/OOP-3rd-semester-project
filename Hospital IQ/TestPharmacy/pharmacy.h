
class pharmacy
{
public:
	pharmacy()
	{
		this->MedName="";
		this->price=0;
	}
	string getMedicineName()
	{
		return this->MedName;
	}
	void setMedicineName(string name)
	{
		this->MedName=name;
	}
	void TellMedicineType()
	{
	    cout<<"Enter the type of medicine"<<endl;
		cout<<"1: Cough"<<endl;
		cout<<"2: Fever"<<endl<<endl;
		cin>>type;
		if(type==1)
		{cout<<"Enter Medicine Name"<<endl;
		cin>>MedName;
		coughMed(MedName);
		}
		else if(type==2)
		{
		 cout<<"Enter Medicine Name"<<endl;
		 cin>>MedName;
		 FeverMed(MedName);
		}
	}
	void FeverMed(string MedName)
	{
	 struct sEntry
		{
		 std::string name;
		};
	 sEntry entries[10];
	 ifstream ifs;
	 ifs.open("FeverMed.txt");
     int index;
	 string arr[10];
	 if(ifs==NULL)
	 {
	  cout<<"File empty"<<endl;
	 }
	 else if(ifs!=NULL){
		 for(index=0;ifs.good()&&index<10;index++)
	 {
	  ifs >> entries[index].name;
	  arr[index]=entries[index].name;
	 }
      
	 int flag=0;
	 for(index=0;index<10;index++)
	 {
	  if(MedName==arr[index])
	  {
	   cout<<MedName<<" is Available"<<endl;
	   flag++;
	   break;
	  }
	 }
	 if(flag==0)
	 {
	  cout<<MedName<<" is not available"<<endl;
	  vicinity v1;
	  v1.FindVicinity();
	 }
	 }
	 ifs.close();
	 }
	void coughMed(string MedName)
	{
		struct sEntry
		{
		 std::string name;
		};
	 sEntry entries[10];
	 ifstream ifs;
	 ifs.open("CoughMed.txt");
     int index;
	 string arr[10];
	 if(ifs==NULL)
	 {
	  cout<<"File empty"<<endl;
	 }
	 else if(ifs!=NULL){
		 for(index=0;ifs.good()&&index<10;index++)
	 {
	  ifs >> entries[index].name;
	  arr[index]=entries[index].name;
	 }
      
	 int flag=0;
	 for(index=0;index<10;index++)
	 {
	  if(MedName==arr[index])
	  {
	   cout<<MedName<<" is Available"<<endl;
	   flag++;
	   break;
	  }
	 }
	 if(flag==0)
	 {
	  cout<<MedName<<" is not available"<<endl;
	  vicinity v1;
	  v1.FindVicinity();
	 }
	 }
	 ifs.close();
	 }
	
private:
	string MedName;
	int price;
	int type;
};
