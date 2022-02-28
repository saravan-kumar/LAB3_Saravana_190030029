#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

#pragma once

class point
{
private:
	float xc, yc, zc;
	string hexColor[10];

public:

	point();
	point(float x, float y, float z);
    void printPtColor();
	float getxc();
	void setxc(float val);
	float getyc();
	void setyc(float val);
	float getzc();
	void setzc(float val);
	~point();
};

class vector
{
private:
	float vx, vy, vz, mag;

public:
	vector();
	vector(float xx, float yy, float zz);
	float getMag();
	float getvx();
	float getvy();
	float getvz();
	void addVec(vector secondVector);
	~vector();
};


point cogOFpoints(point parray[], int n);