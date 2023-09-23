import numpy as np

# Define the rotation angle in radians (90 degrees)
theta = np.pi / 2

# Define the unit vector for the z-axis
kx, ky, kz = 0, 0, 1

# Define the point P as a column vector
P = np.array([[1], [0], [0]])

# Define the 3D rotation matrix for rotation around the z-axis
R = np.array([
    [np.cos(theta) + kx**2 * (1 - np.cos(theta)), kx * ky * (1 - np.cos(theta)) - kz * np.sin(theta), kx * kz * (1 - np.cos(theta)) + ky * np.sin(theta)],
    [ky * kx * (1 - np.cos(theta)) + kz * np.sin(theta), np.cos(theta) + ky**2 * (1 - np.cos(theta)), ky * kz * (1 - np.cos(theta)) - kx * np.sin(theta)],
    [kz * kx * (1 - np.cos(theta)) - ky * np.sin(theta), kz * ky * (1 - np.cos(theta)) + kx * np.sin(theta), np.cos(theta) + kz**2 * (1 - np.cos(theta))]
])

print(R)

# Rotate the point P using the rotation matrix R
P_rotated = np.dot(R, P)

print("Original point:", P.flatten())
print("Rotated point:", P_rotated.flatten())
