&emsp;
# Intro
1. INTRODUCTION
2. LINK DESCRIPTION
3. LINK-CONNECTION DESCRIPTION
4. CONVENTION FOR AFFIXING FRAMES TO LINKS
5. MANIPULATOR KINEMATICS
6. ACTUATOR SPACE, JOINT SPACE, AND CARTESIAN SPACE
7. EXAMPLES: KINEMATICS OF TWO INDUSTRIAL ROBOTS
8. FRAMES WITH STANDARD NAMES
9. WHERE IS THE TOOL?
10. COMPUTATIONAL CONSIDERATIONS

Kinematics is the science of motion that treats the subject without regard to the forces that cause it. Within the science of kinematics, one studies:
- position
- velocity
- acceleration
- and all higher order derivatives of the position variables(with respect to time or any other variable(s)). 

Hence, the study of the kinematics of manipulators refers to all the geometrical and time-based properties of the motion.The relationships between these:
- motions
- forces
- torques

that cause them constitute the problem of dynamics, which is the subject of Chapter 6.

In this chapter, we consider `position` and `orientation` of the manipulator linkages in static situations. In Chapters 5 and 6, we will consider the kinematics when `velocities` and `accelerations` are involved.

In order to deal with the complex geometry of a manipulator, we will affix frames to the various parts of the mechanism and then describe the relationships between these frames. The study of manipulator kinematics involves, among other things, how the locations of these frames change as the mechanism articulates. 

The central topic of this chapter is a method to compute the position and orientation of the manipulator's end-effector relative to the base of the manipulator as a function of the joint variables.