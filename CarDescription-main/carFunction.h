 #ifndef __CARFUNCTION_H
#define __CARFUNCTION_H

#include "CarSpecification.h"
#include<list>
#include<vector>

class CarFunction
{

	std::list<CarSpecification> cars;
	public:
		void addCar(std::string,std::string,std::string,double,double,double,double,double,double,double,double,double,double,double);
		CarSpecification* findCarByModel(std::string);
		int countAll();
		double getCarRating(std::string);
		std::string getCarRange(std::string);
		void removeCar(std::string );
		//vector<std::string> make_data(std::string line);
		//list<CarSpecification>  get_data();  
};
#endif
