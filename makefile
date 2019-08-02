#
CFLAGS      = -c -g
#
LOAD        = ./dftest01

#
SRCS        = \
./dftest01.c  \
./ftest_sub.c

#
OBJS        = \
./dftest01.o  \
./ftest_sub.o

#
all:    $(LOAD)
#

depend: @makedepend -- $(CFLAGS) -- $(SRCS)
#

$(LOAD):    $(OBJS)
		cc -o $(LOAD) $(OBJS)


