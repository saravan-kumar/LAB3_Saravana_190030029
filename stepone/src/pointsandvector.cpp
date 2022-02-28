#include "../inc/pointsandvector.h"



point::point()
{
	xc = 0; yc = 0; zc = 0; //hexColor = "";
}

point::point(float x, float y, float z)
{
	xc = x; yc = y; zc = z;
}

void point::printPtColor()
{
	cout << "Color in Hex : " << hexColor << endl;

}

float point::getxc()
{
	return xc;
}
void point::setxc(float val)
{
	xc = val;
}

float point::getyc()
{
	return yc;
}
void point::setyc(float val)
{
	yc = val;
}
float point::getzc()
{
	return zc;
}
void point::setzc(float val)
{
	zc = val;
}
point::~point()
{

}

vector::vector()
{
	vx = 0; vy = 0; vz = 0; mag = 0;
}
vector::vector(float xx, float yy, float zz)
{
	vx = xx; vy = yy; vz = zz; mag = sqrt(pow(xx, 2) + pow(yy, 2) + pow(zz, 2));
}
float vector::getMag()
{
	return mag;
}
float vector::getvx()
{
	return vx;
}
float vector::getvy()
{
	return vy;
}
float vector::getvz()
{
	return vz;
}
void vector::addVec(vector secondVector)
{
	vx += secondVector.getvx();
	vy += secondVector.getvy();
	vz += secondVector.getvz();
	mag = sqrt(pow(vx, 2) + pow(vy, 2) + pow(vz, 2));
	cout << "Added vector : vx = " << vx << " vy = " << vy << " vz = " << vz << endl;
	cout << "Magnitude of added vector = " << mag<<endl;

}

vector::~vector()
{
	
}

point cogOFpoints(point parray[], int n)
{
	point cogPOINT; float cogsumx = 0; float cogsumy = 0; float cogsumz = 0;
	for (int i = 0; i < n; i++)
	{
		cogsumx += parray[i].getxc();
		cogsumy += parray[i].getyc();
		cogsumz += parray[i].getzc();
	}
	cogPOINT.setxc(cogsumx / n);
	cogPOINT.setyc(cogsumy / n);
	cogPOINT.setzc(cogsumz / n);
	return cogPOINT;
}

