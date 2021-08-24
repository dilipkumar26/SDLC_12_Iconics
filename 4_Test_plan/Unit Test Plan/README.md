


##  High level test plan

| **Test ID** | **Description**                                              |**Type Of Test**  | **Status**|   
|-------------|--------------------------------------------------------------|------------|----------|
|  H_01       |Check the required test plans inputs and verifying the outputs          |Requirement based |Implemented|
|  H_02       |Check the test plans inputs for particular cases or needs, assuming it is given by the client |Scenario based  | Future implemention|
|  H_03       |Checking the output for the boundary values and boundary conditions|Boundary based    |Implemented|

## Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  | **Status**|
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|------------|
|  L_01       |Suppose we want to find the exact resistance through a device |V = 5v, I = 1mA|5 KILO OHMS|5 KILO OHMS  |Requirement based | Passed|
|  L_02       |Supppose a company asks to design two 20 kilo ohms resistors in series|R1 = 20KILO OHMS, R2 = 20 KILO OHMS|40 KILO OHMS|40 KILO ohms|Scenario based|Passed|
|  L_03       | Boundary when set between 1ohms and 100 MEGA ohms. Suppose there are two 300 MEGA ohms resistors in parallel |R1 = 300 MEGA OHMS, R2 = 300 MEGA OHMS|150 MEGA OHMS|150 MEGA OHMS|Boundary based|Failed|
|  L_04       |Testing whether the DecToOct conversion function is outputting correct value|18 (in dec)|22(in oct)|  22 in octal|Requirement based|Passed|
|  L_05       |Testing whether the DecToOct conversion function is outputting correct value for boundary value (extreme cases). The range is between 1 to 3000000000| 289175461 (in dec)|2117073645(in oct)|2117073645 in octal |Boundary based    |Failed|
|  L_06       |Testing whether the OctToDec conversion function is outputting correct value|22 (in oct)|18(in dec)| 18 in decimal|Requirement based    |Passed|
|  L_07       |Testing whether the OctToDec conversion function is outputting correct value for boundary value (extreme cases). The range is from 1 to 30000000000| 2117073645  (in oct)| 289175461(in dec)| 289175461 in decimal|Boundary based    | Failed|
|  L_08       |Testing whether the Frequency function is outputting correct value|L = 200(in mH), C = 10(in pF)|112.5 KHz|112.5KHz |Requirement based    |Passed|
|  L_09       |Testing whether the Frequency conversion function is outputting correct value for boundary value (extreme cases). The range is between 1Hz to 100MHz|L = 200000(in mH), C = 0.01(in F) |0.1125| 0.1125Hz|Boundary based    | Passed|
| L_10 | Finding the 8 bit Gray from 8 bit binary code | 10101010 | 11111111 | 11111111 | Requirement based | Passed |
| L_11 | Suppose we must require 8 bit Gray code for a project | 10110010 | 11101011 | 11101011 | Scenario based | Passed |
| L_12 | Suppose someone enters a value larger than the permitted value | 100000000 | "**Please Enter a Valid 8 bit Binary Number**" |  "**Please Enter a Valid 8 bit Binary Number**" | Boundary based | Passed |
| L_13 | Finding the 4 bit Gray from 8 bit binary code | 10101010 | 11111111 | 1111 | Requirement based | Passed |
| L_14 | Suppose we must require 4 bit Gray code for a project | 10110010 | 11101011 | 1110 | Scenario based | Passed |
| L_15 | Suppose someone enters a value larger than the permitted value | 100000000 | "**Please Enter a Valid 8 bit Binary Number**" |  "**Please Enter a Valid 8 bit Binary Number**" | Boundary based | Passed |
| L_16 | Finding the 8 bit Binary from 8 bit Gray code | 10101010 | 11001100 | 11001100 | Requirement based | Passed |
| L_17 | Suppose we must require 8 bit Binary code for a project | 10110010 | 11011100 | 11011100 | Scenario based | Passed |
| L_18 | Suppose someone enters a value larger than the permitted value | 100000000 | "**Please Enter a Valid 8 bit Binary Number**" |  "**Please Enter a Valid 8 bit Binary Number**" | Boundary based | Passed |
| L_19 | Finding the 4 bit Binary from 8 bit Gray code | 10101010 | 11001100 | 11001100 | Requirement based | Passed |
| L_20 | Suppose we must require 4 bit Binary code for a project | 10110010 | 11011100 | 11011100 | Scenario based | Passed |
| L_21 | Suppose someone enters a value larger than the permitted value | 100000000 | "**Please Enter a Valid 8 bit Binary Number**" |  "**Please Enter a Valid 8 bit Binary Number**" | Boundary based | Passed |
|  L_22 | Finding the excess-3 code for given BCD code | 0001 | 0100| 0100               |Requirement Based|Passed|
|  L_23 | Finding the BCD code from the given excess-3 code | 0111 | 0100|    0100            |Requirement Based|Passed|
|  L_24 | In case of excess-3 to BCD conversion the number should be greater than 2| 0000 | XXXX|   No input             |Boundary Based|Failed|
|  L_25 | Finding BCD code for the given Decimal number | 5 | 0101 |     0101           |Requirement Based|Passed|
|  L_26 | Finding Decimal number from the given BCD code | 1100 | 12 |   12             |Requirement Based| Passed|
|  L_27 | Finding the excess-3 number from the given binary number | 1110| 01000111|    01000111            |Requirement Based|Passed|
|  L_28 | Finding the binary number from the given excess-3 number | 01011001 | 11010|   11010            |Requirement Based|Passed|
|  L_29 |Suppose a company asks for Binary to excess-3 and vice versa for a given number 4|0100| 0111|     0111           |scenario based|Pssed|
|  L_30 | Finding the decimal number from the given binary number | 9| 1001|    1001            |Requirement Based|Passed|
|  L_31 | Finding the binary number from the given decimal number | 0111 | 7|     7           |Requirement Based|Passed|
|  L_32 |Suppose a company asks to convert a decimal number larger than the base numbers|16| 10000|    10000            |scenario based|Passed|
| L_33 | Finding the binary number from the given Hexadecimal number | 1E | 30 |30 | Requirement Based |Passed|
| L_34 | Suppose we must use Decimal for a project from a Hexadecimal code | A9 | 169 | 169  | Scenario Based |Passed|
| L_35 | Finding Hexadecimal number from the Decimal number | 140 | 8c | 8c| Requirement Based |Passed|
| L_36 | Suppose we must use Hexadecimal code for a project instead of Decimal code | 650 | 28A |  28A | Scenario Based |Passed|
| L_37 |Finding the rms value of input voltage | V=10V | 7.07V | 7.07V | Requirement based |Passed|
| L_38 | Finding the rms value of input current | I=2A | 1.41A|  1.41A | Requirement based |Passed|
| L_39 |suppose the company asks for the rms voltage of greater than 20 volt | V=30V | 21.21V | 21.21V | Scenario based|Passed|
| L_40 | Finding the average voltage value of sinusoidal wave | V=4.5V | 2.86V |   2.86V  | Requirement based|Passed|
| L_41 | Finding the average current value of sinusoidal wave | I=10.28mA | 6.84mA  | 6.84mA  | Requirement based|Passed|
| L_42 |suppose the company asks for the avg current of greater than 20 amps | i=30.84mA | 20.52mA |  20.52mA  | Scenario based |Passed|











