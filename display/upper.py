import serial as ser 

ser.Serial(port,baud,timeout=1)

if __name__== "__main__":
    while True:
        if ser.readchar()=="N":
            ser.sendchar()

