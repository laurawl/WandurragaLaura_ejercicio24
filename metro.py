import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt("metro.dat")
plt.hist(data)
plt.axis('square')
plt.xlim([-2, 2])
plt.ylim([-2, 2])
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("metro.png")
