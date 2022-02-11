#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
PROJ_NAME = Calculator
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

Build: project_main.c calculator.c
	gcc project_main.c calculator.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))

Run: Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Clean: 
	rm -rf *.o *.i *.s *.exe