# Marlin_Megatronics3_Creatr
24/12/2015 - Lisbon, Portugal
This is an attempt at configuring a Megatronics v3 to replace the native control board on a Leapfrog Creatr.

I purchased my Leapfrog Creatr with two extruders around April of 2012. The machine was always extremely faulty due to poor design
and shoddy manufacturing. I tried returning the machine to the local distributer but it claimed I had admitted to wrong use of
the machine and refused to take it back under terms of warranty.

I had to constantly swap out mechanical components and modify the machine so that it was usable on a very basic level,
far from what was initially promised by its overtly optimistic marketing.

The first electronics board short-circuited because of a mechanical modification to compensate for defective mechanical elements
and I was given a replacement board by the manufacturer, which turned out to be faulty and was only diagnosed after warranty
ran out.

Not wanting to give Leapfrog more money I finally decided to modify the machine's electronics, as I had already modified 
so much of the mechanical hardware to get it to work as advertised, and convert it for use with a completely open-source
solution which would also allow me to run the machine without the need for it to be connected to a computer.

It has been a very slow process as I have been occupied with my Master's in Mechanical Engineering, and often times a lack of 
patience for this infernal contraption, and due to the fact that I'm specializing in Computational Fluid Dynamics. This means that
3D printing will remain a personal hobby for the forseeable future.

This uploaded firmware is the first attempt at getting the board setup and is untested on the machine. It has been uploaded to the
board and it generates the error message expected when it doesn't detect any valid signal from the thermistors, forcing it to shut
dow

Of special note is the fact that the stepper-motors Y and Z axis have been switched in the pins file since the Creatr uses two
stepper for its Y-axis and I modified the hardware connectors which were initially set up in parallel in one connector and split
them into two separate ones, thus prompting the axis switch on the Megatronics to make use of the dual connectors for the Z axis.
