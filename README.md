# 2025-2026-VEX-Robotics-Code-Auto-and-driver-98549E


# VEX Robotics Code (PROS + LemLib)

This repository contains my team's VEX Robotics robot code written in C++ using PROS and LemLib.
The code controls drivetrain movement, autonomous navigation using odometry, and driver
control.

At the moment the code is divised into 4 sections; There's one section each for autonomous, the inertial sensor, inertial sensor calibration, and the joystick.


## Features

Drivetrain
- Arcade drive using motor groups
- LemLib drivetrain configuration with PID control

Sensors and Odometry
- Inertial sensor for heading
- Vertical and horizontal tracking wheels
- LemLib odometry for tracking x, y, and heading
- Full sensor calibration on startup

Autonomous
- Needs to be set to a starting pose
- Drives to points using odometry
- Turns to specific headings using the IMU
- Uses LemLib motion functions

Driver Control
- Arcade drive 
- Button for intake and scoring mechanisms
- Button for pneumatics (pistons, stopper, descore)


## Controller Mapping

Drive
- Left joystick Y: forward / backward
- Right joystick X: turning left/right

Intake
- B: intake forward
- A: intake reverse

Scoring
- X: score forward [High goal/middle goal]
- Y: score reverse [Low goal/outake]

Pneumatics
- UP: toggle scraper
- RIGHT: toggle descore
- DOWN: toggle passive descore/stopper


## Libraries Used
- PROS
- LemLib


## Notes
- PID values and odometry offsets are still being tuned
- Autonomous routines may be subject to change as testing continues
- First-year LemLib and odometry implementation


## Author
Ganeev Mujral [First year robotics student]
