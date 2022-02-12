ifeq ($(t), 0)
TOOL=
else
TOOL=arm-none-linux-gnueabi-
endif
 
CC = $(TOOL)gcc
CFLAGS = -g -O -Wall
 
OBJ := add.o sub.o main.o
TOPDIR := $(PWD)
OBJDIR := $(TOPDIR)/obj
BINDIR := $(TOPDIR)/bin
BIN := main
 
SUBDIR :=  add sub main obj
OBJHEAD := $(TOPDIR)/add/add.h $(TOPDIR)/sub/sub.h
OBJLINK := --std=c99
 
export CC TOPDIR OBJDIR BINDIR BIN OBJLINK OBJ
 
all:CHECKDIR $(SUBDIR)
	@echo "*****************************************************************************"
	@echo "*                                                                           *"
	@echo "*                 Congratulations! Compile completed!!!                     *"
	@echo "*       Executable file name is : $(BIN)    "
	@echo "*  Executable file in directory : $(BINDIR)"
	@echo "*                                                                           *"
	@echo "*****************************************************************************"
CHECKDIR:
	@echo "*****************************************************************************"
	@echo "*                                                                           *"
	@echo "* Create subfolders:                                                        *"
	mkdir -p $(SUBDIR) 
	mkdir -p $(BINDIR)
	@echo "*                                                                           *"
	@echo "*               Successful Creation of subfolders!                          *"
	@echo "*                                                                           *"
	@echo "*****************************************************************************"
$(SUBDIR):RUN
	make -C $@
	@echo "*****************************************************************************"
RUN:
	@echo "*****************************************************************************"
	@echo "*                                                                           *"
	@echo "* All subdirectories are:                                                   *"
	@echo "*    "$(SUBDIR)
	@echo "* All links are:                                                            *"
	@echo "*    "$(OBJLINK)
	@echo "*                                                                           *"
	@echo "*****************************************************************************"
	@echo "*                                                                           *"
	@echo "*                            begin Compile                                  *"
	@echo "*                                                                           *"
	@echo "*****************************************************************************"
clean:
	rm -rf $(OBJDIR)/*.o $(BINDIR) 
help:
	@echo "*********************************** help ************************************"
	@echo "*                                                                           *"
	@echo "*                            Option Description                             *"
	@echo "*                                                                           *"
	@echo "*********************************** help ************************************"
