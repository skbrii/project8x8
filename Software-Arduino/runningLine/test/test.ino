#include <SPI.h>
#include <runningLine.h>


void setup(){
	SPI.begin();
	pinMode(SS_PIN,OUTPUT);
}

void loop(){
	setString("Hello world");
	delay(100);
	unsigned int shiftCount = 0;
	printString();
	++shiftCount;
	if (shiftCount == 50) {
		shiftString(1);
		shiftCount = 0;
	}    
}	



