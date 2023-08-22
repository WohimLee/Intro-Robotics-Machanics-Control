&emsp;
# Exercise

1. A vector $P_A$ is rotated about $\hat{Z}_A$ by $\theta$ degrees and is subsequently rotated about $\hat{X}_A$ by $\phi$ degrees. Give the rotation matrix that accomplishes these rotations in the given order.
   

2. A vector $P_A$ is rotated about $\hat{Y}_A$ by $30$ degrees and is subsequently rotated about $\hat{X}_A$ by $45$ degrees. Give the rotation matrix that accomplishes these rotations in the given order.

3. A frame ${B}$ is located initially coincident with a frame ${A}$. We rotate ${B}$ about $\hat{Z}_A$ by $\theta$ degrees, and then we rotate the resulting frame about $\hat{X}_B$ by $\phi$ degrees. Give the rotation matrix that will change the descriptions of vectors from $P_B$ to $P_A$

4. A frame ${B}$ is located initially coincident with a frame ${A}$. We rotate ${B}$ about $\hat{Z}_B$ by $30$ degrees, and then we rotate the resulting frame about $\hat{X}_B$ by $45$
degrees. Give the rotation matrix that will change the description of vectors from $P_B$ to $P_A$.

5. $R_{AB}$ is a $3 \times 3$ matrix with eigenvalues $1$, $e^{+ai}$ and $e^{-ai}$, where $i = \sqrt{-1}$. What is the physical meaning of the eigenvector of $R_{AB}$ associated with the eigenvalue $1$?

6. Derive equation
   
7. Describe (or program) an algorithm that extracts the equivalent angle and axis of a rotation matrix. Equation (82) is a good start, but make sure that your
algorithm handles the special cases 8 = 0° and 9 = 180°.

8. Write a subroutine that changes representation of orientation from rotation matrix form to equivalent angle—axis form. A Pascal-style procedure declaration
would begin

Procedure RNTOAA (VAR R:mat33; VAR K:vec3; VAR theta: real);
Write another subroutine that changes from equivalent angle—axis representation to rotation-matrix representation:
Procedure AATORN(VAR K:vec3; VAR theta: real: VAR R:nat33);
Write the routines in C if you prefer.
Run these procedures on several cases of test data back-to-back and verify that you get back what you put in. Include some of the difficult cases!

9. Do Exercise 8 for roll, pitch, yaw angles about fixed axes.
    
10. Do Exercise 8 for Z—Y—Z Euler angles.


11. Under what condition do two rotation matrices representing finite rotations commute? A proof is not required.