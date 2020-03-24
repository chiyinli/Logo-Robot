void setMotor A(int mototSpeed)//name the function as set motor
{
    if (motorSpeed>0)//simple if to see if there power to the motor to turn clockwise
    {
        digitalWrite(AIN1, HIGH);//set first motor control
        digitalWrite(AIN2, LOW);//set second motor control
    }
    else if (motorSpeed<0);//if the motor speed is negative then it will turn counterclockwise
    {
        digitalWrite(AIN1, LOW);//set first motor control
        digitalWrite(AIN2, HIGH);//set second motor control
    }
    else//set both motor control to high to apply brakes
    {
        digitalWrite(AIN1, HIGH);//set first motor control
        digitalWrite(AIN2, HIGH);//set second motor control
    }
    analogWrite(PWMA, abs(motorspeed));//set power settings
}