#include <AFMotor.h>
#include <Servo.h>              
Servo name_servo;               

int servo_position = 0 ;

void setup() {
  
  // Define the servo signal pins
name_servo.attach (10);         


}

void loop() {
 for (servo_position = 0; servo_position <=90; servo_position +=1){

    name_servo.write(servo_position);
   // delay(10);
  }

  for (servo_position=90; servo_position >= 0; servo_position -=1){

    name_servo.write(servo_position);
    //delay(10);
  }
}











///%%%%%%%%%%%%%%%%%% pompa
/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-controls-pump
 

// constants won't change
 int RELAY_PIN = A5;  // the Arduino pin, which connects to the IN pin of relay

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin A5 as an output.
  pinMode(A5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(A5, HIGH); // turn on pump 5 seconds
  delay(1000);
  digitalWrite(A5, LOW);  // turn off pump 5 seconds
  delay(5000);
}

*/












///%%%%%%%%%%%%%%%%%%% move

/*
//Librairies
#include <AFMotor.h>
//Constants
const int motorspeed=200;
//Parameters
AF_DCMotor motorG(1);
AF_DCMotor motor(4);

void setup() {
  // Code d'initialisation :s'exécute une seule fois
  
  

  motorG.setSpeed(motorspeed);
  motor.setSpeed(motorspeed);
  


}

void loop() {
 

  motorG.run(FORWARD);
  delay(500);

  motor.run(FORWARD);
  delay(500);
  
}

*/
