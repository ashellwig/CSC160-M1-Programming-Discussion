# --- Variables ---
# Directories
SRC = src
TGT = obj
INCLUDES = -Iinclude
DBGOUT = target/debug
UDOCDIR = DOC/assigned
# Compiler
CXX = clang++
CXXFLAGSDBG = -Weverything -std=c++17 -g -glldb $(INCLUDES)
SOURCES = $(wildcard $(SRC)/*.cc)
DBGOBJS = $(addprefix $(TGT)/debug/, $(notdir $(SOURCES:.cc=.o)))


# --- Rules ---

# All
## Build
all: debug run-debug
## Removes object files
clean: clean-dbg

# Debug
## Run
run-debug: debug
	$(DBGOUT)/m1d2-Debug.bin
## Build
debug: $(TGT)/debug/m1d2-DBG
$(TGT)/debug/%.o: $(SRC)/%.cc
	$(CXX) $(CXXFLAGSDBG) -c $< -o $@
$(TGT)/debug/m1d2-DBG: $(DBGOBJS)
	$(CXX) $(LDFLAGS) $(DBGOBJS) -o $(DBGOUT)/m1d2-Debug.bin
## Removes Object Files
clean-dbg:
	rm -rf $(TGT)/debug/*.o $(DBGOUT)/*.bin
