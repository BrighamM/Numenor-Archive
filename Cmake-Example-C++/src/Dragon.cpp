#include <Dragon.h>

Dragon::Dragon(int nheads)
{

	this->heads = nheads;
	this->sex = "male";
	
}

std::string Dragon:: dStats()
{ 
	
	return "dragonstats!";
}

