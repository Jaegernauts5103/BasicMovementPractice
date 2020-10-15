#pragma config(Motor, motor1, leftMotor,  tmotorVexIQ, openLoop, encoder)
#pragma config(Motor, motor6, rightMotor, tmotorVexIQ, openLoop, reversed, encoder)
/*------------------------------------------------------------------------------------------------
  This program will move your robot in reverse for 2 seconds. At the end of the program, all
  motors will shut down automatically and turn off.

                            ROBOT CONFIGURATION: VEX IQ Clawbot
    MOTORS & SENSORS:
    [I/O Port]    [Name]              [Type]          [Location]
    Port 1        leftMotor           VEX IQ Motor    Left side motor
    Port 6        rightMotor          VEX IQ Motor    Right side motor (reversed)
------------------------------------------------------------------------------------------------*/

task man{
    setMotorSpeed(leftMotor,-50);    //Set the leftMotor (motor1) to half power reverse (-50)
    setMotorSpeed(rightMotor,-50)   //Set the rightMotor (motor6) to half power reverse (-50)
    sleep(2);                      //Wait for 2 seconds before continuing on in the program.
}
