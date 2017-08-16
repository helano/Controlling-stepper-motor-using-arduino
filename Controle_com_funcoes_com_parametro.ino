
int pinTensaoX = A0;
int pinSentidoX = A1;

int pinTensaoY = A2;
int pinSentidoY = A3;

int pinTensaoZ = A4;
int pinSentidoZ = A5;

int X_IN1 = 2;
int X_IN2 = 3;
int X_IN3 = 4;
int X_IN4  = 5;

int Y_IN1 = 8;
int Y_IN2 = 9;
int Y_IN3 = 10;
int Y_IN4 = 11;

int tempo_Atraso = 50;


void setup() {
  pinMode(X_IN1,OUTPUT);
  pinMode(X_IN2, OUTPUT);
  pinMode(X_IN3, OUTPUT);
  pinMode(X_IN4, OUTPUT);
  
  
  pinMode(Y_IN1,OUTPUT);
  pinMode(Y_IN2, OUTPUT);
  pinMode(Y_IN3, OUTPUT);
  pinMode(Y_IN4, OUTPUT);


  pinMode(pinTensaoX,INPUT);
  pinMode(pinTensaoY,INPUT);
  pinMode(pinTensaoZ,INPUT);

  pinMode(pinSentidoX,INPUT);
  pinMode(pinSentidoY,INPUT);
  pinMode(pinSentidoZ,INPUT);

  Serial.begin(9600);
  
}

float valorX;
float valorY;
float valorZ;


float valorSentidoX;
float valorSentidoY;
float valorSentidoZ;

void loop() {

  
valorX = analogRead(pinTensaoX);
valorY = analogRead(pinTensaoY);
//valorZ = analogRead(pinTensaoZ);

valorSentidoX = digitalRead(pinSentidoX);
valorSentidoY = digitalRead(pinSentidoY);
valorSentidoZ = digitalRead(pinSentidoZ);

if(valorX > 1)
  {
    if(valorSentidoX == LOW)
    {
      girar_horario(X_IN1, X_IN2, X_IN3, X_IN4);
    }
    else
    if(valorSentidoX == HIGH)
    {
     
       girar_anti_horario(X_IN1, X_IN2, X_IN3, X_IN4);
      
    }
   

  }
  if(valorY > 1)
  {
      if(valorSentidoY == LOW)
    {
      girar_horario(Y_IN1, Y_IN2, Y_IN3, Y_IN4);
    }
    else
    if(valorSentidoY ==HIGH )
    {
      
      girar_anti_horario(Y_IN1, Y_IN2, Y_IN3, Y_IN4);
      
    }
  }

}




void girar_horario( int IN1, int IN2, int IN3, int IN4)
{
  // Passo 1
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);  

  // Passo 2
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);

  // Passo 3
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);

  // Passo 4
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);

  // Passo 5
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);  

  // Passo 6
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 1);
  delay(tempo_Atraso);

  // Passo 7
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 1);
  delay(tempo_Atraso);

  // Passo 8
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 1);
  delay(tempo_Atraso);
}



void girar_anti_horario(int IN1, int IN2, int IN3, int IN4)
{
  // Passo 1
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);  

  // Passo 2
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 1);
  delay(tempo_Atraso);

  // Passo 3
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 1);
  delay(tempo_Atraso);

  // Passo 4
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 1);
  delay(tempo_Atraso);

  // Passo 5
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);  

  // Passo 6
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 1);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);

  // Passo 7
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);

  // Passo 8
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  delay(tempo_Atraso);
}




