&emsp;
# Link Description


A manipulator may be thought of as a set of bodies connected in a chain by joints:
- `Link`: bodies are called links
- `Joints`: joints form a connection between a neighboring pair of links. 

The term `lower pair` is used to describe the connection between a pair of bodies when the relative motion is characterized by two surfaces sliding over one another. The fig below shows the six possible lower pair joints.

<div align=center>
    <image src="imgs/pairs.png" width=400>
</div>
&emsp;

Mechanical-design considerations favor manipulators' generally being constructed from joints that exhibit just $1$ DoF. Most manipulators have `revolute joints` or have sliding joints called `prismatic joints`. 

In the rare case that a mechanism is built with a joint having $n$ DoF, it can be modeled as $n$ joints of one degree of freedom connected with $n — 1$ links of zero length. Therefore, without loss of generality, we will consider only manipulators that have joints with a single degree of freedom.

The links are numbered starting from the immobile base of the arm, which might be called `link 0`. The first moving body is `link 1`, and so on, out to the free end of the arm, which is `link n`. In order to position an end-effector generally in 3-space, a minimum of six joints is required.1 Typical manipulators have five or six joints. Some robots are not actually as simple as a single kinematic chain—these have parallelogram linkages or other closed kinematic structures. We wifi consider
one such manipulator later in this chapter.


A single link of a typical robot has many attributes that a mechanical designer had to consider during its design: 
- the type of material used
- the strength and stiffness of the link
- the location and type of the joint bearings
- the external shape
- the weight and inertia, and more. 


However, for the purposes of obtaining the kinematic equations of the mechanism, a link is considered only as: 
- A Rigid Body: defines the relationship between two neighboring joint axes of a manipulator. 

Joint axes are defined by lines in space. Joint axis i is defined by a line in space, or a vector
direction:
- about which `link i` rotates relative to link `i - 1`.

It turns out that, for kinematic purposes, a link can be specified with two numbers, which define the relative location of the two axes in space.

<div align=center>
    <image src="imgs/perpendicularline.png" width=400>
</div>
&emsp;

## Perpendicular Line
For any two axes in 3-space, there exists a well-defined measure of distance between them. This distance is measured along a line that is mutually `perpendicular` to both axes. This mutual perpendicular always exists; it is `unique` except when both axes are parallel, in which case there are many mutual perpendiculars of equal length. 


The fig above shows `link i-1` and the mutually perpendicular line along which the link length $a_{n+1}$, is measured. Another way to visualize the link parameter $\alpha_{i-1}$ is to imagine an expanding cylinder whose axis is the joint $i-1$ axis—when it just touches joint axis $i$, the radius of the cylinder is equal to $\alpha_{i-1}$

&emsp;
## Link Twist
The second parameter needed to define the relative location of the two axes is called the `link twist`. 

If we imagine a plane whose normal is the mutually perpendicular line just constructed, we can project the axes `i-1` and `i` onto this plane and measure the angle between them. This angle is measured from axis `i-1` to axis `i` in the right-hand sense about $\alpha_{i-1}$. We will use this definition of the twist of link `i-1`, $\alpha_{i-1}$. 

In the fig above, $\alpha_{i-1}$ is indicated as the angle between axis `i-1` and axis `i`. (The lines with the triple hash marks are parallel.) In the case of intersecting axes, twist is measured in the plane containing both axes, but the sense of is lost. In this special case, one is free to assign the sign of $\alpha_{i-1}$ arbitrarily.

&emsp;
## Summary
You should convince yourself that these two parameters, length and twist, as defined above, can be used to define the relationship between any two lines (in this
case axes) in space.
