int led = 13;  // Se declara una variable led de tipo entero e inicializada con el valor 13, que representa el número de pin al que está conectado el LED.
char dato; //Se declara una variable dato de tipo caracter para almacenar los datos recibidos por el puerto serial.

void setup() {
  pinMode(13,OUTPUT);  // Se configura el pin 13 como salida, lo que significa que se utilizará para enviar señales al LED.
  Serial.begin(9600); //Se encenderá en 96000 baudios
}

void loop() {
  if(Serial.available()>0){  //Verifica si hay datos disponibles en el puerto serial.
    dato = Serial.read(); //Lee el dato disponible en el puerto serial y lo almacena en la variable dato.
    if(dato == '1'){   // Comprueba si el dato recibido es igual a '1'.
      digitalWrite(13,HIGH);  // Enciende el LED conectado al pin 13 estableciendo el pin en un estado alto (HIGH).
    }
    if(dato == 'A'){ //Comprueba si el dato recibido es igual a 'A'.
      digitalWrite(13,LOW); //Apaga el LED conectado al pin 13 estableciendo el pin en un estado bajo (LOW).
    }
  }
}
