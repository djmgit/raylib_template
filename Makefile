COMPILER = cc
LIB_OPTS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
OUT = -o out
CFILES = main.c

build:
	$(COMPILER) $(CFILES) $(OUT) $(LIB_OPTS)

run:
	./out

clean:
	rm -rf ./out
