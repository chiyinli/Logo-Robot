//www.youtube.com/Electronics is Fun//

#include<SoftwareSerial.h>

#define TxD 10

#define RxD 9

int a=2;//assign variable a to pin 2
int b=3;//assign variable b to pin 3
int h=4;//assign variable h to pin 4
int d=5;//assign variable d to pin 5
int e=6;//assign variable e to pin 6
int f=7;//assign variable f to pin 7
int g=8;//assign variable g to pin 7

SoftwareSerial bluetoothSerial(TxD, RxD);//setup bluetooth

char c;//assign c variable to char command

void setup(){//setup function for pins 
    bluetoothSerial.begin(9600);//setup bluetooth
    Serial.begin(9600);//setup bluetooth
    pinMode(a, OUTPUT);//setting pinmode to output
    pinMode(b, OUTPUT);//setting pinmode to output
    pinMode(b, OUTPUT);//setting pinmode to output
    pinMode(h, OUTPUT);//setting pinmode to output
    pinMode(d, OUTPUT);//setting pinmode to output
    pinMode(e, OUTPUT);//setting pinmode to output
    pinMode(f, OUTPUT);//setting pinmode to output
    pinMode(g, OUTPUT);//setting pinmode to output
}
void loop() {//loop through numbers
  if(bluetoothSerial.available()){
    c = bluetoothSerial.read();
    Serial.println(c);
    if(c=='0'){
 digitalWrite(a,1);//display 0
 digitalWrite(b,1);//display 0
 digitalWrite(h,1);//display 0
 digitalWrite(d,1);//display 0
 digitalWrite(e,1);//display 0
 digitalWrite(f,1);//display 0
 digitalWrite(g,0);;//display 0          
    }
     if(c=='1'){
      digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(h,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);;          
    }
    if(c=='2'){
       digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(h,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);;
    }
     if(c=='3'){
      digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(h,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,1);
    }
    if(c=='4'){
       digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(h,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
    }
    if(c=='5'){
       digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(h,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
    }
    if(c=='6'){
       digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(h,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
    }
    if(c=='7'){
      digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(h,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
    }
    if(c=='8'){
      digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(h,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
    }
    if(c=='9'){
      digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(h,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
    }
  }
}