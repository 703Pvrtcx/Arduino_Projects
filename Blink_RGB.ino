int redPin = 8;
int greenPin = 9;
int bluePin = 10;


long maximum=1000;
long prev =0;
long myTimer;

void setup()
{
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
    
}
void loop()
{

 myTimer=millis();
  if(myTimer-prev>=maximum)
  {
    prev=myTimer;
  
  colorRGB(random(0,255),random(0,255),random(0,255));
  }
}
void colorRGB(int red,int green,int blue)
{   
 analogWrite(redPin,constrain(red,0,255));
 analogWrite(greenPin,constrain(green,0,255));
 analogWrite(bluePin,constrain(blue,0,255)); 
}
