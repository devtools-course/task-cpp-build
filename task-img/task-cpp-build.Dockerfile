FROM ghcr.io/1bah/fenrir-base:latest
LABEL authors="lBAH, Kalinin Iwan <koefic.cien@gmail.com>"

USER root
RUN apk add --no-cache build-base
USER fikus
