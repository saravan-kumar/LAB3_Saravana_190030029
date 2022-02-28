#include "../inc/pointsandvector.h"

int main()
{
	float tempx, tempy, tempz;
	cout << "Enter First vector components x, y, z respectively " << endl;
	cin >> tempx >> tempy >> tempz;
	vector A(tempx,tempy,tempz); 
	cout << "Enter Second vector components x, y, z respectively " << endl;
	cin >> tempx >> tempy >> tempz;
	vector B(tempx,tempy,tempz);
	A.addVec(B);
	
	
	cout << "Enter number of points" << endl;
	int length{};
	cin >> length;

	point* pointarray{ new point[length] {} };
	
	
	cout << "Enter the x,y,z position of point one by one" << endl;
	for (int j = 0; j < length; j++)
	{
		float tempx, tempy, tempz;
		cin >> tempx >> tempy >> tempz;
		pointarray[j].setxc(tempx);
		pointarray[j].setyc(tempy);
		pointarray[j].setzc(tempz);

	}
	
	
	point cog;cog = cogOFpoints(pointarray, length);
	cout << "cog of points : " << cog.getxc() << " " << cog.getyc() << " " << cog.getzc() << endl;

	delete[] pointarray;
}