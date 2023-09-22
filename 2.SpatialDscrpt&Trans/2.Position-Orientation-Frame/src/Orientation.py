import numpy as np

r11, r12, r13, r21, r22, r23, r31, r32, r33 = 0

R_AB = np.array([
    [r11, r12, r13],
    [r21, r22, r23],
    [r31, r32, r33]
])


# Example
X_A = np.array([1, 0, 0])
Y_A = np.array([0, 1, 0])
Z_A = np.array([0, 0, 1])

I_A = np.array([X_A, Y_A, Z_A])
I_B = np.array([X_B, Y_B, Z_B])
R_AB = np.array([
    [X_B@X_A, Y_B@X_A, Z_B@X_A],
    [X_B@Y_A, Y_B@Y_A, Z_B@Y_A],
    [X_B@Z_A, Y_B@Z_A, Z_B@Z_A]
])