#!/home/mondegreen/anaconda3/envs/qs_mlenv/bin/ python

import sys
print(sys.executable)

import numpy as np

print(np.sum(range(1,101))**2 - np.power(range(1,101), 2).sum())
