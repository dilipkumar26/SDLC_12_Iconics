


##  High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check the inputs given by the user are valid or not           | Correct Input provided |Corresponding operation executed   |        |Requirement based |
|  H_02       |Check whether the inputs provided are invalid     | Invalid choice   |" Invalid " to be printed   |      |Scenario based  |
|  H_03       |Suppose a company asks for 2 kilo ohms resistors              | R R R G    |2200 OHMS    |     |Boundary based    |

## Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Suppose we want to find the exact resistance through a device |V = 5v, I = 1mA|5 KILO OHMS|  |Requirement based |
|  L_02       |Supppose a company asks to design two 20 kilo ohms resistors in series|R1 = 20KILO OHMS, R2 = 20 KILO OHMS|40 KILO OHMS||Scenario based    |
|  L_03       |Suppose a situation arises wherein we need 1.1 kilo ohm resistor. Then we connect two 2.2 kilo ohms resistors in parallel|R1 = 2.2 KILO OHMS, R2 = 2.2 KILO OHMS|1.2KILO OHMS||Boundary based    |
|  L_04       |Testing whether the DecToOct conversion function is outputting correct value|18 (in dec)|22(in oct)| |Requirement based    |
|  L_05       |Testing whether the DecToOct conversion function is outputting correct value for boundary value (extreme cases)| 289175461 (in dec)|2117073645(in oct)| |Boundary based    |
|  L_06       |Testing whether the OctToDec conversion function is outputting correct value|22 (in oct)|18(in dec)| |Requirement based    |
|  L_07       |Testing whether the OctToDec conversion function is outputting correct value for boundary value (extreme cases)| 2117073645  (in oct)| 289175461(in dec)| |Boundary based    |
|  L_08       |Testing whether the Frequency function is outputting correct value|L = 200(in mH), C = 10(in pF)|112.5 KHz| |Requirement based    |
|  L_09       |Testing whether the Frequency conversion function is outputting correct value for boundary value (extreme cases)|L = 200000(in mH), C = 0.01(in F) |0.1125| |Boundary based    |
|  L_10 |Finding the Gray code and Vice-Versa | 0011| 0010 |                |Requirement based|
|  L_11|Suppose we must use Binary code for a project | 0010| 0011|                |Scenario based|
|  L_12 |Suppose a company asks for both Binary and Gray at a time| 01101 01001| 01001 01101 |                |Boundary based|
|  L_13 | Finding the excess-3 code for given BCD code | 0001 | 0100|                |Requirement Based|
|  L_14 | Finding the BCD code from the given excess-3 code | 0111 | 0100|                |Requirement Based|
|  L_15 | In case of excess-3 to BCD conversion the number should be greater than 2| 0000 | XXXX|                |Boundary Based|
|  L_16 | Finding BCD code for the given Decimal number | 5 | 0101 |                |Requirement Based|
|  L_17 | Finding Decimal number from the given BCD code | 1100 | 12 |                |Requirement Based| 
|  L_18 | Finding the excess-3 number from the given binary number | 1110| 01000111|                |Requirement Based|
|  L_19 | Finding the binary number from the given excess-3 number | 01011001 | 11010|                |Requirement Based|
















