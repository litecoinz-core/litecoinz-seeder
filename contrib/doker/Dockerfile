FROM debian:stretch-slim as build

# Install our build dependencies
RUN apt-get update \
  && apt-get install -y \
    build-essential \
    libboost-all-dev \
    libssl-dev \
  && rm -rf /var/lib/apt/lists/*

COPY . /usr/local/src

WORKDIR /usr/local/src
  
RUN make

FROM debian:stretch-slim

# Install our run dependencies
RUN apt-get update \
  && apt-get install -y \
    build-essential \
    libboost-all-dev \
    libssl-dev \
  && rm -rf /var/lib/apt/lists/*

WORKDIR /usr/local/bin

COPY --from=build /usr/local/src/litecoinz-seeder .

EXPOSE 53
EXPOSE 53/udp

ENTRYPOINT ["./litecoinz-seeder"]

CMD ["-h", "dnsseed.litecoinz.org", \
     "-n", "vps.litecoinz.org", \
     "-m", "dns.cloudflare.com", \
     "-p", "53"]
