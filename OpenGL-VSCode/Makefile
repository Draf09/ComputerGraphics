PROG = BasicoOpenGL

FONTES = Ponto.cpp Poligono.cpp Temporizador.cpp ListaDeCoresRGB.cpp ProgramaBasicoOpenGL.cpp Linha.cpp InterseccaoEntreTodasAsLinhas.cpp

Objetos = $(FONTES:.cpp=.o)
#CPPFLAGS =  # -Wall -g  # Todas as warnings, infos de debug

UNAME = `uname`

all: $(TARGET)
	-@make $(UNAME)

Darwin: $(Objetos)
#	g++ $(Objetos) -O3 -Wno-deprecated -framework OpenGL -framework Cocoa -framework GLUT -lm -o $(PROG)
	g++ $(Objetos) -framework OpenGL -framework Cocoa -framework GLUT -lm -o $(PROG)

Linux: $(Objetos)
	gcc $(Objetos) -O3 -lGL -lGLU -lglut -lm -o $(PROG)

clean:
	-@ rm -f $(Objetos) $(PROG)
