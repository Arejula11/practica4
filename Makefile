#------------------------------------------------------------------------------
# File:   Makefile
# Author: Miguel Aréjula Aísa
# Date:   mayo 2022
# Coms:   Makefile para la práctica 4 de Programación II
#------------------------------------------------------------------------------

#---------------------------------------------------------
# Definición de macros
CC = g++
CPPFLAGS = -std=c++11      #opciones de compilación
LDFLAGS =                      #opciones de linkado
RM = rm -f                     #comando para borrar ficheros

all: costemsolape
#-----------------------------------------------------------
# Compilacion
costemsolape.o: costemsolape.cpp
	${CC} -c costemsolape.cpp -I ../practica3 ${CPPFLAGS}
maxsolape.o: ../practica3/maxsolape.cpp ../practica3/maxsolape.hpp
	${CC} -c ../practica3/maxsolape.cpp ${CPPFLAGS}

# Linkado
costemsolape: costemsolape.o maxsolape.o 
	${CC} costemsolape.o maxsolape.o -o costemsolape ${CPPFLAGS}

#-----------------------------------------------------------	
# LIMPIEZA de todo lo generado. Ojo: se borrarán sin preguntar
clean:
	${RM} maxsolape.o costemsolape.o costemsolape
