&emsp;
# CHAPTER 5
# Jacobians: velocities and static forces
- 5.1 INTRODUCTION
- 5.2 NOTATION FOR TIME-VARYING POSITION AND ORIENTATION
- 5.3 LINEAR AND ROTATIONAL VELOCITY OF RIGID BODIES
- 5.4 MORE ON ANGULAR VELOCITY
- 5.5 MOTION OF THE LINKS OF A ROBOT
- 5.6 VELOCITY "PROPAGATION" FROM LINK TO LINK
- 5.7 JACOBIANS
- 5.8 SINGULARITIES
- 5.9 STATIC FORCES IN MANIPULATORS
- 5.10 JACOBIANS IN THE FORCE DOMAIN
- 5.11 CARTESIAN TRANSFORMATION OF VELOCITIES AND STATIC FORCES

## Introduction

In this chapter
- we expand our consideration of robot manipulators beyond static positioning problems
- We examine the notions of `linear and angular velocity` of a rigid body and use these concepts to analyze the motion of a manipulator
- We also will consider `forces acting` on a rigid body, and then use these ideas to study the application of static forces with manipulators.

It turns out that the study of both velocities and static forces leads to a matrix entity called the `Jacobian` of the manipulator, which will be introduced in this chapter.

The field of kinematics of mechanisms is not treated in great depth here.

For the most part, the presentation is restricted to only those ideas which are fundamental to the particular problem of robotics. 

The interested reader is urged to study further from any of several texts on mechanics [1—3].