#include <iostream>
#include <fstream>
#include <string>
#include "voxel.h"
#include "sculptor.h"

using namespace std;

int main(void){
	 // 
	Sculptor caveiraOP(60,60,60);
	
	caveiraOP.setColor(0,0,0,1);
    caveiraOP.putEllipsoid(29,25,30,6,10,6);
    
    caveiraOP.setColor(1,1,1,1);
    caveiraOP.putSphere(29,30,30,10); 
    
    caveiraOP.setColor(1,0.8,0,1);
    caveiraOP.putSphere(29,34,30,8); 
  
 	caveiraOP.putEllipsoid(29,35,30,20,1,20);
 	caveiraOP.setColor(1,0,0,1);
    caveiraOP.putEllipsoid(29,36,30,10,1,10);
	caveiraOP.putEllipsoid(29,37,30,10,1,8);
	
    caveiraOP.writeOFF((char*)"caveiraOnePiece.off");

}