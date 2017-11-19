counter = R7
Laufvariable R1 = 1
Abbruchbedingung R2 = 65536
Rückgabewert R3
Konstante 2 = R4
Konstante 0 = R5
Konstante 1 = R6

1. Schritt: Laufvariable mit Abbruchbedingung vergleichen.
2. Schritt: Übergabeparameter in R0 platzieren.Laufvariable.
3.Schritt Rückgabewert auf null prüfen.

IN R1,1
IN R2,0x7FFF
IN R4,2
COMP R1,R2
JIF Greater -Ende- //müsste JIT sein?
MOV R1,R0
CALL checkIfPrime
COMP R3,R5
JIT Equal -> ADD R1,R4
INC R7
ADD R1,R4->R1
JMP 15 CMP
ADD R1,R4->R1
JMP -> COMP R1,R2




R8 = Laufvariable
R0 = Übergabevariable


IN R8,2
COMP R8,R0
JIT E --> return 1;
//Dividiere Übergabeparameter durch Laufvariable
MOD R0,R8->R9
COMP R9,R5
JIF E --> Laufvariable inkrementieren, neuer Durchlauf
MOV R5,R0
JMP --> ENDE
INC R8
JMP -> nächster Durchlauf

MOV R6,R3 -- return 1
RTS
