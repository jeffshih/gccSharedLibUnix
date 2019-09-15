MKDIR_P=mkdir -p 
SRC_PATH=src 
INC_PATH=include 

CC=gcc
CXX=g++
LD=ld 
AR=ar 
STRIP=strip

CXXSOURCES := $(shell find src/ -name "*.cpp")
CXXOBJECTS := $(CXXSOURCES:.cpp=.o)
LDFLAG=-shared

LIB_NAME = libadd-test 
SHARE_LIB = $(LIB_NAME:=.so)

CXXFLAGS = -Wall -c -fPIC -I $(INC_PATH)

DYNAMIC_NAME:=$(LIB_NAME:=.so)


all:$(SHARE_LIB)


$(SHARE_LIB):$(CXXOBJECTS)
			$(CXX) $(LDFLAG) $(CXXOBJECTS) -o $@
			$(CXX) 
#		    $(STRIP) $(SHARE_LIB)		

.c.o:
	$(CXX) $(CXXFLAGS) $< -o $@

test:
	@ echo $(CXXSOURCES)
	@ echo $(CXXOBJECTS)
