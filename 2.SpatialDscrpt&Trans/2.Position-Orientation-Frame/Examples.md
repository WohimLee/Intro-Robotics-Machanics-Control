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

```