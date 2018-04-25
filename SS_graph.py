import numpy as np
import matplotlib.pyplot as plt

#Carga de datos
data=np.genfromtxt('advection.txt')

arr= np.arange(0,750,175)
# recorrido de los diferentes snapshots
for i in arr:
	x = data[data[:,0]==i,1]
	y = data[data[:,0]==i,2]
	try:
		plt.plot(x,y)
	except:
		print i

#Se realiza la grafica de f(x,t) y x
plt.xlabel('x')
plt.ylabel('f(x,t)')
plt.ylim(0,1)
plt.title('Graph')
plt.grid()
plt.savefig('graph.png')