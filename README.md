# Simple-Robotics-Arm

# 🦾 Low-Cost Robotic Hand — OAU Faculty of Technology

---

## Table of Contents
---

## Summary

This project is undertaken by a group of ten Part 4 students in the Faculty of Technology (Departments of Computer Science and Engineering) at Obafemi Awolowo University (OAU), Ile-Ife. It focuses on the development of a low-cost robotic hand using servo motors, designed to replicate fundamental human hand movements — most notably grasping — through the precise control of five servo motors driven by an Arduino microcontroller.

In Nigeria's context, where access to advanced prosthetics and robotic technologies is severely limited by high import costs, foreign exchange challenges, and inadequate local manufacturing capacity, this student-led initiative promotes indigenous innovation and self-reliance. With millions of Nigerians affected by limb disabilities — including upper-limb amputations resulting from trauma, diabetes complications, and accidents — and with federal universities like OAU facing significant resource constraints in practical STEM training, this project delivers an affordable, open-source solution.

Priced at an estimated **₦73,000–₦115,000** using locally sourced components (e.g., from Computer Village in Lagos or Osogbo markets), the project aligns with national development goals under the **Sustainable Development Goals (SDGs)** — specifically Goal 3 (Good Health and Well-being) and Goal 9 (Industry, Innovation and Infrastructure).

### Key Highlights

- 5 Degrees of Freedom (DOF) — one servo motor per finger
- Arduino Uno/Nano microcontroller-driven actuation
- Tendon-driven biomimetic design for natural grasping motion
- Estimated cost: ₦73,000 – ₦115,000 (locally sourced components)
- Open-source: full GitHub documentation and assembly guides
- Target: ≥ 90% success rate grasping everyday Nigerian objects
- Minimum durability target: 500 operational cycles

---

## Problem Statement

Nigeria faces persistent and interconnected challenges spanning assistive technology, robotics education, and healthcare accessibility. This project is a direct response to the following critical gaps:

### Healthcare Gaps & Assistive Technology

Limb disabilities — including upper-limb amputations — are prevalent in Nigeria due to road traffic accidents, industrial incidents, diabetes complications, and conflict-related injuries. Despite this, commercial prosthetics remain deeply unaffordable, with costs ranging from **₦500,000 to ₦5,000,000** — far exceeding the national minimum wage of ₦70,000 per month. This pricing barrier leaves the majority of Nigerians with limb disabilities without access to meaningful assistive devices.

### Educational Constraints in Federal Universities

Engineering students at institutions like OAU often lack adequate hands-on exposure to mechatronics and robotics due to underfunded laboratories and an over-reliance on costly imported equipment. This deficit directly undermines Nigeria's progress toward technological self-sufficiency as envisioned in the National Science, Technology, and Innovation Policy (NSTIP).

### Economic & Supply Chain Challenges

Foreign exchange volatility, persistent import delays, and the scarcity of electronic components hinder local prototyping and innovation — particularly outside major urban centres. These structural barriers contribute to high youth unemployment (exceeding 33%) and limit the velocity of engineering innovation in non-Lagos regions.

### National Innovation Ecosystem

While technology hubs and innovation labs are growing — including OAU's own A2IR2 lab — the majority of impactful, replicable engineering projects remain concentrated in Lagos. There is an urgent need for scalable, low-cost prototypes developed within federal universities that can be reproduced and adapted across the country.

---

## Project Objectives

The following SMART objectives reflect the collaborative work of the OAU student team, emphasising practical engineering skills and national relevance:

1. **Biomimetic Design** — Design a 5-fingered robotic hand with tendon-driven actuation for natural grasping, completed within the first 4 weeks through team collaboration across mechanical design and electronics sub-groups.

2. **Servo Integration** — Integrate five servo motors with an Arduino controller for accurate, individual finger control — achieving at least 90% success in grasping everyday Nigerian objects, validated in OAU's engineering labs by Week 8.

3. **User Interface** — Develop an intuitive user interface (glove or push-button controls) for tasks relevant to Nigerian contexts — such as assistive gripping or vocational tool use — demonstrated across at least three distinct object types by Week 10.

4. **Open-Source Documentation** — Create comprehensive documentation (GitHub repository, English assembly guides), including a full group report, on-campus video demonstration, and formal faculty presentation by Week 16 — enabling replication at other federal universities.

5. **Cost & Sustainability** — Complete the project under ₦120,000 using locally sourced materials, ensuring a minimum durability of 500 operational cycles and incorporating sustainable practices (e.g., recycled plastics) in support of Nigeria's environmental and innovation priorities.

---

## Methodology

The 10-member OAU student team adopts an agile, collaborative engineering process with clearly defined roles across mechanics, electronics/coding, and documentation sub-groups. Weekly stand-up meetings are held in departmental labs or makerspaces, and progress is tracked via shared platforms (WhatsApp and Google Drive). The project is structured across four phases:

---

### Phase 1 — Foundation & Rapid Prototyping (Weeks 1–4)

- Finalise CAD models using Fusion 360
- Procure components (nylon lines, servo motors, Arduino boards) from local markets in Ile-Ife or Osogbo
- Fabricate a "Version 0.1" mechanical frame via 3D printing at the OAU lab or through manual wood/plastic construction
- Write basic servo sweep code in the Arduino IDE in parallel with fabrication
- Calibrate tendon tensioning using nylon lines

> The key principle of this phase is **iteration speed over perfection** — get a working frame ready quickly, then improve.

---

### Phase 2 — Integration & Power Management (Weeks 5–8)

- Mount servo motors onto the fabricated frame and complete tendon routing
- Integrate the Arduino microcontroller with all five servos
- Build a battery or UPS-based power backup system to account for NEPA/PHCN grid instability during testing
- Validate initial finger movements on lightweight local test objects (e.g., small plastic cups)

---

### Phase 3 — Testing, Calibration & Local Adaptation (Weeks 9–12)

- Fine-tune grip parameters for culturally relevant test objects (e.g., calabash bowls, bolts, lightweight tools)
- Assess wood components for humidity-related dimensional changes
- Run a pre-demonstration session with faculty oversight
- Use peer feedback to identify and fix mechanical weaknesses in nylon tendons
- Optimise control code logic through rapid iteration cycles

---

### Phase 4 — Finalisation & Presentation (Weeks 13–16)

- Film an on-campus video demonstration
- Finalise the full technical group report
- Present the completed prototype to the A2IR2 lab and faculty
- Publish the GitHub repository — including assembly guides, Arduino source code, CAD files, and bill of materials — for public access and replication

---

## Resources Required

### Hardware Components

- Arduino Uno or Nano microcontroller board
- 5 × MG996R servo motors (or locally equivalent high-torque servos)
- Fishing lines / tendons for finger actuation
- Fabrication materials: 3D printing filament (PLA/ABS), wood, or plastic sheet
- Push-button controls or flex-sensor glove for user input
- External 5V power supply + battery/UPS backup
- Breadboard, jumper wires, resistors, and PCB components

### Software & Tools

- **Arduino IDE** — servo motor programming and control logic
- **Autodesk Fusion 360** — CAD design and mechanical modelling
- **Git / GitHub** — version control and open-source documentation
- **Google Drive & WhatsApp** — team coordination and file sharing


### Human Resources

- 10-member student team (Computer Science & Engineering, Part 4)
- Sub-group leads: Mechanical Design, Electronics & Coding, Documentation

---


> Costs are scalable and may be reduced significantly by leveraging OAU lab facilities for fabrication and testing.

---

![Robot Arm 1](https://github.com/user-attachments/assets/18343ad8-65ff-4c54-80d0-763888f1c500)



## Conclusion

The development of this low-cost robotic hand represents more than the sum of its mechanical parts. It is a proof of concept that high-impact engineering does not demand exorbitant budgets — only strategic design, collaborative effort, and a deep understanding of local context.

By leveraging locally accessible materials and cost-effective microcontrollers, this OAU student group aims to bridge the persistent gap between theoretical robotics education and practical, real-world application. The successful delivery of a 5-DOF robotic prototype will establish a scalable, replicable blueprint for affordable prosthetics and educational tools — directly advancing Nigeria's commitments to SDG Goal 3 and SDG Goal 9.

Beyond its immediate technical objectives, this initiative is designed to catalyse a broader culture of self-reliance and technological entrepreneurship within OAU's Faculty of Technology and across Nigeria's federal university system. The open-source documentation produced will lower the barrier for future student cohorts to build upon, adapt, and improve the design — ensuring this project's impact outlasts its initial semester timeline.

**Great Ife** has long been at the forefront of intellectual and technological development in West Africa. This project reaffirms that legacy.

---

*OAU Faculty of Technology | Part 4 Group Project | 2025–2026*
*Obafemi Awolowo University, Ile-Ife, Osun State, Nigeria*
