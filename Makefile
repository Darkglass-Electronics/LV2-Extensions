PREFIX ?= /usr/local

all:
clean:

install:
	install -d $(DESTDIR)$(PREFIX)/lib/lv2
	cp -rv dg-* $(DESTDIR)$(PREFIX)/lib/lv2/
