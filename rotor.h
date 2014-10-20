#ifndef	ROTOR_H
#define ROTOR_H
#include "Operator.h"

class Rotor: public Operator{
private: 
	int rotations;
	Operator* previous;
	Operator* next;

public: 
	Rotor();
	Rotor(char* configuration);
	Rotor(char* configuration, Operator* prev, Operator* nxt);
	void configure(char* fileDir);
	void rotate();
	void setPrev(Operator* prev);
	void setNext(Operator* nxt);
	int outputForward(int input);
	int outputBack(int input);
	bool shouldRotate();
};
#endif