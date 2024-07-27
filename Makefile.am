AUTOMAKE_OPTIONS = foreign
SUBDIRS = src include example docs

# ACLOCAL_AMFLAGS = -I m4

doxygen:
	cd docs && $(MAKE) $(AM_MAKEFLAGS) $@

.PHONY: doxygen
