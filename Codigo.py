import serial
import time  # Importa la librería para hacer tiempos

arduino = serial.Serial('COM3', 9600)  # Selecciona el puerto COM y la velocidad
time.sleep(2)  # Espera dos segundos antes de enviar datos

arduino.write(b'A')  # Envía el byte '1' (convertido a bytes)
arduino.close()  # Cierra la conexión
