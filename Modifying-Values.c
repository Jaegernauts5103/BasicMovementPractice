#pragma config(Motor, motor1, leftMotor,  tmotorVexIQ, openLoop, encoder)
#pragma config(Motor, motor6, rightMotor, tmotorVexIQ, openLoop, reversed, encoder)
// For Ben's group
/*------------------------------------------------------------------------------------------------
  This program will move your robot make a series of moves for different lengths of time.
  At the end of the program, all motors will shut down automatically and turn off.

                            ROBOT CONFIGURATION: VEX IQ Clawbot
    MOTORS & SENSORS:
    [I/O Port]    [Name]              [Type]            [Description]
    Port 1        leftMotor           VEX IQ Motor      Left side motor
    Port 6        rightMotor          VEX IQ Motor      Right side motor (reversed)
------------------------------------------------------------------------------------------------*/

task main(){
    // Move forward at half power for 1.5 seconds
    setMotorSpeed(leftMotor, 50);   //Set the leftMotor (motor1) to half power forward (50)
    setMotorSpeed(rightMotor, 50);  //Set the rightMotor (motor6) to half power forward (50)
    sleep(1500);                    //Wait for 1.5 seconds before continuing on in the program.
    // Stop for 1 second
    setMotorSpeed(leftMotor, 0);    //Set the leftMotor (motor1) to Off
    setMotorSpeed(rightMotor, 0);   //Set the rightMotor (motor6) to Off
    sleep(1000);                    //Wait for 1 second before continuing on in the program.
    // Move reverse at half power for 1.5 seconds
    setMotorSpeed(leftMotor, -50);  //Set the leftMotor (motor1) to half power reverse (-50)
    setMotorSpeed(rightMotor, -50); //Set the rightMotor (motor6) to half power reverse (-50)
    sleep(1500);                    //Wait for 1.5 seconds before continuing on in the program.
    // Turn right at full power for 0.75 seconds
    setMotorSpeed(leftMotor, 127);  //Set the leftMotor (motor1) to full power forward (127)
    setMotorSpeed(rightMotor, -127);//Set the rightMotor (motor6) to full power reverse (-127)
    sleep(750);                     //Wait for .75 second before continuing on in the program.
}
