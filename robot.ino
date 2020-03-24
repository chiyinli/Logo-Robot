const byte AIN1 = 13;//assign variable to pin 13

const byte AIN2 = 12;//aasign variable to pin 12

const byte PWMA = 11;//assign variable to pin 11

void setup()//setup board pin to output ot input
{
    pinMode(AIN1, OUTPUT);//assign pin to output
    pinMode(AIN2, OUTPUT);//assign pin to output
    pinMode(PWMA, OUTPUT);//assign pin to output
}

void loop()//run loop until no more code to run
{
    //set direction to clockwise
    digitalWrite(AIN1, HIGH);//first motor control
    digitalWrite(AIN2, LOW);//second motor control
    analogWrite(PWMA, 50);//analog motor power control to 50
    delay(1000);//delay for one second
}
//set direction to counterclockwise
digtalWrite(AIN1, LOW);//first motor control
digitalWrite(AIN2, HIGH);//second motor control
analogWrite(PWMA, 255);//analog motor power control to 255
delay(1000);//delay for one second
{
//brake
digtalWrite(AIN1, HIGH);//first motor control
digitalWrite(AIN2, HIGH);//second motor control
delay(1000);//delay for one second
}

