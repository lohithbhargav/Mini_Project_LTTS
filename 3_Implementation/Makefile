files= src/patterns.c

#variables declaration
inc_h=inc
inc_uh= unity
files_u= unity/unity.c
test_u= test/test_patterns.c
#Taking extension according to the OS
ifdef OS
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
   EXEC = out -lm
   endif
endif 
#Taking extension according to the OS
ifdef OS
   EXEC_T = final_test.exe
else
   ifeq ($(shell uname), Linux)
   EXEC_T = ./final_test.out
   endif
endif 
#command to build the application
create: $(files) project.c
	gcc -I $(inc_h) $(files) project.c -o final.$(EXEC)
#command to run the application
run:final.$(EXEC)
	final.$(EXEC)
#command to analyaze the code dynamically
valgrind:
	valgrind ./final.$(EXEC)
#command to build the test application with unity
create_test: $(files) $(test_u) 
	gcc -I $(inc_h) -I $(inc_uh) $(files) $(files_u) $(test_u)  -o final_test.$(EXEC)
#command to run the test application
run_test:final_test.$(EXEC)
	$(EXEC_T)
#command to check the code coverage
coverageCheck:
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 -I $(inc_h) -I $(inc_uh) $(files) $(files_u) $(test_u) -o TEST_OUTPUT.out
	./TEST_OUTPUT.out
#command to clean the files
clean:
	del *.$(EXEC)

















# Name of the project
#PROJECT_NAME = Patterns

# Output directory
#BUILD = build

# All source code files
#SRC = project.c\
src/patterns.c

# All test source files
#TEST_SRC = src/patterns.c\
test/test_patterns.c\
unity/unity.c\

#TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).exe

# All include folders with header files
#INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
#INCLUDE_LIBS = -lcunit

# Project Output name
#PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
#DOCUMENTATION_OUTPUT = documentation/html

# Default target built
#$(PROJECT_NAME):all

# Run the target even if the matching name exists
#.PHONY: run clean test doc all

#all: $(SRC) $(BUILD)
#	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).exe

# Call `make run` to run the application
#run:$(PROJECT_NAME)
#	./$(PROJECT_OUTPUT).exe

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
#test:$(BUILD)
#	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
#	./$(TEST_OUTPUT)

# gcc unity/unity.c src/patterns.c test/test_patterns.c project.c -Iunity -Iinc -Itest -o Testing.exe 
# gcc -I unity unity/unity.c src/patterns.c test/test_patterns.c inc/pattern.h project.c -o Testing.exe

# Remove all the built files, invoke by `make clean`
#clean:
#	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
# $(BUILD):
#	mkdir build

# comments

#Target : dependency
#<TAB>Command

#PROJECT_NAME = output.exe
#SRC = test/test_patterns.c\
#src/patterns.c

#INC_h=inc/pattern.h

#create: $(SRC)
#	gcc -I INC_h $(SRC) -o output.exe

#run: $(PROJECT_NAME)
#	$(PROJECT_NAME)

#clean:
#	del /q *.exe