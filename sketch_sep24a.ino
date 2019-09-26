int knopka = 12;          //это кнопочка
int L_Red = 10 ;          //это красненький
int L_Yellow = 5 ;        //это желтенький
int L_Green = 3 ;         //это зелененький

void setup() {
      Serial.begin (9600);
      pinMode(L_Red, OUTPUT);
      pinMode(L_Yellow, OUTPUT);
      pinMode(L_Green, OUTPUT);
      pinMode(knopka, INPUT);

}

void loop() {

  if (digitalRead(knopka) == HIGH) {

        digitalWrite (L_Yellow, HIGH);
        delay (1000);
        digitalWrite (L_Yellow, LOW);
        delay (1000);
        
          digitalWrite (L_Red, HIGH);
          delay (1000);
          digitalWrite (L_Red, LOW);
          delay (1000);

  }

  else {

        digitalWrite (L_Red, HIGH);
        delay (1000);
        digitalWrite (L_Red, LOW);
        delay (1000);

          digitalWrite (L_Yellow, HIGH);
          delay (1000);
          digitalWrite (L_Yellow, LOW);
          delay (1000);

            digitalWrite (L_Green, HIGH);
            delay (1000);
            digitalWrite (L_Green, LOW);
            delay (1000);

              digitalWrite (L_Yellow, HIGH);
              delay (1000);
              digitalWrite (L_Yellow, LOW);
              delay (1000);

  }

}
