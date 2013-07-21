#include "factory.h"
#include <string>
#ifndef _FACTORY_H_
#define _FACTORY_H_

using namespace std;

class Factory
{
public:
	virtual ~Factory() = 0;
	virtual Product* CreateProduct(string ID) = 0;

protected:
    Factory();

private:

};

class CreateFactory : public Factory
{
public:
	~CreateFactory();
	CreateFactory();
	Product* CreateProduct(string ID);

protected:

private:

};

#endif