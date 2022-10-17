
.subckt PWL4 in out
X1 Vcc2 1 Vcc1 Vss1 2 TL081 
X2 0 3 Vcc1 Vss1 4 TL081
X3 Vss2 5 Vcc1 Vss1 6 TL081 
*******Pen Der
R1 in 1 1k
R2 1 2 1000K 
R3 2 out 150k
 
R4 in 3 1k
R5 3 4 1000K
R6 4 out 150k

R7 in 5 1k
R8 5 6 1000K 
R9 6 out 150k

Vcc1 Vcc1 0  15
Vss1 Vss1 0 -15

Vcc2 Vcc2 0 1.8
Vss2 Vss2 0 -1.8
.ends