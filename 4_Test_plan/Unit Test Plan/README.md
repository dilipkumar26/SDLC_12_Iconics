The following is the unit test plan for option 1 which is calculating resistance, voltage, current, series and parallel resistances calculation along with colour code determination.


##  High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Finding the colour code of resistance                         | BL BR R G    |100 OHMS     |        |Requirement based |
|  H_02       |Suppose we must use a 2.2 kilo ohm resistor for a project     | R R R G    |2200 OHMS    |      |Scenario based    |
|  H_03       |Suppose a company asks for 2 kilo ohms resistors              | R R R G    |2200 OHMS    |     |Boundary based    |

## Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Suppose we want to find the exact resistance through a device |V = 5v, I = 1mA|5 KILO OHMS|  |Requirement based |
|  L_02       |Supppose a company asks to design two 20 kilo ohms resistors in series|R1 = 20KILO OHMS, R2 = 20 KILO OHMS|40 KILO OHMS||Scenario based    |
|  L_03       |Suppose a situation arises wherein we need 1.1 kilo ohm resistor. Then we connect two 2.2 kilo ohms resistors in parallel|R1 = 2.2 KILO OHMS, R2 = 2.2 KILO OHMS|1.2KILO OHMS||Boundary based    |








The following is the unit test plan for option 3 which is conversion of Binary code to Gray code and Vice-Versa, Decimal number to Hexadecimal number and Vice-versa.


##  High level test plan

| **Test ID** | **Description**                                              | **Exp I/P**  | **Exp O/P** | **Actual Out** | **Type Of Test**   |    
|-------------|--------------------------------------------------------------|--------------|-------------|----------------|--------------------|
|  H_01       |Finding the Gray code and Vice-Versa                          | 0011         | 0010        |                |Requirement based   |
|  H_02       |Suppose we must use Binary code for a project                 | 0010         | 0011        |                |Scenario based      |
|  H_03       |Suppose a company asks for both Binary and Gray at a time     | 01101 01001  | 01001 01101 |                |Boundary based      |



