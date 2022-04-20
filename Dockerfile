FROM a12e/docker-qt:5.12-gcc_64
MAINTAINER Francisco Demartino <demartino.francisco@gmail.com>

USER root

RUN apt-get update && apt-get install -y \
    libjack-dev \
    && rm -rf /var/lib/apt/lists/*

USER user

WORKDIR /sagora
