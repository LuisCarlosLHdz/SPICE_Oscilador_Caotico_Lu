
.subckt PWL2 in out
X2 0 3 Vcc1 Vss1 4 TL081
*******Pen Der
R4 in 3 1000
R5 3 4 1000000
R6 4 out 150000
***********
Vcc1 Vcc1 0  13
Vss1 Vss1 0 -13
.ends