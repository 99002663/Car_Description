#ifndef CARSPECIFICATION_H_INCLUDED
#define CARSPECIFICATION_H_INCLUDED
#include "car.h"
#include<iostream>
#include<string>
using namespace std;

class CarSpecification :public Car{

	double m_EngineSize,m_HorsePower,m_WheelBase,m_Width,m_Lenght,m_FuelCapasity,m_FuelEfficency,m_PowerPerfFactor;

	public:
		CarSpecification();

		CarSpecification(std::string,std::string,std::string,double,double,double,double,double,double,double,double,double,double,double);

		double getEngineSize();

		double getHorsePower();

		double getWheelBase();

		double getWidth();

		double getLenght();

		double getFuelCapasity();

		double getFuelEfficency();

		double getPowerPerfFactor();

		std::string getCarRange();

		double  getCarRating();
		
		void display();
};

#endif
