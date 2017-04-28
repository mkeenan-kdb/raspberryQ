#include <stdio.h>    // Used for printf() statements
#include <wiringPi.h> // Include WiringPi library!
#include "k.h"        //kdb+

K init(K x){
 wiringPiSetupGpio();
 return (K)0;
}

K setpwm(K x, K y, K z){
 int pin = x->i;
 int initval = y->i;
 int range = z->i;
 return ki(softPwmCreate(pin, initval, range));
}

K pwmwrite(K x, K y){
 int pin = x->i;
 int val = y->i;
 softPwmWrite(pin, val);
 return (K)0;
}

K wait(K x){
 int d = x->i;
 delayMicroseconds(d);
 return (K)0;
}

K mode(K x, K y){
 int pin = x->i;
 switch(y->i){
  case 0:
   pinMode(pin, OUTPUT);
   break;
  case 1:
   pinMode(pin, INPUT);
   break;
  default:
   return krr("Not a valid param");
 }
 return (K)0;
}

K write(K x, K y){
 int out = y->i;
 digitalWrite(x->i, out);
 return (K)0;
}

K read(K x){
 int val = digitalRead(x->i);
 return ki(val);
}
