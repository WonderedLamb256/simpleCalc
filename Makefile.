love:
      echo "Ha ha, very funny."

CC = gcc
CFLAGS = -Wall
TARGET = simpleCalc

all: $(TARGET)
      $(CC) $(CFLAGS) -o $(TARGET).c
      
install:
      sudo mkdir /usr/bin/simplecalc
      sudo mv $(TARGET).o /usr/bin/simplecalc && echo "Success" || echo "simpleCalc isn't compiled"
      
clean:
      rm -r $(TARGET){.c,.o} || rm $(TARGET){.c,.o}
