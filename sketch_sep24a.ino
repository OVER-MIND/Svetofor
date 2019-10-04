boolean butt_flag = 0;
boolean butt ;
#define knopka  13;          //это кнопочка
#define L_Red 10 ;          //это красненький
#define L_Yellow 5 ;        //это желтенький
#define L_Green 3 ;         //это зелененький

void setup() {
      pinMode(L_Red, OUTPUT);
      pinMode(L_Yellow, OUTPUT);
      pinMode(L_Green, OUTPUT);
      pinMode(knopka, INPUT);

}

void loop() {
  butt = digitalRead(knopka);
    
    if (butt == 1 && butt_flag == 0)
    { butt_flag = 1;
     
          digitalWrite (L_Yellow, HIGH);
          delay (1000);
          digitalWrite (L_Yellow, LOW);
          delay (1000);

            digitalWrite (L_Red, HIGH);
            delay (1000);
            digitalWrite (L_Red, LOW);
            delay (1000);

    }
    if (butt == 0 && butt_flag == 1 )
     butt_flag = 0; 

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
 
