# Modified

# Copyright 1989 by Norman Ramsey, Odyssey Research Associates
# Not to be sold, but may be used freely for any purpose
# For more information, see file COPYRIGHT in the parent directory

DIRECTORIES=c awk java distrib
# This destroys the sources, so don't make clean until you've made boot.
clean:
	rm -f */*/*.o
	@for i in $(DIRECTORIES); do \
		cd $$i; \
		echo making $$i clean...; \
		build clean ; \
		cd ..; \
	done
	rm -f *~
	@echo "All done."

# This creates the minimum sources in preparation for `make distribution'
source:
	cd c ; build source ; cd ..
	cd awk ; build source ; cd ..

# Used to bring up the system when first installing it.  Requires sources,
# either from the distribution tarfile or from `make source'
boot:
	cd c; build boot; cd ..
	cd awk; build boot; cd ..

