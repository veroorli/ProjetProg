BIN := programme


CXXFLAGS += -pedantic -Wall # pour les purs et durs
CXXFLAGS += -g # pour debugger
CXXFLAGS += -pg # pour profiler
LDFLAGS += -pg # pour profiler
# CXXFLAGS += -O2 


#SOURCES := src/main.cc src/test.cc
SOURCES := $(wildcard sources/*.cc) 
#si je veux rajouter des autres wildcard utiliser + 
INCLUDE := include

all: $(BIN)

# appelles particuliers
.PHONY: clear

$(BIN): clear
	g++ -o $@ $(SOURCES) -I $(INCLUDE)

clear:
	rm -rfv $(BIN)
