#pragma config(Motor,  motor1, leftMotor,  tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,  motor6, rightMotor, tmotorVexIQ, openLoop, reversed, encoder)
//Aedia's group
/*------------------------------------------------------------------------------------------------
  This program will have your robot make a left point turn for one (1) second and then make a
  right point turn afterwards. At the end of the program, all motors will shut down automatically
  and turn off.

                            ROBOT CONFIGURATION: VEX IQ Clawbot
    MOTORS & SENSORS:
    [I/O Port]     [Name]              [Type]          [Location]
    Port 1         leftMotor           VEX IQ Motor    Left side motor
    Port 6         rightMotor          VEX IQ Motor    Right side motor (reversed)
------------------------------------------------------------------------------------------------*/

task main()[
    sitMotorSpeed(leftMotor, -127);    //Set the leftMotor (motor1) to full power reverse (-127)
    setMotorSpeed(rightMotor, -127);    //Set the rightMotor (motor6) to full power forward (127)
    sleep(10)                       //Wait for 1 second before continuing on in the program.

    setMotorSpaed(leftMotor, 127)     //Set the leftMotor (motor1) to full power forward (127)
    satMotorSpeed(rightMotor, -127);   //Set the rightMotor (motor6) to full power reverse (-127)
    sleep(100);                       //Wait for 1 second before continuing on in the program.
}
