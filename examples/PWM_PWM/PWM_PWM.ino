/*******************************************************************************
 * THIS SOFTWARE IS PROVIDED IN AN "AS IS" CONDITION. NO WARRANTY AND SUPPORT
 * IS APPLICABLE TO THIS SOFTWARE IN ANY FORM. CYTRON TECHNOLOGIES SHALL NOT,
 * IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR CONSEQUENTIAL
 * DAMAGES, FOR ANY REASON WHATSOEVER.
 ********************************************************************************
 * DESCRIPTION:
 *
 * This example shows how to drive a motor using the 2 PWM pins.
 * This example only shows how to drive a single motor for simplicity.
 * For dual channel motor driver, both channel work the same way.
 * 
 * 
 * CONNECTIONS:
 * 
 * Arduino D3  - Motor Driver PWM Input 1
 * Arduino D4  - Motor Driver PWM Input 2
 * Arduino GND - Motor Driver GND
 *
 *
 * AUTHOR   : Kong Wai Weng
 * COMPANY  : Cytron Technologies Sdn Bhd
 * WEBSITE  : www.cytron.io
 * EMAIL    : support@cytron.io
 *
 *******************************************************************************/

 #include "CytronMotorDriver.h"


// Configure the motor driver.
CytronMD motor(PWM_PWM, 3, 4);  // PWM 1 = Pin 3, PWM 2 = Pin 4.


// The setup routine runs once when you press reset.
void setup() {
  
}


// The loop routine runs over and over again forever.
void loop() {
  motor.setSpeed(128);  // Run forward at 50% speed.
  delay(1000);
  
  motor.setSpeed(255);  // Run forward at full speed.
  delay(1000);

  motor.setSpeed(0);    // Stop.
  delay(1000);

  motor.setSpeed(-128);  // Run backward at 50% speed.
  delay(1000);
  
  motor.setSpeed(-255);  // Run backward at full speed.
  delay(1000);

  motor.setSpeed(0);    // Stop.
  delay(1000);
}
