CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++11

OUT_DIR := EXE
SRC_DIRS := stack array_hashing

all: help

help:
	@echo "Usage: make run file=<filename.cpp>"

run: $(OUT_DIR)
	@file_path=$$(find $(SRC_DIRS) -name $(file)); \
	if [ -z "$$file_path" ]; then \
		echo "File not found!"; \
		exit 1; \
	fi; \
	$(CXX) $(CXXFLAGS) $$file_path -o $(OUT_DIR)/$(notdir $(file:.cpp=.exe)); \
	echo "Executable created at $(OUT_DIR)/$(notdir $(file:.cpp=.exe))"; \
	$(OUT_DIR)/$(notdir $(file:.cpp=.exe))

$(OUT_DIR):
	mkdir -p $(OUT_DIR)

clean:
	rm -rf $(OUT_DIR)/*.exe
	@echo "Cleaned up executables in $(OUT_DIR)"
