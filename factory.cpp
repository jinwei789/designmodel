#include "product.h"
#include <iostream>
#include <string>

using namespace std;

Factory::Factory()
{

}

Factory::~Factory()
{

}

Product* CreateFactory::CreateProduct(string ID)
{
   if (ID == "apple")
	   return new Apple();
   if (ID == "Pair")
	   return new Pair();
   else
	   return NULL;
}

CreateFactory::~CreateFactory()
{

}

CreateFactory::CreateFactory()
{
   cout<<"create factory..."<<endl;
}