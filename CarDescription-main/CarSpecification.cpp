#include "CarSpecification.h"
#include<iostream>
using namespace std;
//double m_EngineSize,m_HorsePower,m_WheelBase,m_Width,m_Lenght,m_FuelCapasity,m_FuelEfficency,m_PowerPerfFactor;
CarSpecification::CarSpecification():Car(){

	double m_EngineSize=0;
	double m_HorsePower=0;
	double m_WheelBase=0;
	double m_Width=0;
	double m_Lenght=0;
	double m_FuelCapasity=0;
	double m_FuleEfficency=0;
	double m_PowerPerfFactor=0;
}

CarSpecification::CarSpecification(std::string Manufature,std::string Model,std::string VechileType,double PriceInThousand,double YearResaleValue,double SalesInThousanddouble,double EngineSize,double Horsepower,double WheelBase,double Width,double Lenght,double FuelCapasity,double FuelEfficency,double PowerPerfFactor):Car(Manufature,Model,VechileType,PriceInThousand,YearResaleValue,SalesInThousanddouble)
{

	double m_EngineSize=EngineSize;
        double m_HorsePower=Horsepower;
        double m_WheelBase=WheelBase;
        double m_Width=Width;
        double m_Lenght=Lenght;
        double m_FuelCapasity=FuelCapasity;
        double m_FuelEfficency=FuelEfficency;
        double m_PowerPerfFactor=PowerPerfFactor;



}

double CarSpecification::getEngineSize(){

	return m_EngineSize;
}

double CarSpecification::getHorsePower(){

	return m_HorsePower;
}

double CarSpecification::getWheelBase(){

	return m_WheelBase;
}

double CarSpecification::getWidth(){

	return m_Width;
}

double CarSpecification::getLenght(){

	return m_Lenght;
}

double CarSpecification::getFuelCapasity(){

	return m_FuelCapasity;
}

double CarSpecification::getFuelEfficency(){

	return m_FuelEfficency;
}

double CarSpecification::getPowerPerfFactor(){

	return m_PowerPerfFactor;
}

std::string CarSpecification::getCarRange(){

		double  price=Car::getPriceInThousand();
	if(price<25){

		return "lowend";
	}
	else if(price<50){

		return "midrange";
	}
	else{

		return "HighEnd";
	}
//	return "kiran";


}

double CarSpecification::getCarRating(){

	double Esize  =   m_EngineSize;
	double Hpower =  m_HorsePower;
	double PPFactor= m_PowerPerfFactor;
	if(Esize<=2||Hpower<=150||PPFactor<=60){

		return 1;
	}
	else if((Esize>2&&Esize<4)||Hpower<250||PPFactor<=100){

		return 3;
	}
	else{

		return 4.5;
	}
	
	

//	return 10;
}


void CarSpecification::display(){

	std::cout<<getManufature()<<endl;
	std::cout<<getModel()<<endl;
	std::cout<<getVechileType()<<endl;
	std::cout<<getPriceInThousand()<<endl;
	std::cout<<getYearResaleValue()<<endl;
	std::cout<<SalesInThousand()<<endl;
	std::cout<<m_EngineSize<<endl;	
	std::cout<<m_HorsePower<<endl;
	std::cout<<m_WheelBase<<endl;
	std::cout<<m_Width<<endl;
}





























