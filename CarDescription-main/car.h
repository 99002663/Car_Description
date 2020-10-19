#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Car{
	std::string m_Manufature;
	std::string m_Model;
	std::string m_VechileType;
	double m_PriceInThousand;
	double m_YearResaleValue;
	double m_SalesInThousand;
	public:
		Car();

		Car(std::string,std::string ,std::string,double ,double,double);

		std::string getManufature();

//			return m_Manufature;
		//}
		std::string getModel();

//			return m_Model;
		//}
		std::string getVechileType();

//			return m_VechileType;
		//}
		double getPriceInThousand();

//			return m_PriceInThousand;
		//}
		double getYearResaleValue();

//			return m_YearResaleValue;
		//}
		double SalesInThousand();

//			return m_SalesInThousand;
		//}
		
		virtual std::string getCarRange()=0;

		virtual double getCarRating()=0;

};
#endif
