#----------------------------------------------------------------------------
#       Make Workspace
#
# 
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /c/Users/Joseph/Documents/MPC-master/mwc.pl -type make
#
#----------------------------------------------------------------------------


all: algebraic_v2

depend: algebraic_v2-depend

clean generated realclean check-syntax $(CUSTOM_TARGETS):
	@$(MAKE) -f Makefile.algebraic_v2 $(@)

.PHONY: algebraic_v2
algebraic_v2:
	@$(MAKE) -f Makefile.algebraic_v2 all

.PHONY: algebraic_v2-depend
algebraic_v2-depend:
	@$(MAKE) -f Makefile.algebraic_v2 depend

project_name_list:
	@echo algebraic_v2
