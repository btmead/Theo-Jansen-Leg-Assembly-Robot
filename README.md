\# MENG2147 Walking Robot



A SolidWorks, MATLAB, and Arduino-based walking robot project developed for MENG2147. The project combined mechanical linkage design, motion analysis, bill-of-materials planning, and embedded motor control.



\## Project Overview



This project designed and analysed a multi-leg walking mechanism driven through a crank/linkage system. The work included CAD modelling, kinematic simulation, leg displacement analysis, motor torque estimation, and Arduino-based RC motor control.



\## My Contributions



\- Designed and refined CAD components and assemblies in SolidWorks.

\- Analysed leg displacement and contact timing using MATLAB.

\- Produced motion visualisations and performance plots.

\- Implemented Arduino RC input mixing for differential motor control.

\- Prepared BOM and manufacturing drawings.

\- Assembled robot



\## System Architecture



\- CAD: SolidWorks parts, assemblies, and drawings.

\- Analysis: MATLAB processing of exported displacement data.

\- Firmware: Arduino RC pulse input, throttle/steering mixing, and PWM-style motor output.

\- Outputs: leg gait plots, motor torque plots, walking simulation media.



\## Mechanical Design



Include image here:

!\[Four-leg mechanism](Media/Four Legs.png)



Tasked with building a robot which used the Theo Jansen leg linkage we designed and created the legs and I created a crankshaft to be used which increased the strength of the mechanism



\## Motion Analysis



Include plot:

!\[Leg trace](Media/Two Legs With Trace.png)



The MATLAB script processes leg displacement data and identifies contact timing across the legs.



\## Firmware



The Arduino firmware reads two RC channels:

\- throttle

\- steering



It maps pulse widths from \\(1000\\ \\mu s\\) to \\(2000\\ \\mu s\\), applies a deadband around \\(1500\\ \\mu s\\), and outputs mixed left/right commands.



\## Repository Contents



| Folder | Contents |

|---|---|

| Media | Images and videos of mechanism motion |

| Firmware | Arduino motor control sketch |

| Analysis | MATLAB scripts and exported simulation data |

| Drawings | Selected manufacturing drawings |

| Documentation | BOM and project notes |



\## Tools Used



SolidWorks, MATLAB, Arduino, Excel.

