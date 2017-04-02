#declare variables
CC = g++
STD = -std=c++11
NAME = snowball


all: compile

compile:
		$(CC)  $(STD) -o $(NAME) main.cpp body/body.cpp fmanip/fmanip.cpp \
		payload/payload.cpp fmanip/encryption.cpp math/pow.cpp math/log.cpp \
		math/root.cpp body/search/search.cpp body/path/path.cpp

main.o: main.cpp
	$(CC)  $(STD) -c main.cpp

fmanip.o: fmanip/fmanip.cpp fmanip/encryption.cpp
	$(CC)  $(STD) -c fmanip/fmanip.cpp fmanip/encryption.cpp

body.o: body/body.cpp
	$(CC)  $(STD) -c body/body.cpp

payload.o: payload/payload.cpp
	$(CC)  $(STD) -c payload/payload.cpp

math.o: math/pow.cpp math/log.cpp math/root.cpp
	$(CC)  $(STD) -c math/pow.cpp math/log.cpp math/root.cpp

clean:
	-rm -rf *.o

cleanText:
	find -type f  -name   "*.txt" | grep -v "test.txt" | xargs rm -rf

cleanAll:
	-rm -rf *.o *.txt $(NAME)
