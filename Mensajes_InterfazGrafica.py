import serial
import serial.tools.list_ports
import time
import tkinter as tk
from tkinter import messagebox

class ArduinoSender:
    def __init__(self, baudrate=9600):
        self.port = self.find_arduino()
        if not self.port:
            messagebox.showerror("Error", "No se pudo encontrar un Arduino conectado.")
            exit(1)
        
        self.arduino = serial.Serial(self.port, baudrate)
        time.sleep(2)

        self.root = tk.Tk()
        self.root.title("Cubo Led - Mensajes Dinámicos")

        # Asegurar que la ventana se ajuste al contenido
        self.root.geometry("")

        self.label = tk.Label(self.root, text="Ingrese el texto que desea visualizar:")
        self.label.pack(fill='x', padx=10, pady=10)

        self.entry = tk.Entry(self.root)
        self.entry.pack(fill='x', padx=10, pady=10)

        self.send_button = tk.Button(self.root, text="Enviar", command=self.send_message)
        self.send_button.pack(pady=10)

    def find_arduino(self):
        ports = list(serial.tools.list_ports.comports())
        for port in ports:
            if "Arduino" in port.description:
                return port.device
        return None

    def send_message(self):
        message = self.entry.get()
        for char in message:
            char = char.upper()
            self.arduino.write(char.encode())
            time.sleep(1)

    def run(self):
        self.root.mainloop()
        self.arduino.close()

if __name__ == "__main__":
    sender = ArduinoSender()
    sender.run()
