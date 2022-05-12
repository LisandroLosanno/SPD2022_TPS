// C++ code
//

 	unsigned long millis4 = 0;
	unsigned long millis5 = 0;
	unsigned long millis6 = 0;
	unsigned long millis7 = 0;
	unsigned long millis8 = 0;
	unsigned long millis9 = 0;
	unsigned long millis10 = 0;
	unsigned long millis11 = 0;
	unsigned long millis12 = 0;
	unsigned long millis13 = 0;
void setup()
{
  pinMode (2,INPUT);
  pinMode (3,INPUT);

  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);
  pinMode (11,OUTPUT);
  pinMode (12,OUTPUT);
  pinMode (13,OUTPUT);

  Serial.begin(9600);
}

int estadoLed4 = LOW;
int estadoLed5 = LOW;
int estadoLed6 = LOW;
int estadoLed7 = LOW;
int estadoLed8 = LOW;
int estadoLed9 = LOW;
int estadoLed10 = LOW;
int estadoLed11 = LOW;
int estadoLed12 = LOW;
int estadoLed13 = LOW;


void loop()
{
    unsigned long millisAhora = millis();

 	 if(millisAhora - millis4 >= 1000)
	  {
  	   estadoLed4 = !estadoLed4;
  	   millis4 = millisAhora;
 	   digitalWrite(4, estadoLed4);

  	  }

	  if(millisAhora - millis5 >= 2000)
	  {
	    estadoLed5 = !estadoLed5;
	    millis5 = millisAhora;
	    digitalWrite(5, estadoLed5);

	  }

	  if(millisAhora - millis6 >= 4000)
	  {
	   estadoLed6 = !estadoLed6;
 	   millis6 = millisAhora;
 	   digitalWrite(6, estadoLed6);

	  }

	  if(millisAhora - millis7 >= 8000)
	  {
  	   estadoLed7 = !estadoLed7;
 	   millis7 = millisAhora;
 	   digitalWrite(7, estadoLed7);

	  }

	  if(millisAhora - millis8 >= 16000)
	  {
 	   estadoLed8 = !estadoLed8;
 	   millis8 = millisAhora;
 	   digitalWrite(8, estadoLed8);

	  }

 	 if(millisAhora - millis9 >= 32000)
	  {
	    estadoLed9 = !estadoLed9;
	    millis9 = millisAhora;
 	    digitalWrite(9, estadoLed9);

	  }

 	 if(millisAhora - millis10 >= 64000)
 	 {
 	   estadoLed10 = !estadoLed10;
 	   millis10 = millisAhora;
  	   digitalWrite(10, estadoLed10);

	  }

 	 if(millisAhora - millis11 >= 128000)
     {
 	   estadoLed11 = !estadoLed11;
 	   millis11 = millisAhora;
 	   digitalWrite(11, estadoLed11);

	  }

 	 if(millisAhora - millis12 >= 2560000)
 	 {
      estadoLed12 = !estadoLed12;
      millis12 = millisAhora;
      digitalWrite(12, estadoLed12);

	  }

	  if(millisAhora - millis13>= 5120000)
	  {
 	   estadoLed13 = !estadoLed13;
 	   millis13 = millisAhora;
	   digitalWrite(13, estadoLed13);

	  }
     delay (20);
  }






