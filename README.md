\# MENG2147 Walking Robot

https://github.com/user-attachments/assets/caa362a3-735c-47f6-9e61-454edf47af03


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


<img width="450" height="350" alt="Four_Legs" src="https://github.com/user-attachments/assets/05916689-5e7a-4e05-9aea-61dd5f72aa3c" />



Tasked with building a robot which used the Theo Jansen leg linkage we designed and created the legs and I created a crankshaft to be used which increased the strength of the mechanism



\## Motion Analysis




<img width="450" height="300" alt="Two_legs_withTrace" src="https://github.com/user-attachments/assets/b349d10f-9523-42af-9372-29eddfff54fa" />



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

