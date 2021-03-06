PROJECT_NAME = virtual_electronics_lab

# Output directory
BUILD = build

# All include folders with header files
#---------------------unity file need to added 
INC	= -Iinc
INC_U   = -IUnity
INC_TE  = -ITest

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
TEST_SRC =Test/Test.c\
Unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT) -lm

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)


# Build and run the unit tests
test:$(BUILD)
	gcc $(SRC) $(TEST_SRC) $(INC) $(INC_U) $(INC_TE) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)


#Coverage
coverage:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(SRC) $(INC) $(INC_U) $(INC_TE) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
	
valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)
	
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
