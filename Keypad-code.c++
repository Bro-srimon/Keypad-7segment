#include <Keypad.h>


const byte cols=4;
const byte rows=4;

char keys[rows][cols]={ 
                        {'1','2','3','A'},
                        {'4','5','6','B'},
                        {'7','8','9','4'},
                        {'*','0','#','D'},
                      };
byte colspins[cols]={9,8,7,6};
byte rowspins[rows]={13,12,11,10};


Keypad kpd=Keypad(makeKeymap(keys),rowspins,colspins,rows,cols);
  
  
int A=A2;
int B=A3;
int C=3;
int D=4;
int E=5;
int F=A1;
int G=A0;
int DP=2;

void one()
{
  //active low pins
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(DP,HIGH);
  return;
}
void two()
{
  //active low pins
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
  return;
}
void three()
{
  //active low pins
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
  return;
}
void four()
{
  //active low pins
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
  return;
}
void five()
{
  //active low pins
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
  return;
}
void six()
{
  //active low pins
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
  return;
}
void seven()
{
  //active low pins
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(DP,HIGH);
  return;
}
void eight()
{
  //active low pins
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DP,LOW);
  return;
}
void nine()
{
  //active low pins
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
  return;
}
void zero()
{
  //active low pins
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(DP,HIGH);
  return;
}
void setup()
{
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
}

void loop()
{

 char key='\0';
  label: key=kpd.getKey();
  Serial.println(key);

 if(key=='1') 
 {  
  one();
  goto label;
 }
 else if(key=='2')
 {
  two();
  goto label;
 }
   if(key=='3') 
 {  
  three();
  goto label;
 }
 else if(key=='4')
 {
  four();
  goto label;
 }
  else if(key=='5')
 {
  five();
  goto label;
 }
   if(key=='6') 
 {  
  six();
  goto label;
 }
 else if(key=='7')
 {
  seven();
  goto label;
 }
  else if(key=='8')
 {
  eight();
  goto label;
 }
   else if(key=='9')
 {
  nine();
  goto label;
 }
   else if(key=='0')
 {
  zero();
  goto label;
 }
  else
  {
    Serial.println(" ");
  }
}