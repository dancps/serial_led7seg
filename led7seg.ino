/*
Pins of the 7 segment led:
A   - 8
B   - 9
C   - 12
D   - 11
E   - 10
F   - 7
G   - 6
DOT - 13

Scheme:
   |  A  |
   |F| |B|
   |  G  |
   |E| |C|
   |  D  |DOT
   
*/


char choice;
int G = 6, F =7, A = 8, B = 9, E = 10, D = 11, C = 12, DOT = 13, pot;

void setup() {
  pinMode(G,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(DOT,OUTPUT);
  Serial.begin(9600);
  Serial.println("\n+=========================INIT==============================+");
  Serial.println("+===========================================================+");
}

void loop() {
  if (Serial.available() > 0){
    choice = Serial.read();
    Serial.print("+ Serial console: ");
    Serial.println(choice);
    Select(choice);
    delay(300);
  }
}

void Select(char numero){
  switch(numero){
    case('0'):{
      digitalWrite(G,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);

      break;
    }
    case('1'):{
      digitalWrite(G,LOW);
      digitalWrite(F,LOW);
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(D,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);
      
      break;
    }
    case('2'):{
      digitalWrite(G,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(DOT,HIGH);
      
      break;
    }
    case('3'):{
      digitalWrite(G,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);
      
      break;
    }
    case('4'):{
      digitalWrite(G,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(D,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);
      
      break;
    }
    case('5'):{
      digitalWrite(G,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(E,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);
      
      break;
    }
    case('6'):{
      digitalWrite(G,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);
      
      break;
    }
    case('7'):{
      digitalWrite(G,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(D,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);
      
      break;
    }
    case('8'):{
      digitalWrite(G,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);
      
      break;
    }
    case('9'):{
      digitalWrite(G,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(D,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(DOT,HIGH);
      
      break;
    }

    default:
      digitalWrite(G,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(DOT,LOW);
      Serial.println("+(X) Serial console error:\n\tPlease, select a number between 0-9");
      break;
  }
}


