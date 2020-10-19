#include "carFunction.h"
#include "CarSpecification.h"
#include "car.h"
#include<fstream>
#include<sstream>
#include <gtest/gtest.h>

namespace {

class  carTest : public ::testing::Test {

	protected :
		void SetUp(){
		
		
			
			std::list<string> res;
     		std::list<string> ::iterator iter;
     		 std::string Manufacture;
    std::string Model;
    std::string VechileType;
    double Price;
     //std::string subject;
   //std::string title;
   //int length;
   double Resale;
   double Esize;
   double Hpower;
   double Wbase;
   double Width;
   double Lenght;
   double Fuel;
   double FuelE;
   double Power;
   double sales;
    		std::string S, T;
    		fstream fin;
    		int count=1;
    		fin.open("Car_sales.csv", ios::in);
    		while(getline(fin, S))
    		{
    			stringstream X(S);
    			while (getline(X, T,'\n'))
   			 {
   	 			res.push_back(T);
    			 }
   	        }
    		
   		
    		for(iter=res.begin();iter!=res.end();++iter)
    		{
    			//cout<<*iter<<endl;
    			stringstream ss(*iter); 
    			while (ss.good()) 
    			{ 
        			string substr; 
        			getline(ss, substr, ','); 
        			switch(count)
						{
							case 1:
								Manufacture=substr;
								break;
							
							case 2:
								Model=substr;
								break;
							case 3:
								VechileType=substr;
								break;
							case 4:
								Price=std::stod(substr);
								break;
						        case 5:
								Resale=std::stod(substr);
								break;
								
							case 6:sales=std::stod(substr);
								break;
								
							case 7:Esize=std::stod(substr);
								break;
								
							case 8: Hpower=std::stod(substr);
								break;
							
							case 9:Wbase=std::stod(substr);
								break;
							case 10:Width=std::stod(substr);
								break;
							case 11:Lenght=std::stod(substr);
								break;
							case 12:Fuel=std::stod(substr);
								break;
							case 13:FuelE=std::stod(substr);
								break;
							
							case 14:Power=std::stod(substr);
								
							
		                                               cars1.addCar(Manufacture,Model,VechileType,Price,Resale,sales,Esize,Hpower,Wbase,Width,Lenght,Fuel,FuelE,Power);
								//cars.addCar("kiran","ha","ahs",12,12,12,2,12,12,13,1313,1,3,13);
      								 std::string Manufacture="";
    								std::string Model="";
    std::string VechileType="";
    double Price=0;
     //std::string subject;
   //std::string title;
   //int length;
   double Resale=0;
   double Esize=0;
   double Hpower=0;
   double Wbase=0;
   double Width=0;
   double Lenght=0;
   double Fuel=0;
   double FuelE=0;
   double Power=0;
   double sales=0;
   count=0;
								break;
						
						
						}
						++count;
						
		    			} 
		  		}
    
 
 			 }
			
				

		void TearDown(){}
		CarFunction cars1;

};

TEST_F(carTest,count){

	EXPECT_EQ(46,cars1.countAll());
	//EXPECT_EQ(1,cars1.getCarRating("TL"));
	EXPECT_EQ("lowend",cars1.getCarRange("A6"));
}
TEST_F(carTest,Rating){

	//EXPECT_EQ(46,cars1.countAll());
	EXPECT_EQ(1,cars1.getCarRating("TL"));
	//EXPECT_EQ("lowend",cars1.getCarRange("A6"));
}

TEST_F(carTest,Remove){

	//EXPECT_EQ(46,cars1.countAll());
	//EXPECT_EQ(1,cars1.getCarRating("TL"));
	//EXPECT_EQ("lowend",cars1.getCarRange("A6"));
	cars1.removeCar("A4");
	EXPECT_EQ(45,cars1.countAll());
	
}

TEST_F(carTest,Range){

	//EXPECT_EQ(46,cars1.countAll());
	//EXPECT_EQ(1,cars1.getCarRating("TL"));
	EXPECT_EQ("HighEnd",cars1.getCarRange("Impala"));
	//cars.removeCar("323i");
	
	
}


}
/*int main(){

	CarFunction c1;
	c1.get_data();
	c1.addCar("HONDA","cv","passenger",10,5,40,1.2,151,4,12,14,10,14,124);

}*/
