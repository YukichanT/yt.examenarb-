# yt.examenarb-

**Energy harvester simulator**
This project is a **C-based simulator** that models energy harvesting from human footsteps.  
It estimates how much energy can be generated from a specified number of pedestrians walking over a small displacement floor tile with known physical parameters such as mass, floor displacement, and energy conversion efficiency.

**Goal of this project**
To simulate and visualize the energy output of a distributed footstep-based energy harvesting system, where small kinetic inputs (from walking) are mechanically or electrically converted into usable energy. This model is useful for evaluating the feasibility of such systems in urban infrastructure like train stations or walkways.

**Formula**
Here is the formula which I used in the following code.

E = N × f × η × m × g × h

**Input parameter**
hen running the program, you will be prompted to enter:

- Number of pedestrians per hour
- Number of steps per person
- Average weight (kg)
- Floor displacement (m)
- Conversion efficiency (e.g. 0.001 = 0.1%)

**Output**
The program prints:

- Total power generated in **Joules**
- Equivalent energy in **Watt-hours (Wh)**

**Example output**
==== Energy Harvester Simulation ====
Number of Pedestrians per hour N: 23000
Number of steps per person f: 2
Average weight m(kg): 65
Floor displacement h(m): 0.005
Efficiency η: 0.001

==== Result ====
Total Power generation: 146.6595 J
Equivalent to: 0.0407 Wh

**upcoming projects**
- [ ] Calculate `N` based on area, pedestrian density, and time
- [ ] Support for multiple time intervals (e.g. rush hour simulation)
- [ ] Export results to CSV
- [ ] Graphical visualization (Python/Pyplot or web-based UI)
- [ ] Verilog/VHDL logic modeling of input signal aggregation and control

**Autors vision**

This simulation is part of a broader design concept where distributed footstep signals are mechanically or digitally **aggregated and converted** into usable energy via electromagnetic or piezoelectric systems. The long-term goal is to create **a hybrid simulation and control platform (C + HDL)** for realistic energy harvester deployment in urban spaces.

version 01.00 updated 2025/11/09
