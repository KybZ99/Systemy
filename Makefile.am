bin_PROGRAMS = Pola
Pola_SOURCES = main.cpp prostokat.cpp prostopadloscian.cpp 
Pola=DEPENDENCES = libprostokat.la lib.prostopadloscian.la
lib_LTLLIBRARES = libprostokat.la libprostopadloscian.la
libprostokat_la_SOURCES = prostokat.h
libprostopadloscian_la_SOURCE = prostopadloscian.h
Pola_LDADD = "-dlopen" libprostokat.la libprostopadloscian.la
libprostokat_la_LDFLAGS = -version-info 0:2
