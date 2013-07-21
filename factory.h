#ifndef _PRODUCT_H_
#define _PRODUCT_H_
class Product
{
public:
	virtual ~Product() = 0;
protected:
	Product();
private:
};

class Apple : public Product
{
public:
	Apple();
	~Apple();
protected:

private:

};

class Pair : public Product
{
public:
	Pair();
	~Pair();
protected:

private:

};

#endif