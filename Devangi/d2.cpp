#include<iostream>
#include<string.h>

using namespace std;

class Hotel{
	private :
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		int rating_type[100];
	   
		
		public :
			
		void setData(int id,char name[100],char type[100],int staff_size,int room_size,int establish_year,char hotel_address[100],int rating_type)
	{
		
	    this->id = id;
	    strcpy(this->name,name);
	    strcpy(this->type,type);
        this->room_size = room_size;
        this->staff_size = staff_size;
        this->establish_year=establish_year;
        this->rating_type[100] = rating_type;
		strcpy(this->address,address);
	
	}
		

		void getData()
		{
		
		cout<<"id= "<< id<<endl
			<<"type= "<<type<<endl
			<<"name="<<name<<endl
		    <<"staff_size = "<<staff_size<<endl
		    <<"room_size = "<<room_size<<endl
		    <<"establish_year = "<<establish_year<<endl
		    <<"rating_type = "<<rating_type<<endl
		    <<"address= "<< address<<endl;
		    
		}
};




int main(){
	
	Hotel h;
	
	h.setData(10,"5 star","vegiterian",6564,790,2010",sky point savariya circle near bapunagar,mubai,7);
	h.getData();
		
		return 0;
}
