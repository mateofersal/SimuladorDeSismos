//Librerias
#include <Adafruit_GFX.h>  
#include <Adafruit_SSD1306.h> 
#define ANCHO 128 
#define ALTO 64    
#define OLED_RESET 4  
Adafruit_SSD1306 oled(ANCHO, ALTO, &Wire, OLED_RESET); 

//Puertos utulizados 
int LedRojo_pin
int LedAmarillo_pin
int LedVerde_pin
int Buzzer_pin 

//Variables para el desarrollo del programa
int estadoDeSistema = 0



// hola ricardo ya puedo editarlo
//Sistema bluetooth




//Teclado
#include <Keypad.h> 
const byte FILAS=4;
const byte COLUMNAS=4;
char keys[FILAS][COLUMNAS]= { 
  {'1','2','3','A'},
  {'4','5','6','B'}, 
  {'7','8','9','C'}, 
  {'*','0','#','D'} 
};
byte pinesFilas[FILAS]= {13,12,11,10};
byte pinesColumnas[COLUMNAS]= {9,8,7,6};
Keypad teclado = Keypad(makeKeymap(keys), pinesFilas, pinesColumnas, FILAS, COLUMNAS);
char tecla;



void setup() { 
  
  Serial.begin(9600);
  Wire.begin();        
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  oled.clearDisplay();
  oled.display();
 
 
  pinMode(LedRojo_pin, OUTPUT);
  pinMode(LedAmarillo_pin, OUTPUT);
  pinMode(LedVerde_pin, OUTPUT);
  pinMode(Buzzer_pin, OUTPUT);

  
}
 
void loop() {
//Pantalla1

  if (estadoDeSistema==0)
  { 
    oled.clearDisplay();
    oled.setTextColor(WHITE); 
    oled.setCursor(0, 30);    
    oled.setTextSize(1);      
    oled.print("Sistema: Apagado");
    oled.display(); 
  }
  else
  {
    oled.clearDisplay();
    oled.setTextColor(WHITE);  
    oled.setCursor(0, 0);     
    oled.setTextSize(1);     
    oled.print("Sistema: Encendido");
    oled.setCursor(0, 15);
    oled.print("Opciones del menu"); 
    oled.print("1. "); 
    oled.setCursor(0, 30);
    oled.print("2. "); 
    oled.display(); 
  }

// Control del sismo




  
// Teclado
 tecla= teclado.getKey(); // obtiene tecla presionada y asigna el valor a TECLA  
  if (tecla)
  {
    Serial.println(tecla);
    delay(10);
    switch (tecla)
    {
      case '1':       
        //Menu [1]
        break;
        
      case '2':
        //Menu [2]
        break;
        
      case '3':
        //Menu [3]
        break;

      case '4':
        //Menu [4]
        break;
      
      default: 
        break;      
    }
   } 
