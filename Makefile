CXXFLAGS = -O3 -g0 -march=native
LDFLAGS = $(CXXFLAGS)

litecoinz-seeder: dns.o bitcoin.o netbase.o protocol.o db.o main.o util.o
	g++ -pthread $(LDFLAGS) -o litecoinz-seeder dns.o bitcoin.o netbase.o protocol.o db.o main.o util.o -lcrypto

%.o: %.cpp *.h
	g++ -std=c++11 -pthread $(CXXFLAGS) -Wall -Wno-unused -Wno-sign-compare -Wno-reorder -Wno-comment -c -o $@ $<

clean:
	rm -f *o litecoinz-seeder
