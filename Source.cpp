#include <iostream>
#include <math.h>
#include <vector>
#include "Source.h"
constexpr auto PI = 3.14159265359;
int main()
{

	int shape_ID;
	std::cout << "please select the shape you want to calculate the area(Meters) of\
		\n1_square \n2_rectangle \n3_parallelogram \n4_trapezoid \n5_triangle	\
		\n6_ellipse\\oval \n7_circle \n8_Rhombus \n9_kite \n10_sector \n11_circular ring \n12_Segment of circle	\
		\n13_regular polygons \n14_Any(coordinates)\n" ;		//add new shapes in this string
									
	std::cin >> shape_ID;
	switch (shape_ID)
	{
	case 1:					//square
		std::cout << "\nSquare selected.\nPlease input the length/width(Meters)\n";
		double sqrL;
		std::cin >> sqrL;
		sqrL = sqrL * sqrL;
		std::cout << "The area is " << sqrL << " Square Meters.\n";
		break;
	
	case 2:				//rectangle
		double recL, recW, recA;
		std::cout << "\nRectangle selected.\nPlease input the length(Meters)\nthen the width(Meters)\n";
		std::cin >> recL >> recW;
		recA = recL * recW;
		std::cout << "The area is " << recA << " Square Meters.\n";
		break;
	
	case 3:				//Parallelogram
		double parB, parH, parA;
		std::cout << "\nParallelogram selected.\nPlease input the Base(Meters)\nthen the height(Meters)\n";
		std::cin >> parB >> parH;
		parA = parB * parH;
		std::cout << "The area is " << parA << " Square Meters.\n";
		break;
	
	case 4:				//Trapezoid
		double traB1, traB2, traH, traA;
		std::cout << "\nTrapezoid selected.\nPlease input the first Base(Meters)\nthen the second Base(Meters)\nthen the height(Meters)\n";
		std::cin >> traB1 >> traB2 >> traH;
		traA = (traB1 + traB2) / 2 * traH;
		std::cout << "The area is " << traA << " Square Meters.\n";
		break;
	
	case 5:			//triangle
		int tri_ID;
		double triA;
		std::cout << "\nTriangle selected.\n";
		std::cout << "Please select what info you have: \n1_Side, Angle and Side\n2_3 Sides\n3_Base and Height\n";
		std::cin >> tri_ID;
		switch (tri_ID)
		{
		case 1:							
			double triSA, triSB, triAN;
			std::cout << "\nSide, Angle and Side.\nPlease input the first side(Meters)\nthen the second side(Meters) \
							\nthen the angle between the sides(degrees, no degree sign)\n";
			std::cin >> triSA >> triSB >> triAN;
			triA = (triSA * triSB * sin(triAN * PI / 180)) / 2;
			std::cout << "The area is " << triA << " Square Meters.\n";
			break;
		case 2:
			double triS1, triS2, triS3, triS, triSS;
			std::cout << "\n3 Sides selected.\nPlease input the first side(Meters)\nthen the second side(Meters)\nthen the third side(Meters)\n";
			std::cin >> triS1 >> triS2 >> triS3;
			triS = (triS1 + triS2 + triS3) / 2;
			triSS = triS * (triS - triS1) * (triS - triS2) * (triS - triS3);
			triA = sqrt(triSS);
			std::cout << "The area is " << triA << " Square Meters.\n";
			break;
		case 3:
			double triB, triH;
			std::cout << "\nBase and Height selected.\nPlease input the Base(Meters)\nthen the height(Meters)\n";
			std::cin >> triB >> triH;
			triA = (triH * triB) / 2;
			std::cout << "The area is " << triA << " Square Meters.\n";
			break;
		}
	
		break;
	
	case 6:						//Ellipse\Oval
		double ovalLR, ovalSR, ovalA;
		std::cout << "\nEllipse\\Oval selected.\nPlease input the major radius\\semimajor axis(Meters)\nthen the minor radius\\semiminor axis(Meters)\n";
		std::cin >> ovalLR >> ovalSR;
		ovalA = ovalLR * ovalSR * PI;
		std::cout << "The area is " << ovalA << " Square Meters.\n";
		break;
	
	case 7:						//Circle
		double cirR, cirA;
		std::cout << "\nCircle selected.\nPlease input the radius\n";
		std::cin >> cirR;
		cirA = cirR * cirR * PI;
		std::cout << "The area is " << cirA << " Square Meters.\n";
		break;
	
	case 8:						//Rhombus
		double rhoD1, rhoD2, rhoA;
		std::cout << "\nRhombus selected.\nPlease input the first diagnal(Meters)\nthen the second diagonal(Meters)\n";
		std::cin >> rhoD1 >> rhoD2;
		rhoA = (rhoD1 * rhoD2) / 2;
		std::cout << "The area is " << rhoA << " Square Meters.\n";
		break;
	
	case 9:						//kite, should have paired it with rhombus...maybe?
		double kiteD1, kiteD2, kiteA;
		std::cout << "\nKite selected.\nPlease input the height(Meters)\nthen the length(Meters)\n";
		std::cin >> kiteD1 >> kiteD2;
		kiteA = (kiteD1 * kiteD2) / 2;
		std::cout << "The area is " << kiteA << " Square Meters.\n";
		break;
	
	case 10:						//Sector
		double secR, secAN, secA;
		std::cout << "\nSector selected.\nPlease input the radius(Meters)\nthen the angle(degrees, no degree sign)\n";
		std::cin >> secR >> secAN;
		secA = ((secAN * PI) / 360) * secR * secR;
		std::cout << "The area is " << secA << " Square Meters.\n";
		break;
	
	case 11:						//Circular Ring
		double ringIR, ringOR, ringA;
		std::cout << "\nCircular Ring selected.\nPlease input the inner radius(Meters)\nthen the outer radius(Meters)\n";
		std::cin >> ringIR >> ringOR;
		ringA = PI * (ringOR + ringIR) * (ringOR - ringIR);
		std::cout << "The area is " << ringA << " Square Meters.\n";
		break;

	case 12:						//Segment of circle
		double segR, segAN, segA;
		std::cout << "\nSegment of circle selected.\nPlease input the radius(Meters)\nthen the angle(degrees, no degree sign)\n";
		std::cin >> segR >> segAN;
		segA = ((segAN * PI) / 360 - sin(segAN * PI / 180) / 2) * segR * segR;
		std::cout << "The area is " << segA << " Square Meters.\n";
		break;

	case 13:						// regular polygons              todo - fix in acurate result
		double regS, regAL, regA;
		std::cout << "\nRegular polygon selected.\nPlease input the number of sides\nthen the length of the apothem(Meters)\n";
		std::cin >> regS >> regAL;
		regA = regAL * regAL * regS * tan ((180 / regS) * PI / 180);
		std::cout << "The area is " << regA << " Square Meters.\n";
		break;

	case 14:				//polygons with coordinates
		int i = 0;
		int j = 1;
		int k;
		std::vector<double> coX(99);
		std::vector<double> coY(99);
		double coA = 0;
		std::cout << "\nPolygons with coordinates selected.\nPlease input the vertexes clockwise\nPlease input the number of sides\\vertexes\n";
		for (std::cin >> i; i > 0; i--)				//character input as counter initalization (lets goooooo)
		{
			if (j == 1) 
			{
				k = i + 1; ;		// to do it the first time only, i is decreased by 1
			}
			std::cout << "Please input the X coordinate for vertex number " << j << "\n";
			std::cin >> coX[i];
			std::cout << "Please input the Y coordinate for vertex number " << j << "\n";
			std::cin >> coY[i];
			j++;
			coA += (coX[k] * coY[i]) - (coY[k] * coX[i]);		//todo
		}
		j--;
		coA -= (coX[0] * coY[1]) - (coY[0] * coX[1]);   //undo first loop
		coA += (coX[1] * coY[j]) - (coY[1] * coX[j]);	//do first loop right
		std::cout << "The area is " << abs(coA / 2) << " Square Meters.\n";
		break;

	}
}