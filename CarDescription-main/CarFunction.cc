#include "carFunction.h"

#include<list>
#include<sstream>
#include<fstream>
#include<vector>
#include<iostream>
void CarFunction::addCar(std::string Manufature,std::string Model,std::string VechileType,double PriceInThousand,double YearResaleValue,double SalesInThousand,double EngineSize,double Horsepower,double WheelBase,double Width,double Lenght,double FuelCapasity,double FuelEfficency,double PowerPerfFactor){

		cars.push_back(CarSpecification(Manufature,Model,VechileType,PriceInThousand,YearResaleValue,SalesInThousand,EngineSize,Horsepower,WheelBase,Width,Lenght,FuelCapasity,FuelEfficency,PowerPerfFactor));
}


void CarFunction::removeCar(std::string Model) {

    std::list<CarSpecification>::iterator iter;
    for(iter=cars.begin(); iter!=cars.end(); ++iter)
        if(iter->getModel()==Model)
            break;
    if(iter!=cars.end())
        cars.erase(iter);

}





CarSpecification*  CarFunction::findCarByModel(std::string Model){

	
	std::list<CarSpecification>::iterator iter;
	for(iter=cars.begin();iter!=cars.end();++iter)
		if(iter->getModel()==Model)
			return &(*iter);
	return NULL;
}

 int CarFunction::countAll(){

	int count1=0;
	std::list<CarSpecification>::iterator iter;
	for(iter=cars.begin();iter!=cars.end();++iter){
		//iter->CarSpecification::display();
		count1++;
	}
	return count1;
}

double CarFunction::getCarRating(std::string model)
{
	double k=0;
	std::list<CarSpecification>::iterator iter;
	for(iter=cars.begin();iter!=cars.end();++iter)
		if(iter->getModel()==model)
			k=iter->CarSpecification::getCarRating();	 
	return k;
	
}

std::string CarFunction::getCarRange(std::string model){

	std::string k1="";
	std::list<CarSpecification>::iterator iter;
	for(iter=cars.begin();iter!=cars.end();++iter)
		if(iter->getModel()==model)
			k1=iter->CarSpecification::getCarRange();	 
	return k1;
	
	

}
