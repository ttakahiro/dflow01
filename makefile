#
CFLAGS      = -c -g
#
LOAD        = ./dftest01

#
SRCS        = \
./dftest01.c

#
OBJS        = \
./dftest01.o

#
all:    $(LOAD)
#

depend: @makedepend -- $(CFLAGS) -- $(SRCS)
#

$(LOAD):    $(OBJS)
		cc -o $(LOAD) $(OBJS)


