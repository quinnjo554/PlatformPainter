CXX = g++
INC_DIR = -Iinclude -Iinclude/sdl -Isrc/Headers -Isrc/Interfaces
LIB_DIR = -Llib
LIBS = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Get a list of all the source files
SRC_FILES := $(wildcard $(SRC_DIR)/Source/*.cpp)

# Convert each .cpp file to a .o file in the object directory
OBJ_FILES := $(patsubst $(SRC_DIR)/Source/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Final executable
TARGET = $(BIN_DIR)/Main

# Ensure the obj and bin directories exist
$(shell if not exist $(OBJ_DIR) mkdir $(OBJ_DIR))
$(shell if not exist $(BIN_DIR) mkdir $(BIN_DIR))

# Compile rule
$(TARGET): $(OBJ_FILES)
	$(CXX) $(INC_DIR) $(LIB_DIR) -o $@ $^ $(LIBS)

# Rule to generate object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/Source/%.cpp
	$(CXX) $(INC_DIR) -c -o $@ $<

# Clean rule
clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)
