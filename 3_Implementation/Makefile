# Name of the project
PROJECT_NAME = Patterns

# Output directory
BUILD = build

# All source code files
SRC = project.c\
src/patterns.c

# All test source files
TEST_SRC = src/patterns.c\
test/test_patterns.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).exe

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).exe

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).exe

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# gcc unity/unity.c src/patterns.c test/test_patterns.c project.c -Iunity -Iinc -Itest -o Testing.exe 
# gcc -I unity unity/unity.c src/patterns.c test/test_patterns.c inc/pattern.h project.c -o Testing.exe

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build

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