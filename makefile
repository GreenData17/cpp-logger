build-dll:
	gcc -c -fPIC ./logger/logger.cpp -o ./logger/bin/logger.o
	gcc -shared ./logger/bin/logger.o -l stdc++ -o ./logger/bin/logger.dll

build-app:
	gcc ./main.cpp -L./ ./logger/bin/logger.dll -l stdc++ -o ./app.bin

clean-build:
	make clean
	make build

build:
	make build-dll
	make build-app

clean:
	rm ./app.bin
	rm ./logger/bin/logger.o
	rm ./logger/bin/logger.dll
