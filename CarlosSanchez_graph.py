import numpy as np
import matplotlib.pyplot as plt

#Consigo los datos del archivo txt
datos=genfromtxt('tray.txt',delimiter=",")


posicion=datos[:,0]
velocidad=datos=[:,1]
tiempo =datos[:,2]

#Graficas requeridas

plt.figure()
plt.plot(posicion,tiempo)
plt.savefig('pos.png')
plt.plot(velocidad,tiempo)
plt.savefig('vel.png')
plt.plot(velocidad,posicion)
plt.savefig('phase.png')




