# Project 1: Engineering a Wheeled Robot

[![build](../../actions/workflows/build.yml/badge.svg)](../../actions/workflows/build.yml)

## Timeline

- **Assigned:** January 12, 2026
- **Due:** February 3, 2026 (11:59 PM)
- **Duration:** 3 weeks with weekly check-ins

## Overview

In this project, you will design, build, and program a wheeled robot from scratch. This is an **open-ended design challenge** where you and your team will make engineering decisions about the robot's form, function, and behavior. By the end of this project, you will have a programmable, autonomous robot that demonstrates core robotics principles including **locomotion, kinematics, forces, and actuation**.

This project bridges theory and practice—as you build, we will explore related concepts in class, including:
- **Locomotion:** How robots move through space
- **Kinematics:** The mathematics of motion (position, velocity, orientation)
- **Forces and Dynamics:** How motors generate force and torque
- **Actuation:** Converting electrical signals into physical motion

## Learning Objectives

By completing this project, you will be able to:

1. **Design** a functional wheeled robot given real-world constraints (cost, time, materials)
2. **Apply** principles of locomotion, kinematics, and actuation to a physical system
3. **Integrate** mechanical, electrical, and software components into a working system
4. **Program** an Arduino-based controller to produce autonomous behavior
5. **Debug** hardware and software issues in an embedded system
6. **Collaborate** effectively in a small engineering team
7. **Document** design decisions, failures, and insights

## Team Structure

- **Team Size:** 2–3 students
- **Team Formation:** You may select your own teammates
- **Roles:** Each team member must contribute to design, building, and programming
- **Collaboration:** Use your team's GitHub repository for all code and documentation
- **Accountability:** Complete peer evaluations and self-reflections to ensure fair grading

## Project Phases and Weekly Check-ins

### Week 1: Design and Planning (Due January 20)

**Deliverables:**
- Robot design document (see `design/design.md`)
- Component request list (see `design/components.md`)
- Team contract (see `design/team-contract.md`)

**Tasks:**
1. Research wheeled robot designs (differential drive, skid-steer, etc.)
2. Sketch your robot design (hand-drawn or CAD)
3. List all components you need from the baseline kit + any additions
4. Define success criteria: What should your robot be able to do?
5. Assign initial team roles

**Check-in (Week 1 Lab):**
- Present your design to the instructor for feedback
- Submit component request list for approval
- Receive your hardware kit

### Week 2: Building and Wiring (Due January 26)

**Deliverables:**
- Assembled robot chassis with motors and wheels
- Wired motor driver and Arduino
- Documentation of build process (see `build/build-log.md`)
- Photos of your robot in progress

**Tasks:**
1. Assemble the chassis and mount motors
2. Wire the motor driver to the Arduino
3. Wire the power system (battery + switch)
4. Test individual motor function with simple code
5. Debug wiring issues and document solutions

**Check-in (Week 2 Lab):**
- Demonstrate that both motors can spin forward and backward
- Show your wiring diagram
- Discuss any challenges or design changes

### Week 3: Programming and Autonomy (Due February 3)

**Deliverables:**
- Complete, functional robot
- Arduino program with multiple behaviors
- Reflection document (see `writing/reflection.md`)
- Final presentation video (2–3 minutes)

**Tasks:**
1. Write Arduino code for basic motion (forward, backward, turn)
2. Implement at least one autonomous behavior (timed routine, sensor-based, etc.)
3. Test and refine robot performance
4. Document your code with comments
5. Create a video demonstration

**Final Demonstration (Week 3 Lab):**
- Live demo of your robot performing autonomous behavior
- 5-minute team presentation covering design, challenges, and lessons learned
- **Individual code reviews** scheduled during lab or office hours (10-15 minutes per person)

## Technical Requirements

### Mechanical Requirements

- **Locomotion:** Two-wheel differential drive (minimum)
  - Two powered wheels on parallel axes
  - One passive caster or skid for stability
- **Chassis:** Any material (acrylic, wood, 3D-printed, etc.)
- **Stability:** Robot must not tip over during normal operation

### Electrical Requirements

- **Microcontroller:** Arduino Uno or Raspberry Pi Pico 2
- **Motor Driver:** H-bridge motor driver (TB6612FNG or L298N)
- **Power:** Separate power for motors (battery pack, 6–9V)
  - **Critical:** Motors MUST NOT be powered from Arduino 5V pin
  - All grounds must be connected (common ground)
- **Safety:** Power switch to disconnect battery

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

### Optional Extensions (Extra Credit)

- Add sensors (ultrasonic, IR line follower, etc.)
- Implement closed-loop control (encoders for accurate distance)
- Advanced behaviors (wall following, line following, maze solving)
- Custom 3D-printed or laser-cut chassis

## Baseline Hardware Kit

Each team will receive the following components:

### Core Electronics
- 1× Arduino Uno R3 (or compatible)
- 1× USB cable
- 1× Dual motor driver (TB6612FNG or L298N)
- 2× DC gear motors (6V, with mounting brackets)
- 2× Wheels (65–70 mm diameter)
- 1× Ball caster or swivel caster

### Power System
- 1× 4×AA battery holder
- 4× AA rechargeable batteries (NiMH)
- 1× Power switch

### Chassis and Hardware
- 1× Acrylic or plywood chassis plate (or material for custom build)
- Motor mounting brackets
- Assorted screws, nuts, standoffs (M3 hardware)

### Wiring and Prototyping
- 1× Half-size breadboard
- 20× Jumper wires (assorted male-male and male-female)
- 5× Zip ties

### Debugging Tools
- 2× LEDs (red/green)
- 2× 220Ω resistors

**Additional components may be requested in your design document, subject to instructor approval.**

## Assessment Rubric

**Total: 8 points** (part of 40 points for all projects)

Your grade will be a combination of **team product evaluation** (80%) and **individual contribution assessment** (20%).

### Team Product Evaluation (6.4 points)

#### Design and Planning (1.5 points)
- [ ] Design document completeness and feasibility (0.8 pts)
- [ ] Component list with justifications (0.4 pts)
- [ ] Team contract established (0.3 pts)

#### Build Quality (2.0 points)
- [ ] Mechanical assembly and stability (1.0 pt)
- [ ] Wiring quality and safety (0.8 pts)
- [ ] Build documentation and photos (0.2 pts)

#### Demonstration and Functionality (2.0 points)
- [ ] Robot performs all required behaviors (1.2 pts)
- [ ] Team presentation quality (0.5 pts)
- [ ] Video demonstration (0.3 pts)

#### Documentation (0.9 points)
- [ ] Build log completeness (0.3 pts)
- [ ] Reflection quality and insights (0.4 pts)
- [ ] Git usage (regular commits, clear messages) (0.2 pts)

### Individual Contribution Assessment (1.6 points)

Your individual grade will be based on:
- **Code Review/Technical Interview (1.0 pt):** Individual meeting with instructor where you will:
  - Explain your code contributions
  - Demonstrate understanding of motor control, electronics, and wiring
  - Answer questions about mechanical design decisions
  - Show knowledge of debugging approaches used
  
- **Peer Evaluation (0.3 pts):** Feedback from teammates on:
  - Communication and collaboration
  - Meeting deadlines and commitments
  - Quality and quantity of contributions
  - Reliability and accountability
  
- **Self-Reflection (0.3 pts):** Your honest assessment of:
  - Your specific contributions to the project
  - What you learned
  - What you would do differently
  - How well you collaborated

### Extra Credit (up to 0.5 points)
- Sensor integration and advanced autonomous behaviors (0.3 pts)
- Exceptional build quality, innovation, or going above and beyond (0.2 pts)

---

## Team Evaluation Process

### Peer Evaluation (Due with Final Submission)

Each team member will complete a **confidential peer evaluation form** (Google Form link will be provided) that assesses:

**For each teammate (including yourself), rate on a scale of 1-5:**

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

### Self-Reflection (Due with Final Submission)

Each team member will also complete a **self-reflection form** (separate Google Form) that includes:

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

### How Individual Grades Are Determined

The instructor will consider:
1. **Code Review Performance:** Can you explain the technical decisions and demonstrate understanding?
2. **Peer Evaluation Scores:** What did your teammates say about your contributions?
3. **Self-Reflection:** Does your self-assessment align with team feedback and documented contributions?
4. **Evidence in Repository:** Git commits, documentation, photos showing your work

**Note:** If there is a significant discrepancy in contributions (e.g., one team member did much less work), individual grades may be adjusted accordingly. Most teams where everyone contributes will receive the same individual score.

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

### Weekly Check-ins
Submit via your team's GitHub repository:
- **Week 1:** Push design documents to `design/` folder
- **Week 2:** Push build log and photos to `build/` folder
- **Week 3:** Push final code to `src/` and reflection to `writing/`

### Final Submission (Due February 3, 11:59 PM)
Your repository should contain:
```
project1/
├── design/
│   ├── design.md
│   ├── components.md
│   └── team-contract.md
├── build/
│   ├── build-log.md
│   └── photos/
├── src/
│   ├── robot_control.ino (or main.py)
│   └── README.md
├── writing/
│   └── reflection.md
└── video/
    └── demo.mp4 (or link to YouTube/Drive)
```

**Additionally, each team member must complete:**
- Peer evaluation form (Google Form link provided separately)
- Self-reflection form (Google Form link provided separately)

### Presentation and Code Review (February 3-7)
- Bring your robot to lab, fully charged and ready to demonstrate
- Be prepared to explain your design choices and challenges
- Each team will have 5 minutes to present + 2 minutes for Q&A
- **Each individual** will schedule a 10-15 minute code review with the instructor where you will:
  - Walk through your code contributions
  - Explain how motors and motor drivers work
  - Describe your wiring and power system
  - Discuss mechanical design decisions
  - Demonstrate understanding of debugging approaches

## Academic Integrity

- You may discuss general concepts with other teams, but **all design and code must be your own**
- Cite any external resources, tutorials, or code snippets you use
- Do not copy code from the internet without understanding and attribution
- Collaboration within your team is encouraged; collaboration across teams is not

## Getting Help

- **Office Hours:** See course syllabus
- **Lab Sessions:** Use lab time to work with your team and get real-time help
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

## Frequently Asked Questions

**Q: Can we choose our own teammates?**  
A: Yes! You may select your own team of 2-3 students.

**Q: How will individual contributions be evaluated?**  
A: Through a combination of code review (1-on-1 with instructor), peer evaluations from teammates, your self-reflection, and evidence in the Git repository. Most teams where everyone contributes fairly will receive the same individual grade.

**Q: What happens if someone on my team doesn't contribute?**  
A: Document this in your peer evaluation. The instructor will review all evaluations and may adjust individual grades. It's important to communicate with your teammate first and notify the instructor early if there are serious issues.

**Q: Will the peer evaluations be anonymous?**  
A: Peer evaluations are confidential (only the instructor sees them), but not anonymous to the instructor. Your feedback helps ensure fair grading.

**Q: What should I expect in the code review?**  
A: A 10-15 minute one-on-one conversation where you explain your code, demonstrate understanding of the electronics and mechanics, and answer questions about your design decisions. This is not meant to be stressful—it's a chance to show what you learned!

**Q: Can we use a different microcontroller?**  
A: Arduino Uno or Raspberry Pi Pico 2 only for this project. Other boards may not be compatible with our hardware.

**Q: What if a component breaks?**  
A: Notify the instructor immediately. We have spare parts, but document the failure in your build log.

**Q: Can we use materials from home?**  
A: Yes! You may supplement the kit with your own materials (cardboard, LEGO, 3D prints, etc.), but the core electronics must be from the provided kit.

**Q: How complex should the autonomous behavior be?**  
A: Minimum: timed movement (e.g., drive in a square). Better: sensor-based (e.g., stop before hitting a wall). Best: adaptive behavior (e.g., wall following, line following).

**Q: Can we work alone?**  
A: No. This is a team project. Solo work is only allowed with instructor permission in exceptional circumstances.

**Q: What defines a successful teammate?**  
A: Based on your feedback: Someone who communicates actively, completes work on time, puts in genuine effort, is open to discussion and compromise, and does their fair share without pushing work to the last minute.

---

**Good luck, and have fun building!**
