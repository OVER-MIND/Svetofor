int L_Red = 10 ;          //это красненький
int L_Yellow = 5 ;        //это желтенький
int L_Green = 1 ;         //это зелененький


void setup()
{
  	pinMode(L_Red, OUTPUT);
 	pinMode(L_Yellow, OUTPUT);
  	pinMode(L_Green, OUTPUT);
}

  void loop ()
{
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
