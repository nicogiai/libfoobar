# docpkg = $(PACKAGE_TARNAME)-doxy-$(PACKAGE_VERSION).tar.gz
#doc_DATA = $(docpkg)

#$(docpkg): doxygen.stamp
#	tar chof - html | gzip −9 -c >$@

#doxygen.stamp: Doxyfile
#	$(DOXYGEN) $(DOXYFLAGS) $<
#	echo Timestamp > $@

#install-data-hook:
#	cd $(DESTDIR)$(docdir) && tar xf $(docpkg)

#uninstall-data-hook:
#	cd $(DESTDIR)$(docdir) && rm -rf html

#CLEANFILES = doxywarn.txt doxygen.stamp $(docpkg)

doxygen:
	cd doxygen && $(DOXYGEN) $(DOXYFLAGS) Doxyfile

clean-local:
	rm -rf doxygen/html
	rm -rf doxygen/latex

.PHONY: doxygen