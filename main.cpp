#include <iostream>
#include <fstream>
#include <string>
#include "voxel.h"
#include "sculptor.h"

using namespace std;

int main(void){
	 // 
	Sculptor caveiraOP(60,60,60);
	
	caveiraOP.setColor(1,1,1,1);
    caveiraOP.putEllipsoid(29,25,30,6,10,6);
    
    caveiraOP.setColor(1,1,1,1);
    caveiraOP.putSphere(29,30,30,10); 
    
    caveiraOP.setColor(1,0.8,0,1);
    caveiraOP.putSphere(29,34,30,8); 
  
 	caveiraOP.putEllipsoid(29,35,30,20,1,20);
 	caveiraOP.setColor(1,0,0,1);
    caveiraOP.putEllipsoid(29,36,30,10,1,10);
	caveiraOP.putEllipsoid(29,37,30,10,1,8);
	
	//olho esquerdo:
	caveiraOP.setColor(0,0,0,1);
	caveiraOP.cutBox(23,27,28,33,37,40);
	caveiraOP.putBox(23,27,28,33,37,40);
	caveiraOP.cutVoxel(27,30,39);
	caveiraOP.putVoxel(27,30,39);
	caveiraOP.cutVoxel(27,29,39);
	caveiraOP.putVoxel(27,29,39);
	caveiraOP.cutVoxel(27,31,39);
	caveiraOP.putVoxel(27,31,39);
	caveiraOP.putVoxel(22,29,39);
	caveiraOP.putVoxel(22,30,39);
	caveiraOP.putVoxel(22,31,39);
	caveiraOP.putVoxel(25,27,39);
	caveiraOP.putVoxel(25,33,39);
	caveiraOP.putVoxel(24,27,39);
	caveiraOP.putVoxel(24,33,39);
	
	//olho direito:
	caveiraOP.setColor(0,0,0,1);
	caveiraOP.cutBox(32,36,28,33,37,40);
	caveiraOP.putBox(32,36,28,33,37,40);
	caveiraOP.cutVoxel(36,30,39);
	caveiraOP.putVoxel(36,30,39);
	caveiraOP.cutVoxel(36,29,39);
	caveiraOP.putVoxel(36,29,39);
	caveiraOP.cutVoxel(36,31,39);
	caveiraOP.putVoxel(36,31,39);
	caveiraOP.putVoxel(31,29,39);
	caveiraOP.putVoxel(31,30,39);
	caveiraOP.putVoxel(31,31,39);
	caveiraOP.putVoxel(34,27,39);
	caveiraOP.putVoxel(34,33,39);
	caveiraOP.putVoxel(33,27,39);
	caveiraOP.putVoxel(33,33,39);
	
	//nariz:
	caveiraOP.cutVoxel(28,26,39);
	caveiraOP.cutVoxel(29,26,39);
	caveiraOP.cutVoxel(30,26,39);
	caveiraOP.putVoxel(28,26,39);
	caveiraOP.putVoxel(29,26,39);
	caveiraOP.putVoxel(30,26,39);
	caveiraOP.putVoxel(28,25,39);
	caveiraOP.putVoxel(29,25,39);
	caveiraOP.putVoxel(30,25,39);
	caveiraOP.putVoxel(27,25,39);
	caveiraOP.putVoxel(31,25,39);
	caveiraOP.putVoxel(28,24,39);
	caveiraOP.putVoxel(29,24,39);
	caveiraOP.putVoxel(30,24,39);
	
    caveiraOP.writeOFF((char*)"caveiraOnePiece.off");

}