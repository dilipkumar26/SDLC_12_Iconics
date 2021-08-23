
#all : 
#	gcc -Iinc main.c kvl.c decimal_octal_conversion.c res_fq_calculation.c average_calculation.c rms_calculation.c binaryandgray.c operations.c resistors_main.c DC_Caliculation.c dec_hex.c decimal_binary_conversion.c EnergyandTimeconstant.c -o Output.exe

#run: 
#	Output.exe

PROJECT_NAME = virtual_electronics_lab

# Output directory
BUILD = build

# All include folders with header files
#---------------------unity file need to added 
INC	= -Iinc

# All source code files
SRC = main.c\
src/kvl.c\
src/decimal_octal_conversion.c\
src/res_fq_calculation.c\
src/average_calculation.c\
src/rms_calculation.c\
src/binaryandgray.c\
src/operations.c\
src/resistors_main.c\
src/DC_Caliculation.c\
src/dec_hex.c\
src/decimal_binary_conversion.c\
src/EnergyandTimeconstant.c

# All test source files
TEST_SRC = src/calculator_operations.c\
test/test_calculator_operations.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run test doc clean all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT) -lm

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)


# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)


#Coverage
coverage:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
