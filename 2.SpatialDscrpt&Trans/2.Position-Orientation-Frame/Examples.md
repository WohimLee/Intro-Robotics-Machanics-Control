&emsp;
# Examples
## 1
In 3D, a rotation matrix can be used to rotate a point or vector in 3-dimensional space. A common way to represent rotations is by using axis-angle notation. 

For example, if you want to rotate a point $P=(x, y, z)$ by $θ$ radians around the unit vector $\hat{k} = (k_x, k_y, k_z)$, the rotation matrix $R$ would be:

$R=\left(\begin{array}{cc}
\cos (θ)+k_x^2(1-\cos (θ)) & k_x k_y(1-\cos (θ))-k_z \sin (θ) & k_x k_z(1-\cos (θ))+k_y \sin (θ)\\
k_y k_x(1-\cos (θ))+k_z \sin (θ) & \cos (θ)+k_y^2(1-\cos (θ)) & k_y k_z(1-\cos (θ))-k_x \sin (θ) \\
k_z k_x(1-\cos (θ))-k_y \sin (θ) & k_z k_y(1-\cos (θ))+k_x \sin (θ) & \cos (θ)+k_z^2(1-\cos (θ))
\end{array}\right)$

For simplicity, let's rotate a point $P=(1,0,0)$ $90$ degrees($\frac{\pi}{2}$ radians) around the z-axis. The unit vector for the z-axis is $k=(0,0,1)$.


```py
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
```

&emsp;
## 2

Let's assume that we have two 3D coordinate systems: System A, with unit vectors $\hat{i}_A, \hat{j}_A$, $\hat{k}_A$, and System $B$, with unit vectors $\hat{i}_B, \hat{j}_B, \hat{k}_B$. Further, let's assume that System $B$ is rotated relative to System A.

The unit vectors of System $B$ can be expressed in terms of the unit vectors of System $A$ using a rotation matrix $\pmb{R}$

$$\left[\begin{array}{l}
\hat{i}_B \\ \hat{j}_B \\ \hat{k}_B
\end{array}\right]=\mathbf{R}\left[\begin{array}{l}
\hat{i}_A \\ \hat{j}_A \\ \hat{k}_A
\end{array}\right]$$

If $\pmb{R}$ is the rotation matrix that transforms coordinates from System $A$ to System $B$, then the individual vectors can be expressed as:

$$\begin{aligned}
& \hat{i}_B=R_{11} \hat{i}_A+R_{12} \hat{j}_A+R_{13} \hat{k}_A \\
& \hat{j}_B=R_{21} \hat{i}_A+R_{22} \hat{j}_A+R_{23} \hat{k}_A \\
& \hat{k}_B=R_{31} \hat{i}_A+R_{32} \hat{j}_A+R_{33} \hat{k}_A
\end{aligned}$$

Here, $R_{ij}$ are the elements of the rotation matrix $\pmb{R}$. This representation is often useful in fields like physics, engineering, computer graphics, and robotics to transform vectors and points between different coordinate systems.

```py
import numpy as np

# Define unit vectors for Coordinate System A
i_A = np.array([1, 0, 0])
j_A = np.array([0, 1, 0])
k_A = np.array([0, 0, 1])

# Define a rotation matrix R (This is a sample; you can replace it with any valid rotation matrix)
# The matrix rotates points around the z-axis by 45 degrees
theta = np.pi / 4  # 45 degrees in radians
R = np.array([
    [np.cos(theta), -np.sin(theta), 0],
    [np.sin(theta), np.cos(theta), 0],
    [0, 0, 1]
])

# Compute the unit vectors for Coordinate System B in terms of A
i_B = np.dot(R, i_A)
j_B = np.dot(R, j_A)
k_B = np.dot(R, k_A)

# Output the transformed unit vectors
print(f"i_B in terms of A: {i_B}")
print(f"j_B in terms of A: {j_B}")
print(f"k_B in terms of A: {k_B}")
```