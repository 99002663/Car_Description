#include<iostream>
#include "car.h"
using namespace std;


	Car::	Car():m_Manufature(""),m_Model(""),m_VechileType(""),m_PriceInThousand(0),m_YearResaleValue(0),m_SalesInThousand(0){}

	Car::	Car(std::string Manufature,std::string Model,std::string VechileType,double PriceInThousand,double YearResaleValue,double SalesInThousand):m_Manufature(Manufature),m_Model(Model),m_VechileType(VechileType),m_PriceInThousand(PriceInThousand),m_YearResaleValue(YearResaleValue),m_SalesInThousand(SalesInThousand){}
	
	
	//,double PriceInThousand,double YearResaleValue,double SalesInThousand
		std::string Car:: getManufature(){

			return m_Manufature;
		}
		std::string Car:: getModel(){

			return m_Model;
		}
		std::string Car:: getVechileType(){

			return m_VechileType;
		}
		double Car:: getPriceInThousand(){

			return m_PriceInThousand;
		}
		double Car:: getYearResaleValue(){

			return m_YearResaleValue;
		}
		double Car:: SalesInThousand(){

			return m_SalesInThousand;
		}
