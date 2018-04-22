BIN := programme


CXXFLAGS += -pedantic
CXXFLAGS += -g # pour debugger
CXXFLAGS += -pg # pour profiler
LDFLAGS += -pg # pour profiler
# CXXFLAGS += -O2 


#SOURCES := src/main.cc src/test.cc
FICHIERCC := $(wildcard fichierCC/*.cc) 
#si je veux rajouter des autres wildcard utiliser + 
FICHIERH := fichierH

all: $(BIN)

# appelles particuliers
.PHONY: clear

$(BIN): clear
	g++ $(CXXFLAGS) -o $@ $(FICHIERCC) -I $(FICHIERH)

clear:
	rm -rfv $(BIN)
