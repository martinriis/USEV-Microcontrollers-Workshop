// Libraries required by VL53L1X
// These can be automatically added by going to 
// Sketch -> Include Library -> SparkFun VL53L1X...
#include <ComponentObject.h>
#include <RangeSensor.h>
#include <SparkFun_VL53L1X.h>
#include <vl53l1x_class.h>
#include <vl53l1_error_codes.h>

// This is the Arduino I2C library
#include <Wire.h>

// Tells program what I2C pins we are using
TwoWire Wire1(PA10, PA9);

// This creates an instance of the VL53L1X for us to work with
// For more advanced programmers, this is creating an instance of the VL53L1X class
SFEVL53L1X distanceSensor;

// Variable to store raw distance value
int rawDistance;

float a = 6.862;
float result;

// Setup function runs once at startup or following reset
void setup()
{
	// I2C setup function
	Wire1.begin();
	
	// USB serial transmission setup function
	// Argument is the speed of the transmission in bits per second
	Serial2.begin(115200);
	
}

// Loop functions loops indefinitely
void loop()
{
	// Starts sensor
	distanceSensor.startRanging();

	// Wait for data to be ready
	while(!distanceSensor.checkForDataReady()) {
		Serial2.println("Data unavailable");
		// Wait for 5 ms is data is not ready
		delay(5);
	}

	// Gets a distance measurement from the sensor
	rawDistance = distanceSensor.getDistance();
	// Temporarily stops sensor 
	distanceSensor.stopRanging();

	// Prints distance measurement to serial console
	Serial2.print("Distance = ");
	Serial2.print(rawDistance);
	Serial2.println(" mm");

	float result = float(rawDistance) * a;
}
