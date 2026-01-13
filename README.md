# Project 1: Engineering a Wheeled Robot

[![build](../../actions/workflows/build.yml/badge.svg)](../../actions/workflows/build.yml)

## Table of Contents

- [Timeline](#timeline)
- [Overview](#overview)
- [Learning Outcomes](#learning-outcomes)
- [Team Structure](#team-structure)
- [Project Phases and Weekly Tasks](#project-phases-and-weekly-tasks)
  - [Week 1: Design and Planning](#week-1-design-and-planning-due-january-16-and-20)
  - [Week 2: Building and Wiring](#week-2-building-and-wiring-due-january-27)
  - [Week 3: Programming and Autonomy](#week-3-programming-and-autonomy-due-february-3)
- [Technical Requirements](#technical-requirements)
  - [Mechanical Requirements](#mechanical-requirements)
  - [Electrical Requirements](#electrical-requirements)
  - [Software Requirements](#software-requirements)
  - [Optional Extensions](#optional-extensions)
- [Baseline Hardware Kit](#baseline-hardware-kit)
- [Assessment Rubric](#assessment-rubric)
- [Team Evaluation Process](#team-evaluation-process)
- [Resources](#resources)
- [Submission Instructions](#submission-instructions)
- [Academic Integrity](#academic-integrity)
- [Getting Help](#getting-help)
- [Safety Reminders](#safety-reminders)

## Timeline

- **Assigned:** January 13, 2026
- **Final Product Due:** February 3, 2026 (2:30 PM)
- **Duration:** 3 weeks with scaffolded deadlines

## Overview

In this project, you will design, build, and program a wheeled robot from scratch. This is an **open-ended design challenge** where you and your team will make engineering decisions about the robot's form, function, and behavior. By the end of this project, you will have a programmable, autonomous robot that demonstrates core robotics principles including **locomotion, kinematics, forces, and actuation**.

This project bridges theory and practice. As you build, we will explore related concepts in class, including:
- **Locomotion:** How robots move through space
- **Kinematics:** The mathematics of motion (position, velocity, orientation)
- **Forces and Dynamics:** How motors generate force and torque
- **Actuation:** Converting electrical signals into physical motion

## Learning Outcomes

By completing this project, you will be able to:

1. **Design** a functional wheeled robot given real-world constraints (cost, time, materials)  
   *Fulfills Course Learning Outcome 2*
2. **Apply** principles of locomotion, kinematics, and actuation to a physical system  
   *Fulfills Course Learning Outcomes 1, 4*
3. **Integrate** mechanical, electrical, and software components into a working system  
   *Fulfills Course Learning Outcome 1*
4. **Program** an Arduino-based controller to produce autonomous behavior  
   *Fulfills Course Learning Outcome 2*
5. **Debug** hardware and software issues in an embedded system  
   *Fulfills Course Learning Outcome 2*
6. **Collaborate** effectively in a small engineering team  
   *Fulfills Course Learning Outcome 2*
7. **Document** design decisions, failures, and insights  
   *Fulfills Course Learning Outcome 2*

## Team Structure

- **Team Size:** 2–3 students
- **Team Formation:** You may select your own teammates
- **Roles:** Each team member must contribute to design, building, and programming
- **Collaboration:** Use your team's GitHub repository for all code and documentation
- **Accountability:** Complete peer evaluations and self-reflections to ensure fair grading

## Project Phases and Weekly Tasks

### Week 1: Design and Planning (Due January 16 and 20)

**Deliverables:**
- Robot design document (see `design/design.md`, **Due January 20 by 2:30PM**)
- Component request list (see `design/components.md`, **Due January 16 by 11:59PM**)
- Team contract (see `design/team-contract.md`, **Due January 16 by 11:59PM**)

**Tasks:**
1. Research wheeled robot designs (differential drive, skid-steer, etc.)
2. Sketch your robot design (hand-drawn is fine)
3. List all components you need from the baseline kit + any additions
4. Define success criteria: What should your robot be able to do?
5. Assign initial team roles

### Week 2: Building and Wiring (Due January 27)

**Deliverables:**
- Assembled robot chassis with motors and wheels
- Wired motor driver and Arduino
- Demonstration of your robot in progress

**Tasks:**
1. Assemble the chassis and mount motors
2. Wire the motor driver to the Arduino
3. Wire the power system (battery + switch)
4. Test individual motor function with simple code (optional)
5. Debug wiring issues and document solutions

**Check-in (January 27 Lab):**
- Demonstrate completed build of the robot
- Demonstrate that both motors can spin forward and backward (optional)
- Show your wiring diagram
- Discuss any challenges or design changes

### Week 3: Programming and Autonomy (Due February 3)

**Deliverables:**
- Complete, functional robot
- Arduino program with multiple behaviors
- Reflection document (see `writing/reflection.md`)
- Peer and self-evaluation form (Google Form)
- Final demonstration

**Tasks:**
1. Write Arduino code for basic motion (forward, backward, turn)
2. Implement at least one autonomous behavior (timed routine, sensor-based, etc.)
3. Test and refine robot performance
4. Document your code with comments
5. Complete peer and self-evaluation form
6. Give demonstration to class on February 3rd

**Final Demonstration (February 3 Lab and February 4 Class):**
- Live demo of your robot performing autonomous behavior given during lab on February 3rd
- During the demo each team must also cover design, challenges, and lessons learned
- **Individual code reviews** during remiander of lab on February 3rd and class on February 4th (~5 minutes per person)

## Technical Requirements

### Mechanical Requirements

- **Locomotion:** Two-wheel differential drive (minimum)
  - Two powered wheels on parallel axes
  - One passive caster or skid for stability
- **Chassis:** Any material (acrylic, wood, 3D-printed, etc.)
- **Stability:** Robot must not tip over during normal operation

### Electrical Requirements

- **Microcontroller:** Arduino Uno or Raspberry Pi Pico 2
- **Motor Driver:** H-bridge motor driver 
- **Power:** Separate power for motors
  - **Critical:** Motors MUST NOT be powered from Arduino 5V pin
  - All grounds must be connected (common ground)

### Software Requirements

- **Language:** Arduino C/C++ (or MicroPython for Pico)
- **Behaviors (minimum):**
  1. Move forward for a specified distance/time
  2. Move backward
  3. Turn left and right
  4. Execute one autonomous routine (e.g., square pattern, obstacle avoidance)
- **Code Quality:**
  - Well-commented code
  - Modular functions (not one giant `loop()`)
  - Version controlled via Git

### Optional Extensions 

- Add sensors (ultrasonic, IR line follower, etc.)
- Implement closed-loop control (encoders for accurate distance)
- Advanced behaviors (wall following, line following, maze solving)

## Baseline Hardware Kit

Each team will receive the following components:

### Core Electronics
- 1× Arduino Uno R3 (or compatible)
- 1× USB cable
- 1x [robot chassis kit](https://www.amazon.com/dp/B01LXY7CM3?ref=fed_asin_title)

**Additional components may be requested in your design document, subject to instructor approval.**

## Assessment Rubric

**Total: 8 points** (part of 40 points for all projects)

**Your grade = (Team Product Score + Code Review Score) − Contribution Penalty**

### Team Product Evaluation (6.5 points)

All team members start with the same team product score.

#### Design and Planning (1.0 point)
- [ ] Design document completeness and feasibility (0.5 pts)
- [ ] Component list with justifications (0.3 pts)
- [ ] Team contract established (0.2 pts)

#### Build Quality (2.0 points)
- [ ] Mechanical assembly and stability (1.1 pts)
- [ ] Wiring quality and safety (0.9 pts)

#### Code Quality (1.5 points)
- [ ] Code organization and modularity (0.4 pts)
- [ ] Code documentation and comments (0.3 pts)
- [ ] Autonomous behavior implementation (0.8 pts)

#### Demonstration (2.0 points)
- [ ] Robot performs all required behaviors during the demonstration (1.2 pts)
- [ ] Team demonstration covers design, challenges, and lessons learned (0.8 pts)

#### Documentation (0.9 points)
- [ ] Reflection quality and insights (0.7 pts)
- [ ] Git usage (regular commits, clear messages) (0.2 pts)

### Code Review/Technical Interview (1.5 points)

Individual meeting with instructor where you will:
- Explain your code contributions and design decisions
- Demonstrate understanding of motor control, electronics, and wiring
- Answer questions about mechanical design decisions
- Show knowledge of debugging approaches used

**Scoring:**
- **1.35–1.5 pts:** Deep understanding, can explain all components, clear significant contributions
- **1.1–1.3 pts:** Solid understanding, can explain most aspects, fair contribution
- **0.75–1.0 pts:** Basic understanding, some gaps in knowledge or contribution
- **0.4–0.7 pts:** Minimal understanding, cannot explain contributions adequately
- **0 pts:** Did not participate or attend code review

### Peer Evaluation & Contribution Penalty (0 to −6 points)

After calculating your base score (Team Product + Code Review = up to 8 points), a penalty is applied based on peer evaluations and contribution evidence.

**Penalty determined by:**
- Peer evaluation feedback (communication, collaboration, reliability, contribution quality)
- Git commit history showing documented contributions
- Self-reflection quality and alignment with peer feedback

**Penalty levels:**
- **No penalty (0 pts deducted):** Excellent peer reviews (4.5–5.0 avg), strong evidence of equal contribution
- **Minor penalty (−0.5 to −1 pts):** Good peer reviews (3.5–4.4 avg), minor contribution concerns
- **Moderate penalty (−1.5 to −3 pts):** Adequate peer reviews (2.5–3.4 avg), clear contribution deficits
- **Major penalty (−3.5 to −5 pts):** Poor peer reviews (1.5–2.4 avg), minimal contribution
- **Severe penalty (−6 to −8 pts):** Very poor peer reviews (<1.5 avg), non-participation
- Non-participant: 6.5 + 0 − 6.5 = **0/8**

### Extra Credit (up to 0.5 points)
- Sensor integration and advanced autonomous behaviors (0.3 pts)
- Exceptional build quality, innovation, or going above and beyond (0.2 pts)

---

## Team Evaluation Process

### Peer and Self-Evaluation Form (Due with Final Submission)

Each team member will complete a **peer and self-evaluation form** (Google Form) that includes:

**Part 1: Peer Evaluation**

For each teammate (including yourself), rate on a scale of 1-5:

1. **Communication:** Did they communicate actively and keep the team updated?
2. **Timeliness:** Did they complete work on time and not push tasks to the last minute?
3. **Work Quality:** Did they put in genuine effort and produce quality work?
4. **Collaboration:** Were they open to discussion, compromise, and willing to help others?
5. **Contribution:** Did they contribute an equal/fair share to the project?
6. **Reliability:** Could you depend on them to follow through on commitments?

**Open-ended questions:**
- What were this teammate's most valuable contributions?
- What could this teammate have done better?
- Would you want to work with this teammate again? Why or why not?

**Part 2: Self-Reflection**

**Your Contributions:**
- List specific tasks you completed (e.g., "designed chassis in CAD," "wired motor driver," "wrote movement functions")
- Estimate hours spent on the project
- Rate your own communication, timeliness, and collaboration (1-5)

**Learning and Growth:**
- What was your biggest technical learning from this project?
- What did you learn about teamwork?
- What would you do differently next time?
- How did you handle challenges or disagreements?

**Honest Assessment:**
- Did you contribute your fair share? (Yes/No and explanation)
- Were there any circumstances that affected your ability to contribute?
- What are you most proud of from this project?

## Resources

### Getting Started with Arduino
- [Arduino Uno Official Guide](https://docs.arduino.cc/hardware/uno-rev3)
- [Arduino Language Reference](https://www.arduino.cc/reference/en/)
- [Adafruit Motor Shield V2 Tutorial](https://learn.adafruit.com/adafruit-motor-shield-v2-for-arduino)

### Robotics Concepts
- *Introduction to Autonomous Robots* (Correll et al.) - Chapters 2, 3, 6, 7
- Class lecture notes and slides

### Motor Control
- [PWM Tutorial](https://www.arduino.cc/en/Tutorial/Foundations/PWM)
- [H-Bridge Motor Driver Explained](https://www.instructables.com/H-Bridge-Motor-Driver/)

### Example Projects (for inspiration only)
- [Simple Arduino Robot](https://www.instructables.com/Simple-Arduino-Robot/)
- [Differential Drive Robot](https://howtomechatronics.com/projects/arduino-robot-car/)

## Submission Instructions

### Deadlines
Submit via your team's GitHub repository:
- **Week 1:** Push design documents to `design/` folder (`components.md` and `team-contract.md` due by 11:59PM on January 16th, `design.md` due by 2:30PM on January 20th)
- **February 3rd, by 2:30PM:** Push final code to `src/` and reflection to `writing/`

**Additionally, by February 3rd 2:30PM each team member must complete:**
- Peer and self-evaluation form (Google Form link provided separately)

### Presentation and Code Review (February 3)
- Bring your robot to lab, fully charged and ready to demonstrate
- Be prepared to explain your design choices and challenges
- Each team will have 5 minutes to present + 2 minutes for Q&A
- During the remainder of the lab on February 3rd and class on February 4th, each individual will have a ~5 minute code review with the instructor where you will:
  - Walk through your code contributions
  - Explain how motors and motor drivers work
  - Describe your wiring and power system
  - Discuss mechanical design decisions
  - Demonstrate understanding of debugging approaches

## Academic Integrity

- Cite any external resources, tutorials, or code snippets you use
- Do not copy code from the internet or LLM without understanding and attribution

## Getting Help

- **Office Hours:** See course syllabus
- **Lab/Class Sessions:** Use lab and dedicated class time to work with your team and get real-time help
- **Debugging Tips:** Document your issue before asking for help (what you tried, what error you see)
- **Hardware Issues:** If a component is defective, notify the instructor immediately

## Safety Reminders

⚠️ **Important Safety Rules:**

1. **Never** connect motor power directly to Arduino pins
2. **Always** use a motor driver (H-bridge)
3. **Check** polarity before connecting batteries
4. **Disconnect** power when making wiring changes
5. **Avoid** short circuits—double-check connections
6. **Use** appropriate voltage for your motors (6–9V typical)

---

**Good luck, and have fun building!**
